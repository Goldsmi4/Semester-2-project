#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "game_title.h"
#include <sstream>
#include "storySupplies/story_supplies.h"
#include "story_outside/story_outside.h"
#include "call_family.h"
#include "story_car/storyCar.h"


using namespace std;

void start_game()
    
    {

    
        int storyline_path;

        cout << "A strain of rabies capable of reanimating and controlling dead hosts" << endl;
        cout << "has escaped a CDC research facility in Manhattan. It has contaminated" << endl;
        cout << "the entire manhattan island overnight forcing the army to contain the" << endl;
        cout << "infection by destroying bridges and tunnels...."<< endl;


        cout << "\n you wake up to the news the following morning..." << endl; 
        cout << "there is an evac point across the other side of manhattan" << endl;
        cout << "what do you do ? \n " << endl;

        cout << "\t >> 1: go outside " << endl;                             
        cout << "\t >> 2: call family " << endl;           
        cout << "\t >> 3: gather supplies" << endl;                         
        cout << "\t >> 4: get in the car and drive off" <<endl;                             
        cout << "\t >> 5: stay indoors" <<endl;                             

        retry:
        cout << "\n choose your start point "<< endl;
        cin >> storyline_path;

        if(storyline_path == 1){
            cout<<"goodluck young one, try and survive"<<endl;
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
         cout << "enter valid input " << endl;
            goto retry;
        }

        cout << "\n----------------------Press key to continue----------------------" << endl;
    
    

        return;
    }
