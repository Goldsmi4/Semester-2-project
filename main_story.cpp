#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include "storySupplies/story_supplies.h"
#include "story_outside/story_outside.h"
#include "call_family.h"
#include "story_car/storyCar.h"
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
void start_game(string user_name)
    {

    
        int storyline_path;
        cout << BOLDRED << "|------------------------------------- CHAPTER 1 -------------------------------------|";
        cout << MAGENTA << "\n  A strain of rabies capable of reanimating and controlling dead hosts" << endl;
        cout << "  has escaped a CDC research facility in Manhattan. It has contaminated" << endl;
        cout << "  the entire manhattan island overnight forcing the army to contain the" << endl;
        cout << "  infection by destroying bridges and tunnels...."<< RESET << endl;


        cout << MAGENTA << "\n  You wake up to the news the following morning..." << endl; 
        cout << MAGENTA << "  there is an evac point across the other side of manhattan" << endl;
        cout << BLUE << "  What do you do ? \n " << RESET << endl;
    
        cout << YELLOW << "\t >> 1: go outside " << endl;                             
        cout << "\t >> 2: call family " << endl;           
        cout << "\t >> 3: gather supplies" << endl;                         
        cout << "\t >> 4: get in the car and drive off" <<endl;                             
        //cout << "\t >> 5: stay indoors" << RESET <<endl;                             

        retry:

        load_stealth(user_name);
        status();
        cout << BLUE << "Choose your start point: " << RESET;
        cin >> storyline_path;
        cout << endl;
        if(storyline_path == 1){
            outside_part();
        }

        else if(storyline_path == 2){
            family();
        }
    
        else if(storyline_path == 3){
            supplies();
        } 
    
        else if(storyline_path == 4){
            car_run();
        } 
        else{
         cout << "Enter valid input! " << endl;
            goto retry;
        }

        cout << "\n----------------------Press key to continue----------------------" << endl;
    
    

        return;
    }
