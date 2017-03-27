#include <iostream>
#include <stdlib.h>
#include "../story_car/storyCar.h"
#include "../mysql_functions.h"
#include "../story_outside/story_outside.h"

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
void add_item2(string item);

void opt();
void living_room ();
void search_room ();
void kitchen ();  //defined all functions at the top//
void garage();
void bathroom();
void office();
void outside();



int supplies()//when story_supplies.cpp file is called,it tests if the function call is correct 
{
    cout<<"==========================="<<endl;
    opt();
    return(0);
}

void office() //office function 
    
{
    
    int input;
    
    
    {
        cout << "You are in your ofice.." << endl;
        cout << MAGENTA <<  "(navigate around the house using directions)\n" << RESET << endl;
        
        cout << YELLOW << "\t >> 1: Go forward " << endl; //colours implemented to make program more visually appealing          
        cout << "\t >> 2: Go backwards" << endl;   
        cout << "\t >> 3: Go left" << endl; 
        cout << "\t >> 4: Go right" << endl; // navigation options which takes user around house, user is only able to access specific areas depending on room
        cout << "\t >> 5: Go downstairs" << endl; 
        cout << "\t >> 6: Go upstairs" << endl; 
        cout << "\t >> 7: Search room" << RESET<< endl;                   
        status();
        retry_office: 
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       
       switch(input)// switch case for office function 
       {
           
           case 0:
               cout<<"thanks for playing"<<endl;// if user presses 0, they will terminate program 
               exit(0);
               
           case 1:
               
               cout << "Walking forward takes you to a dead end" << endl;
               cout << "Try another direction or search the room" << endl;
               goto retry_office;//user is unable to travel in this direction try somewhere else 
               
               break;
           case 2:
               cout << string( 100, '\n' );
               opt(); //opt function called (bedroom)
               
               break;
           case 3:
               cout << "You cannot go left as there is a wall" << endl;
               cout << "Try another direction or search the room" << endl;
               goto retry_office;//user unable to go in this direction
               
               break;
           case 4:
               cout << "your unable to go in this direction" << endl;
               goto retry_office;
               
               break;
               
           case 5:
               cout << string( 100, '\n' );
               living_room();
               
               break;
               
           case 6:
               cout << "Your already upstairs, try again" << endl;
               goto retry_office;
               
               break;
           case 7:
               cout << string( 100, '\n' );
               search_room();//search_room function called where user will be able to find items and store in inventory 
               break;
               
           default:
               cout << RED << "[ERROR] Invalid option please choose between 1 and 7" << RESET << endl;
                goto retry_office;//error check, if invalid input, user will be returned to input 
         }
    
               
       }
}


void outside(){
    
    int input;
    {
        outside_part();
    }
}

void living_room() //living_room class 
    
{
    
    int input;
    
    
    {
        cout << "You are in the living room.." << endl;
        cout << MAGENTA <<  "(navigate around the house using directions)\n" << RESET << endl;
        
        cout << YELLOW << "\t >> 1: Go forward " << endl;          
        cout << "\t >> 2: Go backwards" << endl;   
        cout << "\t >> 3: Go left" << endl; 
        cout << "\t >> 4: Go right" << endl; 
        cout << "\t >> 5: Go downstairs" << endl; 
        cout << "\t >> 6: Go upstairs" << endl; 
        cout << "\t >> 7: Search room" << RESET<< endl;                   
        status();
        retry_livingroom: 
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       
       switch(input)
       {     
          
               
               
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               cout << string( 100, '\n' );//line breaker in order to clean up presentation of program 
               outside();

               
               break;
           case 2:
              cout << string( 100, '\n' );
               garage();
               
               break;
           case 3:
               cout << string( 100, '\n' );
               kitchen();
               
               break;
           case 4:
               cout << "You go right and there is nothing, turning back" <<endl;
               goto retry_livingroom;
               
               break;
               
           case 5:
               cout <<"Your already downstairs"<<endl;
               cout <<"Please choose another direction"<<endl;
               goto retry_livingroom;
               
               break;
               
           case 6:
               cout << string( 100, '\n' );
               opt();
               
               break;
           case 7:
               cout << string( 100, '\n' );
               search_room();
               
               break;
               
           default:
               cout << RED << "[ERROR] Invalid option please choose between 1 and 7" << RESET << endl;
               goto retry_livingroom;
         }
    
               
       }
}


