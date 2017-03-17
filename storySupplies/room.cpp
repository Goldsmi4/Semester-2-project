#include <vector>//for the com function 
#include <cctype> //prevent case sensitivity problems 
#include <iostream>
#include <string>
#include <stdlib.h>
#include <main_Story.h>
#include <story_outside/story_outside.h>
#include <call_family.h>

using namespace std;

enum en_NAVIGATION {FORWARD,BACKWARD,LEFT,RIGHT,DOWNSTAIRS};
enum en_ROOMS{BEDROOM,BATHROOM,OFFICE,LIVINGROOM,KITCHEN,GARAGE,OUTSIDE};
//enumerated type decleration

const int NONE = -1;
const int NAVIGATION = 5;//declaring number of rooms and options
const int ROOMS = 7;

struct phrase
{
   string phrase;
   int algo;
};

struct room
{
    string descr;
    int exits[NAVIGATION];//setting number of entrys within = NAVI  
};
///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

void room_declaration(room *room_name)
{
    
    room_name[BEDROOM].descr.assign("your bedroom");
    room_name[BEDROOM].exits[FORWARD] = OFFICE;
    room_name[BEDROOM].exits[BACKWARD] = NONE;
    room_name[BEDROOM].exits[LEFT]= BATHROOM;
    room_name[BEDROOM].exits[RIGHT] =NONE;
    room_name[BEDROOM].exits[DOWNSTAIRS] = LIVINGROOM;
 
    room_name[BATHROOM].descr.assign("the bathroom");
    room_name[BATHROOM].exits[FORWARD] = NONE;
    room_name[BATHROOM].exits[BACKWARD] = NONE;
    room_name[BATHROOM].exits[LEFT]= OFFICE;
    room_name[BATHROOM].exits[RIGHT] =BEDROOM;
    room_name[BATHROOM].exits[DOWNSTAIRS] = LIVINGROOM;

 
    room_name[OFFICE].descr.assign("the office");
    room_name[OFFICE].exits[FORWARD] = NONE;
    room_name[OFFICE].exits[BACKWARD] = NONE;
    room_name[OFFICE].exits[LEFT]=NONE;
    room_name[OFFICE].exits[RIGHT] =BATHROOM;
    room_name[OFFICE].exits[DOWNSTAIRS] = LIVINGROOM;
 
    room_name[LIVINGROOM].descr.assign("livingroom");
    room_name[LIVINGROOM].exits[FORWARD] = OUTSIDE;
    room_name[LIVINGROOM].exits[BACKWARD] = GARAGE;
    room_name[LIVINGROOM].exits[LEFT]=KITCHEN;
    room_name[LIVINGROOM].exits[RIGHT] =NONE;
    room_name[LIVINGROOM].exits[DOWNSTAIRS] = NONE;    

 
    room_name[KITCHEN].descr.assign("the kitchen");
    room_name[KITCHEN].exits[FORWARD] = LIVINGROOM;
    room_name[KITCHEN].exits[BACKWARD] = BATHROOM;
    room_name[KITCHEN].exits[LEFT]=NONE;
    room_name[KITCHEN].exits[RIGHT]=GARAGE;
    room_name[KITCHEN].exits[DOWNSTAIRS] = NONE;    

    
    room_name[GARAGE].descr.assign("the garage");
    room_name[GARAGE].exits[FORWARD] = OUTSIDE;
    room_name[GARAGE].exits[BACKWARD] = LIVINGROOM;
    room_name[GARAGE].exits[LEFT]=NONE;
    room_name[GARAGE].exits[RIGHT] =NONE;
    room_name[GARAGE].exits[DOWNSTAIRS] = NONE;    
  
    room_name[OUTSIDE].descr.assign("outside");
    room_name[OUTSIDE].exits[FORWARD] = NONE;
    room_name[OUTSIDE].exits[BACKWARD] = LIVINGROOM;
    room_name[OUTSIDE].exits[LEFT]=GARAGE;
    room_name[OUTSIDE].exits[RIGHT] =NONE;
    room_name[OUTSIDE].exits[DOWNSTAIRS] = NONE;    

       
}
///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////
void setting_direct(phrase *dire)
{
   dire[FORWARD].algo = FORWARD;
   dire[FORWARD].phrase="FORWARD";
   dire[BACKWARD].algo = BACKWARD;
   dire[BACKWARD].phrase="BACKWARD";
   dire[LEFT].algo = LEFT;
   dire[LEFT].phrase="LEFT";
   dire[RIGHT].algo = RIGHT;
   dire[RIGHT].phrase="RIGHT";
   dire[DOWNSTAIRS].algo = DOWNSTAIRS;
   dire[DOWNSTAIRS].phrase="DOWNSTAIRS";
    
}    
///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

