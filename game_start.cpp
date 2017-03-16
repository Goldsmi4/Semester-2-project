#include <iostream>
#include <string>
#include <stdio.h>
#include "game_title.h"
#include "main_story.h"
#include "player_input.h"
#include "databaseStuff/db_class.h"


using namespace std;


int main()
    
{
//    cout << game_title()<< endl ;
    
    
    {
    cout << "do you want to play quarantine zombie survival? " << endl;
    bool decision;
    decision = answer();
    if (decision) {
        cout << "shit hits the fan welcome to hell.\n" << endl;

        //cout<<"EnterName: "<<endl; 
       // string user_name = "";
       // user_name = get_text(true);
       // cout<<("goodluck, " + user_name + "!")<<endl;

      //  Database db = Database();
      //  db.create_user_database(user_name);
        
        start_game(); //begin quarantine
        
    }
    
}}
    