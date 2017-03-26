#include <iostream>
#include <string>
#include <stdio.h>
#include "main_story.h"
#include "player_input.h"
#include "mysql_functions.h"
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


int main()
    
{
   {
      cout << string( 100, '\n' );
cout << RED << "                                     _   _            "<< endl;
cout << "                                    | | (_)           "<< endl;
cout << "    __ _ _   _  __ _ _ __ __ _ _ __ | |_ _ _ __   ___ "<< endl;
cout << "   / _` | | | |/ _` | '__/ _` | '_ \\| __| | '_ \\ / _ \\"<< endl;
cout << "  | (_| | |_| | (_| | | | (_| | | | | |_| | | | |  __/"<< endl;
cout << "   \\__, |\\__,_|\\__,_|_|  \\__,_|_| |_|\\__|_|_| |_|\\___|"<< endl;
cout << "      | |                                             "<< endl;
cout << "      |_|                                             " << RESET << endl;

       
    cout << YELLOW << "Do you want to play quarantine zombie survival? " << endl;
    bool decision;
    decision = answer();
    if (decision) {
        cout << RED << "Welcome to hell.\n" << RESET << endl;

       cout<<"Enter your Name: "; 
       string user_name = "";
       cin >> user_name;
       load(user_name);
        
        cout << endl;
       

        cout << endl;  
        start_game(user_name); //begin quarantine
        
    }
    
}}
    