//this function will section the command in order to parse later
// by breaking down the sections of the command
void command_section(string com, string &ph_1 , string &ph_2 )
{
    vector <string> phrase;
    char scope = ' ';
    string sub_string;
    size_t a,b;
    
    /*this will split the user command into a vector*/
    for (a = 0; a < com.size(); a++)
    {
        if(com.at(a) !=scope)//if command located in first position scope/search 
        {
            sub_string.insert(sub_string.end(),com.at(a));
        }
        if(a == com.size() -1)
        {
           phrase.push_back(sub_string);
           sub_string.clear();
        }
        if(com.at(a) == scope)
        {
          
           phrase.push_back(sub_string);
           sub_string.clear();
        }    
         
    } 
    
    for (a= phrase.size() -1; a>0; a--)
    //clears out any blanks working backwards to prevent invalidatio//
    {
        if (phrase.at(a) == "")
        {
            phrase.erase(phrase.begin() + a);
        } 
    }
        
        //cctype phrase here 
    for(a = 0; a < phrase.size(); a++)
    {
        for(b = 0; b < phrase.at(a).size(); b++)
        {
            if(islower(phrase.at(a).at(b)))
            {
                phrase.at(a).at(b) = toupper(phrase.at(a).at(b));
            }
        }
    }
        
        if(phrase.size()==0) //leave here
        {
            cout << "please enter a command" << endl;    
        }  
        if (phrase.size() == 1)
        {
            ph_1=phrase.at(0);
            //if the command entered is 1 word
            //the command is located at location [0] of vector
        }
        if (phrase.size() ==2)
        {
            ph_1=phrase.at(0);
            ph_2=phrase.at(1);
            //if input = 2 command is located in [0,1] of vector
        }
        if (phrase.size() > 2)
        {
            cout << " your input is long plese try again" << endl;
        }
         
}
///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////
bool parser(int &loc, string ph_1, string ph_2, phrase *dire, room *room_name)
{
    int x;
    for(x = 0; x < NAVIGATION; x++)
    {
        if(ph_1 == dire[x].phrase)
        {
            if(room_name[loc].exits[dire[x].algo]!= NONE)
            {
                loc = room_name[loc].exits[dire[x].algo];
                cout << "you are in " << room_name[loc].descr << "." << endl;
                return true;
            }
            else
            {
                cout << "No exit that way." << endl;
                return true;
            }
        }
    }
    cout << "No valid command entered." << endl;
    return false;
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////
int main()
{
    string user_input;
    int Garage;
    
    string phrase_1;
    string phrase_2;
    
    room rooms[ROOMS];
    room_declaration(rooms);
    
    phrase dire[NAVIGATION];
    setting_direct(dire);
    
    
    int location = BEDROOM;
    
    while(phrase_1 !="QUIT") //break the look/escape condition
    {
        user_input.clear();
        cout << "gather supplies by looking around the house ";
        cout << "\n navigate using: forward, backward , left , right , downstairs"<<endl;
        
        getline(cin,user_input);
        //cout <<"you inputed the following command "<< user_input <<endl;
        phrase_1.clear();
        phrase_2.clear();
        //will call the function that will handle format of command line
        command_section(user_input,phrase_1, phrase_2);
        
        
        parser(location,phrase_1,phrase_2,dire,rooms);
        
         
        
        //testing if output is displayed correctly after formatting 
        //cout << phrase_1 << phrase_2 << endl;
     
        
    }
    
    
    
    while phrase_1 = "garage";
        
    cout<<"you enter the garage and realise you can escape in the car"<< endl
        <<"\t what do you want to do" <<endl
        <<"\t 1. get in the car and drive off"<<endl
        <<"\t 2. carry on looking around for supplies"<<endl;
    cin >> Garage;
    switch(Garage)
    {
        case 1:
           cout << "leaving the house, careful out there" <<endl;
            story_outside.main();
            break;
        case 2:
            cout <<"staying indoors..going back to livingroom " <<endl;
            main();
            
            break;
    }
     
        
    return 0;  
}

