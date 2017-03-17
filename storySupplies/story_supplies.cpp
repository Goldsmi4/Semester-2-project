#include <iostream>
#include <stdlib.h>
#include "../story_car/storyCar.h"



using namespace std;




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

///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

void office()
    
{
    
    int input;
    
    
    {
        cout << "you are in your ofice" << endl;
        cout << "\t where do you wish to go, or search "<<endl;
        cout << "what do you wish to do? " <<endl;    
      
        retry_office:
        
        cout<< "\t>>1.forward" << endl;
        cout<< "\t>>2.backwards" << endl;
        cout<< "\t>>3.left" << endl;
        cout<< "\t>>4.right " << endl;
        cout<< "\t>>5.downstairs" << endl;
        cout<< "\t>>6.upstairs" << endl;
        cout<< "\t>>7.search room"<<endl;
        cin >> input;
        
       
       switch(input)
       {
           
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               cout << "walking forward takes you to a dead end" << endl;
               cout << "try another direction or search the room" << endl;
               goto retry_office;
               
               break;
           case 2:
               cout << " walking down to your bedroom" << endl;
               opt();
               
               break;
           case 3:
               cout << "you cannot go left as there is a wall" << endl;
               cout << "try another direction or search the room" << endl;
               goto retry_office;
               
               break;
           case 4:
               cout << "you make your way to the bathroom" <<endl;
               goto retry_office;
               
               break;
               
           case 5:
               cout <<"run down the stairs to the living_room"<<endl;
               living_room();
               
               break;
               
           case 6:
               cout <<"your already upstairs, try again"<<endl;
               goto retry_office;
               
               break;
           case 7:
               search_room();
               
               break;
               
           default:
               cout<<"invalid option please choose between 1 and 7"<< endl;
                goto retry_office;
         }
    
               
       }
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

void outside(){
    
    int input;
    {
        cout <<"you notice a tall figure approaching"<<endl;
        
        cout << "\t >> 1: run out, head for the door " << endl;                             
        cout << "\t >> 2: stay put" << endl;          
        cout << "\t >> 3: get out and fight" << endl;                         
        cout << "\t >> 4: " <<endl;                             

        
    }
}
///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////
void living_room() 
    
{
    
    int input;
    
    
    {
        cout << "you are in the living room" << endl;
        cout << "\t do you want to search or go somewhere else "<<endl;
  
      
       
        retry_livingroom:
        
        cout<< "\t>>1.forward" << endl;
        cout<< "\t>>2.backwards" << endl;
        cout<< "\t>>3.left" << endl;
        cout<< "\t>>4.right " << endl;
        cout<< "\t>>5.downstairs" << endl;
        cout<< "\t>>6.upstairs" << endl;
        cout<< "\t>>7.search room"<<endl;
        cin >> input;
        
       
       switch(input)
       {     
          
               
               
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               cout << "walking forward takes you outside" << endl;
               outside();

               
               break;
           case 2:
               cout << "walking back takes you to the garage" << endl;
               garage();
               
               break;
           case 3:
               cout << "" << endl;
               cout << "you walk left and head for the kitchen " << endl;
               kitchen();
               
               break;
           case 4:
               cout << "you go right and there is nothing, turning back" <<endl;
               goto retry_livingroom;
               
               break;
               
           case 5:
               cout <<"your already downstairs"<<endl;
               cout <<"please choose another direction"<<endl;
               goto retry_livingroom;
               
               break;
               
           case 6:
               cout <<"you run upstairs to the bedroom"<<endl;
               opt();
               
               break;
           case 7:
               cout << "searching living room"<<endl;
               search_room();
               
               break;
               
           default:
               cout<<"invalid option please choose between 1 and 7"<< endl;
                goto retry_livingroom;
         }
    
               
       }
}


///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

void search_room() {
    
   
    int input;
    
    {
        retry_search:
        cout <<"while searching round the room you come across  "<<endl;
        cout <<"\t 1. a lighter"<<endl;
        cout <<"\t 2. pair of batteries"<<endl;
        cout <<"\t 3. knife"<<endl;
        cout <<"\n"<<endl;
        cout <<"\n which one do you want to pick up"<<endl;
        cout <<"\t 4. return to previous position"<<endl;
        cout <<" or enter [4] to return to previous position"<<endl;
        
        cin >>input;
        switch (input)
        {
           case 1:
               cout<<"you have aquired a lighter"<< endl;
                goto retry_search;
                
               
               
               
               break;
           
           case 2:
               cout<<"you picked up a pair of batteries"<< endl;
               cout<<"carry on searching the house to find something "<<endl;
               cout<<"to use them on"<<endl;
               goto retry_search;
               
               break;
               
           case 3:
               
               cout << "you have picked up a knife"<<endl;
                goto retry_search;
              
               
               
                
            case 4:
                
                cout<<"returning to start"<<endl;
                opt();
       
        }
            
 
        
    }
}
///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

void kitchen(){
{
    
    int input;
    
    
    {
        cout << "you are in the kitchen" << endl;
        cout << "\t where do you wish to go, or search room? "<<endl;
        
      
        retry:
        
        cout<< "\t>>1.forward" << endl;
        cout<< "\t>>2.backwards" << endl;
        cout<< "\t>>3.left" << endl;
        cout<< "\t>>4.right " << endl;
        cout<< "\t>>5.downstairs" << endl;
        cout<< "\t>>6.upstairs" << endl;
        cout<< "\t>>7.search room"<<endl;
        cin >> input;
        
       
       switch(input)
       {
           retry_kitchen:
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               cout << "you walk to the front door and go outside" << endl;
               goto retry_kitchen;
               
               break;
           case 2:
               cout << "walking backwards, heading to garage" << endl;
               garage();
               
               
               break;
           case 3:
               cout << "youve hit a wall, try a different direction or search room" << endl;
               goto retry_kitchen;
               
               break;
           case 4:
               cout << "youve hit a wall, try a different direction or search room" << endl;
               goto retry_kitchen;
               
               break;
               
           case 5:
               cout <<"you cant run downstairs, your already here"<<endl;
               goto retry_kitchen;
               
               break;
               
           case 6:
               cout <<"you walk upstairs to the office "<<endl;
               office();
               
               break;
           case 7:
               search_room();
               
               break;
               
           default:
               cout<<"invalid option please choose between 1 and 7"<< endl;
                goto retry_kitchen;
         }
    
               
       }
}
    

}

///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////

void bathroom(){
{
    int input;

    {
        cout << "you walk into the bathroom" << endl;
        cout << "\t where do you wish to go, or search room? "<<endl;
        
      
        retry_bathroom:
        
        cout<< "\t>>1.forward" << endl;
        cout<< "\t>>2.backwards" << endl;
        cout<< "\t>>3.left" << endl;
        cout<< "\t>>4.right " << endl;
        cout<< "\t>>5.downstairs" << endl;
        cout<< "\t>>6.upstairs" << endl;
        cout<< "\t>>7.search room"<<endl;
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
               cout << "you walk out the bathroom and enter the bedroom" << endl;
               opt();
               
               break;
           case 4:
               cout<<"no exit that way"<<endl;
               goto retry_bathroom;
         
               break;
               
           case 5:
               cout <<"run down the stairs to the living_room"<<endl;
               living_room();
               
               break;
               
           case 6:
               cout <<"your already upstairs, try again "<<endl;
               goto retry_bathroom;
               
               break;
           case 7:
               search_room();
               
               break;
               
           default:
               cout<<"invalid option please choose between 1 and 7"<< endl;
         }      goto retry_bathroom;
    
               
       }
}
    

}

