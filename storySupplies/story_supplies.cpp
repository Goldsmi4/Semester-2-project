#include <iostream>
#include <stdlib.h>


using namespace std;




void opt();
void stranger ();
void peaking ();
void living_room ();
void bedroom ();
void kitchen ();
void garage();


int supplies()
{
    cout<<"line has been cut"<<endl;
    opt();
    return(0);
}


    
void stranger(){
    
    int input;
    {
        cout <<""<<endl;
        cout <<""<<endl; 
    }
}

void peaking(){
    
    int input;
    {
        cout <<"you notice a tall figure approaching"<<endl;
        
        cout << "\t >> 1: run out, head for the door " << endl;                             
        cout << "\t >> 2: stay put" << endl;          
        cout << "\t >> 3: get out and fight" << endl;                         
        cout << "\t >> 4: " <<endl;                             

        
    }
}



void living_room() {
    
    int input;
    {
        cout << "you hear a strange sound coming from the window" << endl;
        cout << " what should you do " <<endl;  
            
        cout << "\t1. ignore and carry on searching " << endl
        << "\t2. hide somewhere" << endl
        << "\t3. peak out the window" << endl
        << "\t4. scream for help" << endl;
        cin >> input;
        
       switch(input)
       {
           case 1:
               cout<<"the banging results to screaming "<< endl;
               cout<<"unknown: help!! help me!! "<< endl;
               
               stranger();
               
               break;
           
           case 2:
               cout<<"you quickly run to the nearest cupboard "<< endl;
               cout<<"looking out through a narrow gap between the hinge"<<endl;
               peaking();
               
               break;
               
           case 3:
               
               cout << "you approach the window noticing blood splatters throughout"<< endl;
               cout << "screaming continues and you can see someone being attacked on the floor "<<endl;
               cout << "the attacker notices you and approaches the window. you try running away"<<endl;
               cout << "this results in him pointing a gun and shooting you in the back" <<endl;
               
               cout<< "/n game over please start again" << endl;    
               
               
       }
          
    }
}




void bedroom() {
    
    int input;
    {
        cout <<"while searching round the room you come across  "<<endl;
        cout <<"\t 1. a lighter"<<endl;
        cout <<"\t 2. pair of batteries"<<endl;
        cout <<"\t 3. knife"<<endl;
        cout <<"\n"<<endl;
        cout <<"\n which one do you want to pick up"<<endl;
        cout <<" or press [4] to go back"<<endl;
        
        cin >>input;
        switch (input)
        {
           case 1:
               cout<<"you have aquired a lighter"<< endl;
               cout<<"going back to hallway"<< endl;
               opt();
               
               break;
           
           case 2:
               cout<<"you picked up a pair of batteries"<< endl;
               cout<<"carry on searching the house to find something "<<endl;
               cout<<"to use them on...returning to start"<<endl;
               opt();
               
               break;
               
           case 3:
               
               cout << "you approach the window noticing blood splatters throughout"<< endl;
               cout << "screaming continues and you can see someone being attacked on the floor "<<endl;
               cout << "the attacker notices you and approaches the window. you try running away"<<endl;
               cout << "this results in him pointing a gun and shooting you in the back" <<endl;
               
               cout<< "/n game over please start again" << endl; 
                
            case 4:
                
                cout<<"you have picked up nothing, returning to start"<<endl;
                opt();
                
                
                
                
        }
            
            
        
        
    }
}


void kitchen(){
    
    int input;
    {
        cout <<""<<endl;
        cout <<""<<endl;  
    }
}



void garage (){
    
    int input;
    {
        cout <<""<<endl;
        cout <<""<<endl; 
    }
}





    

void opt()
    
{
    int input;
    
    
    {
        cout << "you go around the house in search of supplies" << endl;
        cout << "where should you search first ?" <<endl;    
      
            
        cout << "\t1. living room" << endl
        << "\t2. bedroom " << endl
        << "\t3. kitchen " << endl
        << "\t4. garage " << endl;
        cin >> input;
        
       switch(input)
       {
           case 0:
               exit(0);
           case 1:
               cout << "you go off and search the living room" << endl;
               living_room();
               
               break;
           case 2:
               cout << "you go around your room searching for supplies" << endl;
               bedroom();
               
               break;
           case 3:
               cout << "you head for the kitchen " << endl;
               kitchen();
               
               break;
           case 4:
               cout << "you run down the stairs, grab the keys and enter the garage" <<endl;
               garage();
               
               break;
           default:
               cout<<"invalid option please choose between 1 and 4"<< endl;
         }
    
               
       }
}

