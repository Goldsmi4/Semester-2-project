#include <iostream>
#include <stdlib.h>
#include "story_outside/story_outside.cpp"


using namespace std;

void options();

int main()
{
    cout<<"line has been cut"<<endl;
    options();
    return(0);
}

void idiot()
{
    int input;
    {
        cout << "You die, from a zombie attack bet you wished you had a weapon to defend yourself" <<endl;
        cout << "GAME OVER"<< endl;                         
    }
}
void person()
{
    int input;
    {
        cout << "you meet someone" <<endl;
        cout << "Please select an option:" << endl
        << "1.Join forces with the person " << endl
        << "2.Run! " << endl;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout<<"Join forces with the person"<< endl;
               break;
           case 2:
               cout<<"Shout for help"<< endl;
               break;
               
       }
          
    }
}

void stranger()
{
    int input;
    {
        cout << "Hi my name is name i wanted your help to get to down town to escape this madness" <<endl;
        cout << "Please select an option:" << endl
        << "1.Join forces with the person " << endl
        << "2.Run! " << endl;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout<<"Join forces with the person"<< endl;
               person();
               break;
           case 2:
               cout<<""<< endl;
               break;
               
       }
          
    }
}

void temp(){
    int input;
    {
        cout << "9mm Pistol has been added to you're inventory" <<endl;
        cout << "Please select an option:" << endl
        << "1.Go outside " << endl
        << "2.Shout for help " << endl;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout<<"Go outside"<< endl;
               Outside_part();
               break;
           case 2:
               cout<<"Shout for help"<< endl;
               stranger();
               break;
               
       }
          
    }
}
    


void otheroptions()
{
    int input;
    {
        cout << "You've found a pistol" << endl;
        cout << "Please select an option:" << endl;       
        cout<< "1.Pick up pistol" << endl;
        cout<< "2.Leave Pistol " << endl;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout<<"Pick up pistol"<< endl;
               temp();
               break;
           case 2:
               cout<<"Leave pistol"<< endl;
               idiot();
               break;
               
       }
          
    }
}
    

void options()
{
    int input;
    
    
    {
        cout << "Please select an option:" << endl
        << "1.Search the house " << endl
        << "2.Go to neighbours " << endl
        << "3.Hide " << endl;
        cin >> input;
        
       switch(input)
       {
           case 0:
               exit(0);
           case 1:
               cout << "Search the house" << endl;
               otheroptions();
               
               break;
           case 2:
               cout << "Go to neighbours" << endl;
               break;
           case 3:
               cout << "Hide " << endl;
               cout << "you die from starvation" << endl;
               cout << "GAME OVER" << endl;       
               break;
           default:
               cout<<"invalid option please choose between 1 and 4"<< endl;
         }
    
               
       }
}

