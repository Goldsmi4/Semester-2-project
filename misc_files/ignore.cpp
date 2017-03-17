
#include <fstream>
#include <iostream>
#include <limits.h>
#include <sqlite3.h>
#include <sstream>
#include <string>
#include <unistd.h>
using namespace std;

static int callback(void* NotUsed, int argc, char** argv, char** azColName)
{

        
    int i;
    string output = "";
    for (i = 0; i < argc; i++) {
        output += (string)azColName[i];
        output += " = ";
        output += (string)(argv[i] ? argv[i] : "NULL");
        output += "\n";
    }
    fprint(output);
    return 0;
}

int Database::recent_user(string user_name)
{
    ofstream file;
    file.open("recent-user.txt");
    file << name;
    file.close();
    return 0;
}

string Database::recent_user_name()
{
    ifstream infile("recent-user.txt");

    string text = "";
    if (infile.good()) {
        string sLine;
        getline(infile, sLine);
        text = sLine;
    }
    infile.close();

    return text;
}


int Database::create_user_database(string user_name)
//this code segment will connect to an existing database//
//if it does not exist, it will be created//
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int  rc;
   char *sql;
    
    
   string database_name = "user-save ("+user_name+ ").db"

   //create sql table//
   rc = sqlite3_open(database_name.c_str(), &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
       
   }else{
      fprintf(stdout, "Opened database successfully\n");
   }

   //create sql table and defines columns //
   sql =(char*) "CREATE TABLE PLAYER("  \
         "NAME           TEXT    NOT NULL PRIMARY KEY," \
         "GENDER         CHAR(50) NOT NULL," \
         "HEALTH         INT)";

   // will execute the sql statment declared above//
   // 
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", zErrMsg); // testing to make sure the database is
      sqlite3_free(zErrMsg);                    //created correctly 
   }else{
      fprintf(stdout, "Table created successfully\n");
      recent_user(user_name)
   }
   sqlite3_close(db);
   return 0;
}

int Database::create_user_inventory(string user_name)
//this code segment will connect to an existing database//
//if it does not exist, it will be created//
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int  rc;
   char *sql;
    
    
   string database_inventory = "INVENTORY- ("+user_name+ ".db"

   //create sql table//
   rc = sqlite3_open(database_inventory.c_str(), &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
       
   }else{
      fprintf(stdout, "Opened database successfully\n");
   }

   //create sql table and defines columns //
   sql =(char*) "CREATE TABLE INVENTORY("  \
         "ITEMNAME           TEXT    NOT NULL PRIMARY KEY," \
         "INSIDE             BOOLEAN NOT NULL,"\
         "NAME               TEXT FOREIGN KEY REFERENCES PLAYER(NAME);");

   // will execute the sql statment declared above//
   // 
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", zErrMsg); // testing to make sure the database is
      sqlite3_free(zErrMsg);                    //created correctly 
   }else{
      fprintf(stdout, "Table created successfully\n");
   }
   sqlite3_close(db);
   return 0;
}

int Database::insert_inventory(string item_name,string inside,string user_name)
    
    
{
       sqlite3 *db;
       char *zErrMsg = 0;
       int rc;
       const char *sql;

       /* Open database */
       rc = sqlite3_open(database_inventory.c_str(), &db);
       if( rc ){
          fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
          return(0);
       }else{
          fprintf(stderr, "Opened database successfully\n");
       }

       /* Create SQL statement */
       sqlstring = "INSERT INTO INVENTORY(""ITEMNAME,INSIDE,NAME"")" \
             "VALUES (""\""+item_name+"\",\""+inside+"\",\""+user_name+"\""");";

       //Execute SQL statement//
       sql = (char*)sqlString.c_str();


       rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

       if (rc != SQLITE_OK) {
           string zErrMsg_str = zErrMsg;
           if (zErrMsg_str == "UNIQUE constraint failed: INVENTORY.itemname") {
               fprintf("You already have a " + item_name + ".");
           } else {
               print(zErrMsg_str);
           }
           sqlite3_free(zErrMsg);
       } else {
           fprintf("Added " + item_name + " to your inventory.");
       }

       sqlite3_close(db);
       return 0;
}


