#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>


// this segment will be used to create a table within the database
static int callback(void *data, int argc, char **argv, char **azColName){
    
   int i;
   fprintf(stderr, "%s: ", (const char*)data);
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}



//this code segment will connect to an existing databse
//if it does not exist, it will be created 
int main(int atgc , char* argv[])
{
    sqlite3 *db;
    char *zErrMsg=0;
    int rc;
    const char *sql;
    
    const char* data = "callback function called";
    
    //will open database//
    rc = sqlite3_open("inventory.db",&db);//declaring/ stating name of db
    
     if( rc ){
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
     }else{
        fprintf(stderr, "Opened database successfully\n");//testing to make sure the db works
     }
    
     /* Create SQL statement */
     sql = "SELECT * from INVENTORY";

     /* Execute SQL statement */
     rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
     if( rc != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
     }else{
        fprintf(stdout, "Operation done successfully\n");
     }
     sqlite3_close(db);
     return 0;
}   
    
    
    
    
    
    
    
    
    
    
    
    
//    /* inserted new entries */
//   sql = "INSERT INTO INVENTORY (ID,NAME,AGE,ADDRESS,SALARY) "  \
//         "VALUES (2, 'Paul', 32, 'California', 20000.00 ); " \
//         "INSERT INTO INVENTORY (ID,NAME,AGE,ADDRESS,SALARY) "  \
//         "VALUES (3, 'Allen', 25, 'Texas', 15000.00 ); "     \
//         "INSERT INTO INVENTORY (ID,NAME,AGE,ADDRESS,SALARY)" \
//         "VALUES (4, 'Teddy', 23, 'Norway', 20000.00 );" \
//         "INSERT INTO INVENTORY (ID,NAME,AGE,ADDRESS,SALARY)" \
//         "VALUES (5, 'Mark', 25, 'Rich-Mond ', 65000.00 );";
//
//   /* Execute SQL statement */
//   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
//   if( rc != SQLITE_OK ){
//      fprintf(stderr, "SQL error: %s\n", zErrMsg);
//      sqlite3_free(zErrMsg);
//   }else{
//      fprintf(stdout, "Records created successfully\n");
//   }
//  sqlite3_close(db);
//   return 0;
//}   
    
    
    
    
    
    
    // Create SQL table //
//   sql = "CREATE TABLE INVENTORY("  \
//         "ID INT PRIMARY KEY     NOT NULL," \
//         "NAME           TEXT    NOT NULL," \
//         "AGE            INT     NOT NULL," \
//         "ADDRESS        CHAR(50)," \
//         "SALARY         REAL );";
//
//   /* Execute SQL statement */
//   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
//   if( rc != SQLITE_OK ){
//   fprintf(stderr, "SQL error: %s\n", zErrMsg); //tests database opens correctly
//      sqlite3_free(zErrMsg);
//   }else{
//      fprintf(stdout, "Table created successfully\n");
//   }
//   sqlite3_close(db);
//   return 0;
//        
//} 
