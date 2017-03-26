#include <iostream>
#include <string>
#include <stdio.h>
#include "main_story.h"
#include "player_input.h"
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>


//the following are UBUNTU/LINUX ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

using namespace std;

class Player
{
public:
    string name;
    int level;
    int gender;
    int hp;
};

Player Game_User;

void status(){
    cout << endl;
    
    /* FIRST GEN OF HUD
    cout << MAGENTA << "|--------------------------INFORMATIONS--------------------------|" << RESET << endl;
    cout << MAGENTA << "|--- " << RESET << "Name: " << BOLDBLUE << Game_User.name << RESET << endl;
    cout << MAGENTA << "|--- " << RESET << "Level: " << YELLOW << Game_User.level << RESET << endl;
    cout << MAGENTA << "|--- " << RESET << "Health Points: " << BOLDCYAN << Game_User.hp << RESET << endl;
    cout << MAGENTA << "|--- " << RESET << "Gender: " << YELLOW;
    if(Game_User.gender == 1) { cout << "Female" << RESET << endl; } else { cout << "Male" << RESET << endl; }
    cout << MAGENTA << "|--- " << RESET << "Backpack: " << RED << "EMPTY" << RESET << endl;
    cout << MAGENTA << "|----------------------------------------------------------------|" << RESET << endl;
    */
    
    cout << BOLDCYAN << "|--- " << RESET << "Name: " << BOLDBLUE << Game_User.name << RESET << MAGENTA << " || " << RESET << "Level: " << YELLOW << Game_User.level << RESET << MAGENTA << " || " << RESET << "Health Points: " << BOLDCYAN << Game_User.hp << RESET << MAGENTA << " || " << RESET << "Gender: " << YELLOW;
    if(Game_User.gender == 1) { cout << "Female" << RESET << MAGENTA << " || " << RESET; } else { cout << "Male" << RESET << MAGENTA << " || " << RESET; }
    cout << "Backpack: " << RED << "EMPTY" << RESET << BOLDCYAN << " ---|" << RESET << endl; 
    
}

void load(string get_name) {
        cout << GREEN << "Loading.." << RESET << endl;
        cout << GREEN <<  "Checking if you are already in the world.." << RESET << endl;
        cout  << GREEN << "Connecting to database.." << RESET << endl;

        
        try {
          sql::Driver *driver;
          sql::Connection *con;
          sql::Statement *stmt;
          sql::ResultSet *res;

          driver = get_driver_instance();
          con = driver->connect("tcp://web-coders.xaa.pl:3306", "p488242_user", "janek963");
          con->setSchema("p488242_wordpress");

          stmt = con->createStatement();
          res = stmt->executeQuery("SELECT * FROM player WHERE name='" + get_name + "'");
          if(res->next()) 
            {
                cout << GREEN << "You are already in the system, welcome back!" << RESET;              
                Game_User.name  = res->getString("name");
                Game_User.level = res->getInt("level");
                Game_User.gender = res->getInt("gender");
                Game_User.hp = res->getInt("health");
                
          }
            else {
           cout << YELLOW << "Welcome new adventurer, please tell me what is your gender? (m/f): " << RESET;
           string gender = "";
           string gender_database = "0";
           cin >> gender;

            if(gender == "m" | gender == "M" | gender == "male" | gender == "Male"  | gender == "MALE") {
                gender_database = "0";
                Game_User.gender = 0;
            }
            else {
                gender_database = "1"; 
                Game_User.gender = 1;
            }
           stmt = con->createStatement();
           res = stmt->executeQuery("INSERT INTO player (name,level,gender,health) VALUES ('" + get_name + "','1', " + gender_database + ", '100')");
                
                
           Game_User.name  = get_name;
           Game_User.level = 1;
           Game_User.hp = 100;
}
          delete res;
          delete stmt;
          delete con;

        } catch (sql::SQLException &e) {
            if(e.getErrorCode()>0) {
                  cout << "# ERR: SQLException in " << __FILE__;
                  cout << "(" << __FUNCTION__ << ") on line "<< __LINE__ << endl;
                  cout << "# ERR: " << e.what();
                  cout << " (MySQL error code: " << e.getErrorCode();
                  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
                }
        }


}


void load_stealth(string get_name) {
        try {
          sql::Driver *driver;
          sql::Connection *con;
          sql::Statement *stmt;
          sql::ResultSet *res;

          driver = get_driver_instance();
          con = driver->connect("tcp://web-coders.xaa.pl:3306", "p488242_user", "janek963");
          con->setSchema("p488242_wordpress");

          stmt = con->createStatement();
          res = stmt->executeQuery("SELECT * FROM player WHERE name='" + get_name + "'");
          if(res->next()) 
            {          
                Game_User.name  = res->getString("name");
                Game_User.level = res->getInt("level");
                Game_User.gender = res->getInt("gender");
                Game_User.hp = res->getInt("health");
                
          }
            else {
           cout << RED << "[ERROR] PLAYER NOT FOUND. RESTART GAME" << RESET;
          }
          delete res;
          delete stmt;
          delete con;

        } catch (sql::SQLException &e) {
            if(e.getErrorCode()>0) {
                  cout << "# ERR: SQLException in " << __FILE__;
                  cout << "(" << __FUNCTION__ << ") on line "<< __LINE__ << endl;
                  cout << "# ERR: " << e.what();
                  cout << " (MySQL error code: " << e.getErrorCode();
                  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
                }
        }


}

