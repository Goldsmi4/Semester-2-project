#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "game.h"
#include "game_title.h"
using namespace std;

void (Car)

system('cls');

{
    int car_path;
    cout << "\n!!!----------------------Chapter One: Escape----------------------!!!" << endl;
    cout << "You grab your car keys and whatever is to hand. You then head out to the" << endl;
    cout << "car and get in. After switching the engine on you see that there is little" << endl;
    cout << "fuel left in the tank. What should you do?" << endl;
    
   
    cout << "\t >> 1: Look in the garage for fuel" << endl;
    cout << "\t >> 2: Try using a neighbours cars, hope it has more fuel" << endl; //
    cout << "\t >> 3: ignore it, there should be enough" << endl;
    
    
    if(car_path == 1)
    {
    cout << "You go into the garage and look around and see fuel cans, a knife and some duck tape." << endl;
    cout << "You pick these items up and go back to the car." << endl;
    cout << "There isn't much fuel in the fuel cans but you pour what is there into the tank and " << endl;
    cout << "and put the empty cans into the boot." << endl;
    cout << "You get back into the car and see the tank is now 1/3 full." << endl;
    cout << " you start driving"
    }
    else if(car_path == 2)
    {
    int Neighbour_path;
    cout << "You leave the keys in the ignition of your car and go to your neighbour's house. You knock" << endl;
    cout << "on the front door and there no response inside." << endl;
    cout << "How do you want to enter?" << endl;
        
    cout << "/t >> 1: Shout through the letterbox to see if there is anyone home" << endl;
    cout << "/t >> 2: Sneak in through the backdoor" << endl;
    cout << "/t >> 3: Kick the door down" << endl;
    cout << "/t >> 4: return to your car"
    
    }
    else if(car_path == 3)
    {
    cout << "you get into the car and start driving" << endl;
    }
       
    else
    {
     cout << "enter valid input " << endl;
        goto retry;   
    }
 
    cout << "\n----------------------Press key to continue----------------------" << endl;
    _getch();
    
}
    int route_path;
    cout << "ou reach the edge of the neighbourhood, which route do you want to take?" << endl;

    cout << "/t >> 1: Take the ring road and travel around"
   
{
    
}















