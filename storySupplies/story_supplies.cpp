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


void opt();
void living_room ();
void search_room ();
void kitchen ();
void garage();
void bathroom();
void office();
void outside();



int supplies()
{
    cout<<"==========================="<<endl;
    opt();
    return(0);
}

void office()
    
{
    
    int input;
    
    
    {
        cout << "You are in your ofice.." << endl;
        cout << MAGENTA <<  "(navigate around the house using directions)\n" << RESET << endl;
        
        cout << YELLOW << "\t >> 1: Go forward " << endl;          
        cout << "\t >> 2: Go backwards" << endl;   
        cout << "\t >> 3: Go left" << endl; 
        cout << "\t >> 4: Go right" << endl; 
        cout << "\t >> 5: Go downstairs" << endl; 
        cout << "\t >> 6: Go upstairs" << endl; 
        cout << "\t >> 7: Search room" << RESET<< endl;                   
        status();
        retry_office: 
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
       
       switch(input)
       {
           
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               
               cout << "Walking forward takes you to a dead end" << endl;
               cout << "Try another direction or search the room" << endl;
               goto retry_office;
               
               break;
           case 2:
               cout << string( 100, '\n' );
               opt();
               
               break;
           case 3:
               cout << "You cannot go left as there is a wall" << endl;
               cout << "Try another direction or search the room" << endl;
               goto retry_office;
               
               break;
           case 4:
               cout << "You make your way to the bathroom" << endl;
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
               search_room();
               break;
               
           default:
               cout << RED << "[ERROR] Invalid option please choose between 1 and 7" << RESET << endl;
                goto retry_office;
         }
    
               
       }
}


void outside(){
    
    int input;
    {
        outside_part();
    }
}

void living_room() 
    
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
               cout << string( 100, '\n' );
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


void search_room() {
    
   
    int input;
    
    {
        
        cout <<"while searching round the room you come across  "<<endl;
        cout <<"\t 1. a lighter"<<endl;
        cout <<"\t 2. pair of batteries"<<endl;
        cout <<"\t 3. knife"<<endl;
        
        //ITEMS
        
        cout <<"\n"<<endl;
        cout <<"\n which one do you want to pick up"<<endl;
        cout <<"\t 4. return to previous position"<<endl;
        cout <<" or enter [4] to return to previous position"<<endl;
        retry_search:
        cin >>input;
        switch (input)
        {
           case 1:
               cout<<"You have aquired a lighter"<< endl;
                goto retry_search;
                //ITEM
               break;
           
           case 2:
               cout<<"You picked up a pair of batteries"<< endl;
               cout<<"Carry on searching the house to find something "<<endl;
               cout<<"To use them on"<<endl;
                //ITEM
               goto retry_search;
               
               break;
               
           case 3:
               
               cout << "You have picked up a knife"<<endl;
                //ITEM
                goto retry_search;
              
               
               
                
            case 4:
                
                cout << YELLOW << "Returned to start point.." << RESET << endl;
                opt();
       
        }
            
 
        
    }
}

void kitchen(){
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


void bathroom(){
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

               case 0:
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
        
        cout << "Your in the garage, there is a car.. \n" << endl;
        cout << YELLOW << "\t >> 1: Take car " << endl;          
        cout << "\t >> 2: Return to the living room" << RESET<< endl;       

        
        retry_garage:
        cout << BLUE << "Enter your choice: " << RESET;
        cin >> input;
        
        if (input==1){
             cout << string( 100, '\n' );
            car_run();
            
            
        }
        
        else if (input==2){
             cout << string( 100, '\n' );
            living_room();
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

