#include <iostream>
#include <stdlib.h>
#include "story_outside/story_outside.h"
#include "mysql_functions.h"

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
void status();
void load_stealth(string user_name);

void options();

int family()
{
    cout << string( 100, '\n' );
    cout<<"Line has been cut. It seems to be more complicated..\n"<<endl;
    options();
    return(0);
}

void idiot()
{
    int input;
    {
        cout << "You die, from a zombie attack bet you wished you had a weapon to defend yourself" <<endl;
           
 cout << RED << "  _____          __  __ ______      ______      ________ _____                        " << endl;
 cout << RED << " / ____|   /\\   |  \\/  |  ____|    / __ \\ \\    / |  ____|  __ \\                        " << endl;
 cout << RED << "| |  __   /  \\  | \\  / | |__      | |  | \\ \\  / /| |__  | |__) |                       " << endl;
 cout << RED << "| | |_ | / /\\ \\ | |\\/| |  __|     | |  | |\\ \\/ / |  __| |  _  /                        " << endl;
 cout << RED << "| |__| |/ ____ \\| |  | | |____    | |__| | \\  /  | |____| | \\ \\                        " << endl;
 cout << RED << " \\_____/_/    \\_|_|  |_|______|    \\____/   \\/   |______|_|  \\_\\                       " << endl;
 cout << RED << "                                                                                       " << endl;
 cout << RED << "                                                                                       " << endl;
 cout << RED << "__     ______  _    _               _____  ______       _____  ______          _____   " << endl;
 cout << RED << "\\ \\   / / __ \\| |  | |        /\\   |  __ \\|  ____|     |  __ \\|  ____|   /\\   |  __ \\  " << endl;
 cout << RED << " \\ \\_/ | |  | | |  | |       /  \\  | |__) | |__        | |  | | |__     /  \\  | |  | | " << endl;
 cout << RED << "  \\   /| |  | | |  | |      / /\\ \\ |  _  /|  __|       | |  | |  __|   / /\\ \\ | |  | | " << endl;
 cout << RED << "   | | | |__| | |__| |     / ____ \\| | \\ \\| |____      | |__| | |____ / ____ \\| |__| | " << endl;
 cout << RED << "   |_|  \\____/ \\____/     /_/    \\_|_|  \\_|______|     |_____/|______/_/    \\_|_____/  " << endl;
 cout << RESET;                                                                                                      
    }
}
void person()
{
    int input;
    {
        cout << string( 100, '\n' );
        cout << "Sorry but our member of project (Abdulkadir) was to lazy to finish his task. Game here is stucked. Sorry \n ~Jan Sargsyan";
    }
}

void stranger()
{
    int input;
    {
        cout << "Somebody heard your screams! ... \n";
        cout << MAGENTA <<  "Hi my name is Paul and I need your help to get to down town to escape this madness..\n" << RESET << endl;
        cout << YELLOW << "\t >> 1: Join forces with the person " << endl;                             
        cout << "\t >> 2: Run!" << RESET<< endl;                   
        status();
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout << string( 100, '\n' );
               person();
               break;
           case 2:
               cout << string( 100, '\n' );
               cout<<""<< endl;
               break;
               
       }
          
    }
}

void temp(){
    int input;
    {
        cout << "9mm Pistol has been added to you're inventory\n" << endl;
         cout << "Or not cause I dont use any database... -,-' " << endl;
        cout << YELLOW << "\t >> 1: Go outside " << endl;                             
        cout << "\t >> 2: Shout for help" << RESET<< endl;                   
        status();
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout << string( 100, '\n' );
               outside_part();
               break;
           case 2:
               cout << string( 100, '\n' );
               stranger();
               break;
               
       }
          
    }
}
    


void otheroptions()
{
    int input;
    {
        cout << "You've found a pistol!\n" << endl;
        cout << YELLOW << "\t >> 1: Pickup the pistol " << endl;                             
        cout << "\t >> 2: Leave pistol" << RESET<< endl;                   
        status();
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout << string( 100, '\n' );
               temp();
               break;
           case 2:
               cout << string( 100, '\n' );
               idiot();
               break;
               
       }
          
    }
}
    

void options()
{
    int input;
    
    
    {
        
        cout << YELLOW << "\t >> 1: Search the house " << endl;                             
        cout << "\t >> 2: Go to neighbours " << endl;           
        cout << "\t >> 3: Hide" << RESET << endl;           
        status();
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       switch(input)
       {
           case 0:
               exit(0);
           case 1:
               cout << string( 100, '\n' );
               otheroptions();
               break;
           case 2:
               cout << string( 100, '\n' );
               break;
           case 3:
               cout << string( 100, '\n' );
               cout << "You die from starvation" << endl;
               cout << "GAME OVER" << endl;       
               break;
           default:
                cout << RED << "[ERROR] Invalid option please choose between 1 and 4" << RESET << endl;
         }
    
               
       }
}

