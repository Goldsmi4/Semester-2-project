#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "../mysql_functions.h"

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
void remove_hp(int how_much);
void load_stealth(string user_name);

void outside_path();

//int main()
int outside_part()

{
    cout << "" << endl;
    cout << "\n" << endl;
    outside_path();
    return(0);
}    
    

void death_zombie_attack()          //ways of dying 
{
    int death_zombie_attack;   
    
    cout << "You die, from a zombie attack!!!" <<endl;
    
    cout << "\n" << endl;
    
    
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

void debris_death()                 //ways of dying 
   
{
    int debris_death;

    cout << "\n" << endl;    
    
    cout << "The debris falls on you, and you are crushed to death!!!" <<endl;
    
    cout << "\n" << endl;
    
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

void quarantine()
    
{
    int quarantine;

    cout << "You discover a massive quarantine area that has locked down the city." << endl;
    cout << "With military personnel in every corner searching people and scanning them for something." << endl;
    cout << "\n" << endl;
   
        
 cout << GREEN << "   _____  ____   _   _   _____  _____          _______  _    _  _              _______  _____  ____   _   _   _____ " << endl;
 cout << GREEN << "  / ____|/ __ \\ | \\ | | / ____||  __ \\     /\\ |__   __|| |  | || |         /\\ |__   __||_   _|/ __ \\ | \\ | | / ____|" << endl;
 cout << GREEN << " | |    | |  | ||  \\| || |  __ | |__) |   /  \\   | |   | |  | || |        /  \\   | |     | | | |  | ||  \\| || (___  " << endl;
 cout << GREEN << " | |    | |  | || . ` || | |_ ||  _  /   / /\\ \\  | |   | |  | || |       / /\\ \\  | |     | | | |  | || . ` | \\___ \\ " << endl;
 cout << GREEN << " | |____| |__| || |\\  || |__| || | \\ \\  / ____ \\ | |   | |__| || |____  / ____ \\ | |    _| |_| |__| || |\\  | ____) |" << endl;
 cout << GREEN << "  \\_____|\\____/ |_| \\_| \\_____||_|  \\_\\/_/    \\_\\|_|    \\____/ |______|/_/    \\_\\|_|   |_____|\\____/ |_| \\_||_____/ " << endl;
 cout << GREEN << "                                                                                                                    " << endl;
  cout << RESET;                                                                                                                      
       
}



void park_into_city()               //4th option in its third stage 
    
{
    int park_into_city;
    cout << "As you exit the park you see smoke rising in the air on the outskirts of the city." << endl;
    cout << "However there a multiple zombies between you and the outskirts." << endl;
    
    cout << YELLOW << "\t >> 1: Force your way through the zombie horde to get your destination quicker." << endl;
    cout << "\t >> 2: Find an alternate path around the zombies that is safer but longer." << RESET << endl;
    status();
    retry10:
    cout << "Enter your choice: ";
    cin >> park_into_city;
    
    cout << "\n" << endl;
    
    switch(park_into_city)
    {    
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "By forcing your way through the horde just attracts more zombies and you eventually get swarmed." << endl;
            cout << "\n" << endl;
            death_zombie_attack();
        
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "It takes longer but you chose the safer option towards the outskirts of the city." << endl;
            cout << "\n" << endl;
            quarantine();
        
            break; 
            
        default: 
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
                goto retry10;
    
    

       
    }
}

void danger_in_park()               //4th option in its second stage
    
{
    int danger_in_park;
    
       cout << "As you go deeper into the park you see a person in the distance on their own." << endl;
       cout << "There is also a car on the sidewalk that looks to have supplies in it." << endl;
       cout << "What decision should you make?" << endl;

        cout << YELLOW << "\t >> 1: Walk up to the person to figure out what's going on " << endl;          
        cout << "\t >> 2: Go towards the car" << RESET<< endl;  

   
    status();
     retry9:
    cout << "Enter your choice: ";
    cin >> danger_in_park;
    
    cout << "\n" << endl;
    
    switch(danger_in_park)
    {    
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "You walk up to the person to ask them what's going on." << endl;
            cout << "A woman turns around however its not a living woman." << endl;
            cout << "It turns out she's a zombie and starts walking towards you." << endl;
            cout << "You quickly start pacing backwards and trip over yourself." << endl;
            cout << "\n" << endl;
            death_zombie_attack();
        
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "You go up to the car, unfortunately the car is broken but you were able to get essential supplies out of it." << endl;
            cout << "And you carry on your journey forward." << endl;
            cout << "\n" << endl;
            park_into_city();
        
            break; 
            
        default: 
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
                goto retry9;
    
    

       
    }
   
}


void park()                     //4th option that leads to an abandoned park
    
{
    int park;
    cout << "While looking around the park you see that everyone is gone" << endl;
    cout << "There is a section that says 'off limits'" << endl;
    cout << "And a walkway leading further into the park" << endl;

    
     cout << YELLOW << "\t >> 1: Ignore the sign and walk into the off limits area " << endl;          
     cout << "\t >> 2: Head further into the park" << RESET<< endl;  
     retry8:
    status();
    cout << "Enter your choice: ";
    cin >> park;
    
    cout << "\n" << endl;
    
    switch(park)
    {    
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "By ignoring the signs you luckily avoid any danger and in fact rewarded with a shortcut through the park." << endl;
            cout << "\n" << endl;
            danger_in_park();
        
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "You go further into the park and discover some new things." << endl;
            cout << "\n" << endl;
            danger_in_park();
        
            break; 
            
        default: 
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
                goto retry8;
    
    

       
    }
   
    
}


void station()                  // 3rd option in its third stage
    
{
    int station;

    cout << "While on your journey you see something in the distance however there is something blocking it." << endl;
    cout << " The only way around is to go through a subway tunnel." << endl;
    cout << "Or go through a partially collapsed building." << endl;

    
     cout << YELLOW << "\t >> 1: The Subway underground " << endl;          
     cout << "\t >> 2: The collapsed building" << RESET<< endl;  
   
   
    status();
     retry7:
    cout << "Enter your choice: ";
    cin >> station;
    
    cout << "\n" << endl;
    
    switch(station)
    {    
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "You enter the subway underground and slowly follow your way around with the lights flickering." << endl;
            cout << "\n" << endl;
            cout << "You find your way out of the subway to discover something unexpected." << endl;
            cout << "\n" << endl;
            quarantine();
            
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "You decide to go under the collapsed building." << endl;
            cout << "However you make a wrong footing which sends debris falling from the ceiling." << endl;
            cout << "\n" << endl;
            debris_death();
        
            break; 
            
        default: 
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
                goto retry7;
    
    

       
    }
   
}    

void inside_building()                      //leads on from the 3rd option in its second stage
    
{
    int inside_building;                      

    cout << "After entering the building you discover that everything is a mess" << endl;
    cout << "After seeing all the clutter" << endl;
    cout << "Do you...?" << endl;
    
 
    
    cout << "\n" << endl;
    cout << YELLOW << "\t >> 1: Rummage through everything to try and find something useful " << endl;          
    cout << "\t >> 2: Move into the next room across the hallway" << RESET<< endl;  

    status();  
    retry4:
    cout << "Enter your choice: ";
    cin >> inside_building;
    
    cout << "\n" << endl;
    
    switch(inside_building)
    {
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "Notting much.. Some rust cans.." << endl;
            cout << "You then leave the building to search elsewhere" << endl;
            station();
            
            break;
            
        case 2:
            cout << string( 100, '\n' );
            cout << "After entering the next room you hear a moan coming from under a desk" << endl;
            cout << "You look to discover a zombie, which startles you and alerts the zombie" << endl;
            cout << "because of this another comes and you are eventually swarmed by the two zombies" << endl;
            cout << "\n" << endl;
            death_zombie_attack();
           
            break;
            
        default: 
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
                goto retry4;
    
    

    }           
            
}        


void building()                     // This branch is the 3rd option, the building
    
{    
    int building;
    

    cout << "You peak through the building window but no one is there" << endl;
    cout << "You see the front door is locked" << endl;

    cout << YELLOW << "\t >> 1: Smash the window to get inside " << endl;          
    cout << "\t >> 2: Find another way inside" << RESET<< endl;  

    status();
    retry3:
    cout << "Enter your choice: ";
    cin >> building;
    
    cout << "\n" << endl;
    
    switch(building)
    {    
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "You smash the window open but sustained an injury in the process" << endl;
             remove_hp(30);
            cout << "\n" << endl;
            inside_building();
        
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "You go around the back to find a back door slightly open and enter the building" << endl;
            cout << "\n" << endl;
            inside_building();
        
            break; 
            
        default: 
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
                goto retry3;
    
    

       
    }
    
}


void city()                         // third stage leads on from the 2nd choice split path decision
    
{
    int city;
    cout << "While discovering another part of city you see that the whole place is completely deserted with no signs of life." << endl;
    cout << "A cross road is blocked by empty cars." << endl;
    cout << "Do you...?" << endl;
    
   
    

        cout << YELLOW << "\t >> 1: Look for a car with fuel inside and drive off out of here " << endl;          
    cout << "\t >> 2: Carry on looking for some sort of life on foot" << RESET<< endl;  

    status();
     retry6:
    cout << "Enter your choice: ";
    cin >> city;
    
    cout << "\n" << endl;
    
    switch(city)
    {
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "You luckily find one of the cars with fuel and start driving off to a safer place." << endl;
            cout << "After driving for awhile, you find the outskirts of the city only to discover something unexpected." << endl;
            cout << "\n" << endl;
            quarantine();
            
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "After walking for miles on foot , you finally discover the edge of the city, to realise something completely unexpected is happening." << endl;
            cout << "\n" << endl;
            quarantine();            
            
            break;
           
        default:
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
            goto retry6;
    
    
   
    }    
    
}


void split_road_path()             //leads on from the 2nd option the trailer
    
{
    int split_road_path;

    cout << "After continuing the path of following the deserted road you come across a dilmemma" << endl;
    cout << "The road splits off into two directions" << endl;
    cout << "Which direction do you decide to take?" << endl;
    
    

    
    cout << "\n" << endl;
    

    cout << YELLOW << "\t >> 1: The left path which seems shorter and possibly more dangerous " << endl;          
    cout << "\t >> 2: The right path whiich seems longer and possibly more safe" << RESET<< endl;  

    status();
    retry5:
    cout << "Enter your choice: ";
    cin >> split_road_path;
    
    cout << "\n" << endl;
    
    switch(split_road_path)
    {
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "It turns out that the shorter option was a good choice as you quickly find yourself in another part of the city." << endl;
            cout << "\n" << endl;
            city();
            
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "It turns out that the longer option was a bad idea as the road is blocked by a horde of zombies." << endl;
            cout << "You accidently make noise to attract them." << endl;         
            cout << "\n" << endl;
            death_zombie_attack();
            
            break;
           
        default:
           cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
            goto retry5;
    
    
 
    }    


}




void trailer()                          //This branch  is the 2nd option 
                                        //And takes the player to an abandoned trailer 
   

{
    int trailer;

    
    cout << "After finding a trailer in the middle of the road do your curious of what's inside" << endl;

    cout << YELLOW << "\t >> 1: Take a look inside " << endl;          
    cout << "\t >> 2: Carry on following the road" << RESET<< endl;  

    status();
      retry2:
    cout << "Enter your choice: ";
    cin >> trailer;
        
    cout << "\n" << endl;
    
    switch(trailer)
    {    
        case 0:
            exit(0);
        
        case 1:
            cout << string( 100, '\n' );
            cout << "Unfortunately for you there's nothing inside, must have already been ransacked" << endl;
            cout << "therefore you carry on following the road" << endl;
            cout << "\n" << endl;
            split_road_path();
            
            break;
        
        case 2:
            cout << string( 100, '\n' );
            cout << "You carry on down the road." << endl;
            cout << "\n" << endl;
            split_road_path();
            
            break;
        
        default:
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
            goto retry2;
    
    

    
    }
    
} 
        
   
            
void outside_path()                         // main start of the outside story path

{
    int outside_path;
    
    cout << string( 100, '\n' );
    cout << "You walk outside and see multiple paths that lead to different districts" << endl;
    
                              /* when the user meets a dead end and has to turn back, 
                                          they will return at the "retry" section */

    
   cout << YELLOW << "\t >> 1: A dark alleyway" << endl;
    cout << "\t >> 2: follow a deserted road" << endl;
    cout << "\t >> 3: Go to the nearest building" << endl;
    cout << "\t >> 4: Go to to an abandoned park" << RESET << endl;
    status();
     retry:  
    cout << "Enter your choice: ";
    
    cin >> outside_path;
    
    cout << "\n" << endl;
    
    switch(outside_path)
    {    
    case 0:
        exit(0);
    
    case 1:
        cout << "You follow the alleyway path and discover it is a dead end, turn back!" << endl;
            goto retry;                 // goto function lets the user return back to the original question
        
        break;
    
    
    case 2:
            cout << string( 100, '\n' );
        cout << "You find an abandoned Trailer on the way" << endl;
        cout << "\n" << endl;
        trailer();
        
        break;
   
    
    case 3:
            cout << string( 100, '\n' );
        cout << "You arrive at the abandoned buildng and see something moving in the window" << endl;
        cout << "\n" << endl;
        building();    
        
        break; 
            
    
    case 4:
            cout << string( 100, '\n' );
        cout << "You end up in an abandoned park with no one to be seen" << endl;
        park();    
        
        break;
    
    default:
        cout << RED << "[ERROR] Invalid option please choose between 1 and 4" << RESET << endl;
            goto retry;    
    }
    
    

    
    
}


    

