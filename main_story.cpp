#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "game_title.h"
#include <sstream>
#include "storySupplies/story_supplies.h"
using namespace std;

void start_game()
    
    {

         
        string name= "";
    
        cout<< "please input player name: \n>";
        getline(cin,name);
    
        cout << "You better move fast, " << name << ". The zombies are attacking the city." << endl;
        cout << "----------------------Press any key to continue----------------------" << endl;

        
    
    
    

        
    
        int storyline_path;

        cout << "A strain of rabies capable of reanimating and controlling dead hosts" << endl;
        cout << "has escaped a CDC research facility in Manhattan. It has contaminated" << endl;
        cout << "the entire manhattan island overnight forcing the army to contain the" << endl;
        cout << "infection by destroying bridges and tunnels...."<< endl;


        cout << "\n you wake up to the news the following morning..." << endl; 
        cout << "there is an evac point across the other side of manhattan" << endl;
        cout << "what do you do ? " << endl;

        cout << "\t >> 1: go outside " << endl;                             //Dil
        cout << "\t >> 2: get in the car and drive off " << endl;           //Tim
        cout << "\t >> 3: gather supplies" << endl;                         //Will
        cout << "\t >> 4: stay indoors" <<endl;                             //Hashim
        cout << "\t >> 5: call family " <<endl;                             //ak

        retry:
        cout << "\n choose your start point " + string(name) << endl;
        cin >> storyline_path;

        if(storyline_path == 1){


            cout << "\n!!!----------------------Chapter One: Escape----------------------!!!" << endl;
            cout << "\nYou: Where are we going?" << endl;
            cout << "Chief: Soon you will know. Just follow me." << endl;
            cout << "# You run behind the chief." << endl;
        }

        else if(storyline_path == 2){
            cout << "\n!!!----------------------Chapter One: Escape----------------------!!!" << endl;
            cout << "\nYou: I am going to find a way out!" << endl;
            cout << "Chief: You are insane. You will get killed out there." << endl;
            cout << "You: I have my secrets and I know my way out." << endl;
            cout << "# You jump over the nearby broken fence" << endl;
            cout << "# and run off towards the City Wall." << endl;
        }
        else if(storyline_path == 3){
            supplies();
            
            
            
        }       


        else{
         cout << "enter valid input " << endl;
            goto retry;
        }

        cout << "\n----------------------Press key to continue----------------------" << endl;
    
    

        return;
    }