void search_room() {//search rooms function
    
   
    int input;
    
    {
        /*within this function, my sql database will be used to manage the items within this function
        when user calls search_room , a random supply drop will be generated, if not, no supply drop
        user is then able to pick it up and it is then saved in the database and stored in the user
        inventory. they are displayed at the bottom of the program with the user status */
        
        
        cout <<"while searching round the room you come across  "<<endl;
        cout <<"\t 1. Can of coke"<<endl;
        cout <<"\t 2. Pistol"<<endl;
        cout <<"\t 3. Knife"<<endl;
        

         retry_search:
        cout <<"\n"<<endl;
        cout <<"\n which one do you want to pick up"<<endl;
        cout <<"\t 4. return to previous position"<<endl;
        cout <<" or enter [4] to return to previous position"<<endl;
       
        cin >>input;
        switch (input)
        {
           case 1:
                add_item2("Can of coke");
                goto retry_search;
                //ITEM
               break;
           
           case 2:
               add_item2("Pistol");
               cout<<"Carry on searching the house to find something "<<endl;
               cout<<"To use them on"<<endl;
                //ITEM
               goto retry_search;
               
               break;
               
           case 3:
               add_item2("Knife");
                //ITEM
                goto retry_search;
              
               
               
                
            case 4:
                
                cout << YELLOW << "Returned to start point.." << RESET << endl;
                opt();
       
        }
            
 
        
    }
}

void kitchen(){//kitchen function to allow navigation of the kitchen 
{
 
    int input;
    
    {
        cout << "You are in the kitchen.." << endl;
        cout << MAGENTA <<  "(navigate around the house using directions)\n" << RESET << endl;
       
        cout << YELLOW << "\t >> 1: Go forward " << endl;          
        cout << "\t >> 2: Go backwards" << endl;   
        cout << "\t >> 3: Go left" << endl; 
        cout << "\t >> 4: Go right" << endl; 
        cout << "\t >> 5: Go downstairs" << endl; 
        cout << "\t >> 6: Go upstairs" << endl; 
        cout << "\t >> 7: Search room" << RESET<< endl;                   
        status();
        retry: 
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       
       switch(input)
       {
           retry_kitchen:
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               cout << "You walk to the front door and go outside" << endl;
               goto retry_kitchen;
               
               break;
           case 2:
               cout << "Walking backwards, heading to garage" << endl;
               garage();
               
               
               break;
           case 3:
               cout << "Youve hit a wall, try a different direction or search room" << endl;
               goto retry_kitchen;
               
               break;
           case 4:
               cout << "Youve hit a wall, try a different direction or search room" << endl;
               goto retry_kitchen;
               
               break;
               
           case 5:
               cout <<"You cant run downstairs, your already here"<<endl;
               goto retry_kitchen;
               
               break;
               
           case 6:
               cout <<"You walk upstairs to the office "<<endl;
               office();
               
               break;
           case 7:
               search_room();
               
               break;
               
           default:
               cout << RED << "[ERROR] Invalid option please choose between 1 and 7" << RESET << endl;
                goto retry_kitchen;
         }
    
               
       }
}
    

}


