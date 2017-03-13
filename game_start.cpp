#include <iostream>
#include <string>
#include <stdio.h>
#include "game_title.h"
#include "main_story.h"
#include "player_input.h"


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
        start_game(); //begin quarantine
    }
    
}}
    