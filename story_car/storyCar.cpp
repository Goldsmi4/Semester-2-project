#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
//int car()
{

    int car();
    {
        cout << "You grab your car keys and whatever is to hand. You then head down to the" << endl;
        cout << "car and get in. After switching the engine on you see that there is little" << endl;
        cout << "fuel left in the tank. What should you do?" << endl;
        cout << "\n" << endl;
        cout << "/t 1: Look in the garage for fuel" << endl;
        cout << "/t 2: Try using a neighbours car, hope it has more fuel" << endl; //
        cout << "/t 3: ignore it, there should be enough" << endl;
        cin >> input;
        switch(input)
        {   
    
            case 1:    
                    cout << "You go into the garage and look around and see fuel cans, a knife and some duck tape." << endl;
                    cout << "You pick these items up and go back to the car." << endl;
                    cout << "There isn't much fuel in the fuel cans but you pour what is there into the tank and " << endl;
                    cout << "and put the empty cans into the boot." << endl;
                    cout << "You get back into the car and see the tank is now 1/3 full." << endl;
                    cout << " you start driving" << endl;
                    route_path();
                    break;
        
    
    
            case 2:
                    cout << "You leave the car and head over to your neighbour's house." << endl;
                    
                    neighbourCar();
                    break;
    
    
            case 3:
                    cout << "you get into the car and start driving" << endl;
                    route_path();
                    break;
        
        }
    }
}
    /*else
    {
        
    cout << " Thats not an option, choose one from the list. " << endl;
    goto retry;
        
    }*/
 
void main();
//void car()
int neighbourCar();// <------------------------------
    {
        cout << "You go up to the front door. how should you enter?" << endl;
        cout << "\n" << endl;
        cout << "/t 1: Front door" << endl;
        cout << "/t 2: Back door" << endl;
        cout << "/t 3: Leave it and go back to your car" << endl;
        cin >> input;
        switch (input)
        {
            case 1:
                cout << "you break the window in the front door. A looter inside was watching the window" << endl;
                cout << "and shoots you in the head. you are dead." << endl;
                cout << "\n Game over" << endl;
                
                break;
            case 2:
                cout << "You sneak around to the back door and see it has been forced open. You sneak in" << endl;
                cout << "and see some guy, not your neighbour, watching the front door." << endl;
                
                killLooter();
                break;
                
            case 3:   
                cout << "You go back to your car and drive off" << endl;
                route_path()
                break;
        }
        
    }
    
    
void main();
// void car()
{
    int killLooter();
    {
        cout << "He doesnt notice you but he is armed with a pistol. Do you quietly kill him?" << endl;
        cout << "\n" <<endl;
        cout << "/t 1: Yes" << endl;
        cout << "/t 2: No and leave" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You sneak up behind him and kill them. You loot him and get his pistol" << endl;
                cout << "along with a tin of food. You rummage around the house and find some old" << endl;         // possibly change this bit to use Will's search house code
                cout << "tshirts you can use as rags and some magazines you could use as bite protection" << endl;
                cout << "on your arms." << endl;
                break;
            case 2:
                cout << "You sneak out and leave the house, you go straight to your car and drive off."
                
                route_path();
                break;
                
                
        }
    }
}


 
void main();
//void car()   
{
    int route_path();
    {
        cout << "You reach the edge of the neighbourhood, which route do you want to take?" << endl;
        cout << "\n" << endl;
        cout << "/t 1: Take the ring road and travel around to the evacuation point. It could be safer but you are less likley to find anything" << endl;
        cout << "/t 2: Travel straight to the evacuation point. This will take you through residential areas but there is more chance to find things" << endl;
        cout << "/t 3: Go to the evacuation point via the gunshop downtown. There could be weapons there"
        cin >> input;
        switch(input)
        {    
            case 1:
    
    
                cout << "You travel along the ringroad towards the evacuation point, whilst on the overpass you see a roadblock up ahead." << endl;
                cout << "You stop the car and get out well short of the roadblock. you are close to the evacuation point" << endl;
                cout << "and there are no other routes to take. So you approach the roadblock carefully. There seems to be noone there." <<endl;
                
                ringroadShop();
       
                break;

            case 2:
    
    
                cout << "You travel down the main road that leads to the evacuation point. You turn around a sharp" << endl;
                cout << "corner and see the road is blocked and theres people sitting on the blockade. Before you" << endl;
                cout << "Can do anything hey shoot the windscreen and hit you in the chest. You are dead."
                cout<< "/n game over please start again" << endl;
                
                break;
    
            case 3:
                cout << "you Drive down the road that leads to the gunshop." << endl;
                
                lootGunshop()
                
                break;
    
        }
    }
}

int lootGunshop(){
    
    cout << "You reach the shop with no problems but you have attracted a group of zombies a few hundred meters behind you." << endl;
    cout << "The shop looks clear but you dont have long. do you loot the gunshop?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: yes" <<endl;
    cout << "/t 2: no, they are too close." << endl;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "Knowing you dont have long you move quickly over to and into the shop. A quick look" << endl;
            cout << "around and see some weapons secured to the wall. One of the rifles seems to be loosely secured" << endl;
            
            lootRifle()
            break;
        case 2:
            cout << "" << endl;
            
            
            break;
    }
}

int lootRifle(){
    cout << "The rifle was locked to its mount with a padlock. Knowing that the group of zombies is following you have a limited amount of time." <<endl:
    cout << "Which room do you search for the key?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Manager's office" << endl;
    cout << "/t 2: Accounting office" << endl;
    cout << "/t 3: storage" << endl;
    cin >> input;
    switch(input)
    
    {
    
        {
    
        }
    }
}
    
































int ringroadShop()
{
    cout << "You climb over the barricade and get off the overpass. By the exit you see a shop." << endl;
    cout << "Do you loot it?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Yes" << endl;
    cout << "/t 2: no, i need to get out of here" << endl;
    cin >> input;
    switch (input)
    {    
        case 1:
            cout << "You move over to the window and peek in" << endl;
            
            // enterShop()
            
            break;
            
        case 2:
            cout << "you continue walking down the ringroad towards the evacuation point." << endl;
            
            
            break;
        
        
        
        
        
        
        
        
        
        
        
        
        
    
    
    
    
    
    
    
    
}