void bathroom(){//bathroom function 
{
    int input;

    {
        cout << "You walk into the bathroom.." << endl;
        cout << MAGENTA <<  "(navigate around the house using directions)\n" << RESET << endl;
        
        cout << YELLOW << "\t >> 1: Go forward " << endl;          
        cout << "\t >> 2: Go backwards" << endl;   
        cout << "\t >> 3: Go left" << endl; 
        cout << "\t >> 4: Go right" << endl; 
        cout << "\t >> 5: Go downstairs" << endl; 
        cout << "\t >> 6: Go upstairs" << endl; 
        cout << "\t >> 7: Search room" << RESET<< endl;                   
        status();
        retry_bathroom: 
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       
       switch(input)
           {

               case 0://case switch statments depending on user navigation input 
                   cout<<"thanks for playing"<<endl;
                   exit(0);

               case 1:
                   cout << "walking forwards: you hit the sink, try again"  << endl;
                   goto retry_bathroom;

                   break;
               case 2:
                   cout << "youve hit a wall, try a different direction or search room" << endl;
                   goto retry_bathroom;

                   break;
               case 3:
                    cout << string( 100, '\n' );
                   opt();

                   break;
               case 4:
                   cout<<"no exit that way"<<endl;
                   goto retry_bathroom;

                   break;

               case 5:
                   cout << string( 100, '\n' );
                   living_room();

                   break;

               case 6:
                   cout <<"your already upstairs, try again "<<endl;
                   goto retry_bathroom;

                   break;
               case 7:
                   cout << string( 100, '\n' );
                   search_room();

                   break;

               default:
                   cout << RED << "[ERROR] Invalid option please choose between 1 and 7" << RESET << endl;
                   goto retry_bathroom;
             }      
        
       }
}
    

}


void garage (){    
    int input;
    {
        /*within this function, the user is given the option to leave and continue there journey outside, story_supplies
        only unfolds the supplies collection stage therefore we need an option to allow the user to continue the game 
        storyline path, this has been done by giving the user the option to escape the house on foot or by car in the garage*/
        cout << "Your in the garage, there is a car.. \n" << endl;
        cout << YELLOW << "\t >> 1: Take car " << endl;          
        cout << "\t >> 2: Return to the living room" << RESET<< endl;       

        
        retry_garage:
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
        if (input==1){
             cout << string( 100, '\n' );
            car_run();//if user selects 1, the car function is called and the story continues on wheels 
            
            
        }
        
        else if (input==2){
             cout << string( 100, '\n' );
            living_room();//if not the user is returned to there living room, they are still able to access the garage 
        }
        
        else
        {
            cout << RED << "[ERROR] Invalid option please choose between 1 and 2" << RESET << endl;
            goto retry_garage;
        }
    } 
}

void opt()
    
{
    int input;
    
    
    {
        /*main start point of game is user bedroom, here they have woken up and need to navigate the whole house using simple inputs
        user has to use trial and error in order to find there way around the house map, this is fairly simple as all the options are displayed below
        some inputs will not take user anywhere as it follows a game map which as a code breaking mind game, user has to find out the layout of the house*/
        cout << string( 100, '\n' );
         cout << "Your in your room.. \n" << endl;
         cout << MAGENTA <<  "(navigate around the house using directions)\n" << RESET << endl;
     
        cout << YELLOW << "\t >> 1: Go forward " << endl;          
        cout << "\t >> 2: Go backwards" << endl;   
        cout << "\t >> 3: Go left" << endl; 
        cout << "\t >> 4: Go right" << endl; 
        cout << "\t >> 5: Go downstairs" << endl; 
        cout << "\t >> 6: Go upstairs" << endl; 
        cout << "\t >> 7: Search room" << RESET<< endl;                   
        status();
        retry:
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        switch(input)
           {

               case 0:
                   cout<<"thanks for playing"<<endl;
                   exit(0);

               case 1:
                   cout << string( 100, '\n' );
                   office();
                   break;
               case 2:
                   cout << RED << "You cant go backward as your in your room, try again" << RESET << endl;
                   goto retry;
                   break;
               case 3:
                   cout << string( 100, '\n' );
                   bathroom();
                   break;
               case 4:
                  cout << RED << "Dead end, try a diffrent direction" << RESET << endl;
                   goto retry;
                   break;

               case 5:
                
                   cout << string( 100, '\n' );
                   living_room();
                   break;

               case 6:
                   cout <<"your already upstairs, try again"<<endl;
                   goto retry;
                   break;
               case 7:
                   cout << string( 100, '\n' );
                   search_room();
                   break;

               default:
                    cout << RED << "[ERROR] Invalid option please choose between 1 and 7" << RESET << endl;
                    goto retry;
             } 
   }
}