///////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////
void garage (){    

    int input;
    
    
    {
        retry_garage:
        cout << "your in the garage, there is a car " << endl;
        cout << "\t do you wish to take it "<<endl;
        cout << "[1] for yes" <<endl;
        cout << "[2] for no and you will return to the living room" <<endl;
      
        
        

        cin >> input;
        
        if (input==1){
            cout <<" the outside is waiting for you, be careful" << endl;
            car_run();
            
            
        }
        
        else if (input==2){
            cout<<"carry on scavanging for supplies young one"<<endl;
            living_room();
        }
        
        else
        {
            cout<<"invalid input, please try again" <<endl;
            goto retry_garage;
        }
        
    } 
}



/////////////////////////////////////////////////////////////////////////////////
//                                                                           //   
//                                                                           //                                       
//                                                                           //
//                                                                           //
//////////////////////////////////////////////////////////////////////////////    

void opt()
    
{
    int input;
    
    
    {
        
        cout << "your in your room what do you wish to do" << endl;
        cout << "\t navigate around the house using directions"<<endl;
        cout << "what do you wish to do? " <<endl;    
      
        
        retry: 
        cout<< "\t>>1.forward" << endl;
        cout<< "\t>>2.backwards" << endl;
        cout<< "\t>>3.left" << endl;
        cout<< "\t>>4.right " << endl;
        cout<< "\t>>5.downstairs" << endl;
        cout<< "\t>>6.upstairs" << endl;
        cout<< "\t>>7.search room"<<endl;
        cin >> input;
        
       
       switch(input)
       {
           
           case 0:
               cout<<"thanks for playing"<<endl;
               exit(0);
               
           case 1:
               cout << "you walk down to your office" << endl;
               office();
               
               break;
           case 2:
               cout << "you cant go backward as your in your room, try again" << endl;
               goto retry;
               
               break;
           case 3:
               cout << "you walk down the hallway to the bathroom" << endl;
               bathroom();
               
               break;
           case 4:
               cout << "dead end, try a diffrent direction" <<endl;
               goto retry;
               
               break;
               
           case 5:
               cout <<"you run to the living room"<<endl;
               living_room();
               
               break;
               
           case 6:
               cout <<"your already upstairs, try again"<<endl;
               goto retry;
               
               break;
           case 7:
               search_room();
               
               break;
               
           default:
               cout<<"invalid option please choose between 1 and 7"<< endl;
                goto retry;
         }
    
               
       }
}

