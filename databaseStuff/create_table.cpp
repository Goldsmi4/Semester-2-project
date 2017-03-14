#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 

//this segment will be used to create a table within the database//
//
static int callback(void *NotUsed, int argc, char **argv, char **azColName){
   int i;
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

//this code segment will connect to an existing database//
//if it does not exist, it will be created//
int main(int argc, char* argv[])
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int  rc;
   const char *sql;

   //create sql table//
   rc = sqlite3_open("PLAYER.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   }else{
      fprintf(stdout, "Opened database successfully\n");
   }

   //create sql table and defines columns //
   sql = "CREATE TABLE PLAYER("  \
         "ID INT  PRIMARY KEY    NOT NULL," \
         "NAME           TEXT    NOT NULL," \
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
   }
   sqlite3_close(db);
   return 0;
}