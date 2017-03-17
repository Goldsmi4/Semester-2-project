#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


    

//int car()
void car();

//void car()


int main()

 
{
    cout << "" << endl;
    car();
    return(0);
}






        

    



















int evacPointHorde()
{
    int input;
    {
        retry_evacPointHorde:
        cout << "You have reached the evacuation site, it is surrounded by high fences" << endl; 
        cout << "and a horde of zombies." << endl;
        
    
    }
}


int apartmentChoice()
{
    int input;
    {
        retry_apartmentChoice:
        cout << "" << endl;
        cout << "Do you go in to help?" << endl;
        cout << "" << endl;
        cout << "/t 1: Yes they need my help" << endl;
        cout << "/t 2: No too risky" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You move forward quickly to find the room they are in. The zombie group is approaching you." << endl
                << "You find the room and dash inside and close the door behind you. As you get into the room one" << endl
                << "of the zombies you thought was dead on the floor grabs yoour leg and bites it. The people in the" << endl
                << "see this. As you finish barricading the door, one of the survivors grabs a pistol and shoots you." << endl
                << "Then he proceeds to takes your things as your vision fades to black." << endl
                << "" << endl
                << "Game over" << endl;
                break;
                
            case 2:
                cout << "You quickly leave the way you came in and barricade the door behind you and continue" << endl
                << "to the evacuation area" << endl;
                evacPointHorde();
                break;
                
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_apartmentChoice;
        }
        
        
        
        
    }
}


int apartmentLoot()
{
    int input;
    {
        retry_apartmentLoot:
        cout << "On your way to the evacuation point you see an apartment and hear people screaming for help" << endl;
        cout << "from inside. Do you go inside to help." << endl;
        cout << "\n" << endl;
        cout << "/t 1: Yes." << endl;
        cout << "/t 2: No, carry on to the exacuation point." << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You head over cautiously, look through the main door" << endl
                << "and see many dead zombies in the main corridor. All the doors in the corridor" <<endl
                << "are open and the floor is soaked with blood. You move to it to investigate." << endl
                << "As you move in, you see a large group of zombies fall down the stairs at the" << endl
                << "far end of the corridor as you hear people yelling for help from one of the doors." << endl;
                apartmentChoice();
                break;
            case 2:
                cout << "You continue on to the evacuation point" << endl;
                evacPointHorde();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_apartmentLoot;
    }
}



int ringroadShop()
{                               // error here????????
    int input;
    {
    retry_ringroadShop:
    cout << "You climb over the barricade and get off the overpass. By the exit you see a shop." << endl;
    cout << "Do you loot it?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Yes" << endl;
    cout << "/t 2: no, i need to get out of here" << endl;
    cin >> input;
    switch (input)
    {    
        case 1:
            cout << "You move over to the window and peek in." << endl
            << "" << endl
            << "You enter the shop and look around. you find some food and medical supplies." << endl
            << "You dont find anything else so you leave and carry on to the evacuation point." <<endl;
            
            apartmentLoot();
            
            break;
            
        case 2:
            cout << "you continue walking down the ringroad towards the evacuation point." << endl;
            
            apartmentLoot();
            break;
        default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_ringroadShop;
    }
    }
}


int apartmentSurvivor()
{
    int input;
    {
        retry_apartmentSurvivor:
        cout << "" << endl;
        cout << "You approach the door and peak in through it. you see a man lying on the" << endl;
        cout << "floor in agony with a bite marks on his legs and arms. it appears that he" << endl;
        cout << "was responsible for the carnage in the hallway. You approach him to help," << endl;
        cout << "how should you?" << endl;
        cout << "" << endl;
        cout << "/t 1: Treat his wound the best you can and move him to the bed" << endl;
        cout << "/t 2: Look for his weapon and end it quickly for him" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You use some tshirts you find in a drawer to bandage up his wounds" << endl
                << "and give him some painkillers found in the bathroom to numb his pain." << endl
                << "you leave him some food and his pistol. You leave the building and walk to" << endl
                << "the evacuation point" << endl;
                
                break;
            case 2:
                cout << "You rummage around the room and find his pistol amongst a pile of bloody clothes" << endl
                << "you take aim at his head and just as you are about toshoot he says:" << endl
                << "Please.... let me do it." << endl
                << "you nod and hand him the pistol. You leave the building before he shoots and" << endl
                << "walk to the evacuation point" << endl;
                evacPointHorde();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_apartmentSurvivor;
        }
    }
}




int apartmentSearch()
{
    int input;
    {
        retry_apartmentSearch:
        cout << "On your way to the evacuation point you see an apartment and hear a person screaming for help." << endl;
        cout << "from inside. Do you go inside to help." << endl;
        cout << "\n" << endl;
        cout << "/t 1: Yes" << endl;
        cout << "/t 2: No, carry on to the exacuation point" << endl;
        
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You head over cautiously, look through the main door" << endl
                << "and see many dead zombies in the main corridor. One of the doors" <<endl
                << "into an apartment is open. you move to it to investigate." << endl;
                apartmentSurvivor();
                break;
            case 2:
                cout << "You continue on to the evacuation point" << endl;
                evacPointHorde();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_apartmentSearch;
        }    
            
        
    }
}


int gunshopEscape()
{
    int input;
    {
        retry_gunshopEscape:
        cout << "You run over to the door to reinforce it, toppeling a filing cabinet infront" << endl;
        cout << "of the door and moving a nearby table infront of it too, barricading the door." << endl;
        cout << "The Glass window on the door smashes as the zombies try to force their way in." << endl;
        cout << "You also hear alot of movement upstairs. These are your options." << endl;
        cout << "\n" << endl;
        cout << "/t 1: Investigate upstairs cautiously" << endl;
        cout << "/t 2: Look for an escape route" << endl;
        
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "On the landing there are three zombies. As you back up down the stairs the steps creek." << endl
                << "This causes them to rush you. you shoot two of them but the third tackles you and bites you" << endl
                << "on the neck. You are dead." <<endl
                << "\n Game over" << endl;
            
                break;
            
            case 2:
                cout << "You dash over to the manager's office and see a window. You shoot it, climb out" << endl
                << "and run down the street." << endl;
                apartmentSearch();
                break;
        
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_gunshopEscape;
        }
        
        
        
        
    }
    
}


int managerLock()
{
    int input;
    {
    retry_managerLock:
    cout << "You try several keys in the lock but none of them work. You have many more to try" << endl;
    cout << "but you hear the zombie group approaching. What do you do?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Leave, dont want to be stuck in here with them." << endl;
    cout << "/t 2: I have time to try a few more." << endl;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "You drop the keys you found and run to your car. You get in and drive off towards the evacuation point." << endl;
            apartmentSearch();
            break;
        case 2:
            cout << "You try a couple more and eventually one works. You take the rifle and a few mags of ammunition and sling" << endl
            << "the gun over your shoulder. However, the zombie group is meters from the shop door, effectively trapping you in the shop." << endl;
            gunshopEscape();
            break;
        default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_managerLock;    
            
    }
}}



int lootRifle()
{
        int input;
        {
    retry_lootRifle:
    cout << "The rifle was locked to its mount with a padlock. Knowing that the group of zombies is following you have a limited amount of time." <<endl;
    cout << "Which room do you search for the key?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Manager's office" << endl;
    cout << "/t 2: Accounting office" << endl;
    cout << "/t 3: storage" << endl;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "You go into the manager's office and look around. you see lots of keys" << endl
            << "in one of his drawers. you take them and try them on the padlock" << endl;
            managerLock();
            break;
            
        case 2:
            cout << "You look around the room, in the drawers of the desk, on the shelves and the cupboards." << endl
            << "Nothing. You hear the zombie group approaching. You leave before you get trapped in the shop." << endl;
            apartmentSearch();
            break;
        case 3:
            cout << "You look around the room, in the drawers of the desk, on the shelves and the cupboards." << endl
            << "Nothing. You hear the zombie group approaching. You leave before you get trapped in the shop." << endl;
            apartmentSearch();
            break;
        default:
            cout << "Thats not an option, please choose one given" << endl;
            goto retry_lootRifle;
    }}}

       
int lootGunshop()
    {
        int input;
        {
        retry_lootGunshop:
    cout << "You reach the shop with no problems but you have attracted a group of zombies a few hundred meters behind you." << endl;
    cout << "The shop looks clear but you dont have long. do you loot the gunshop?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: yes" <<endl;
    cout << "/t 2: no, they are too close." << endl;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "Knowing you dont have long you move quickly over to and into the shop. You close the door behind you and lock it." << endl;
            cout << "A quick look around and see some weapons secured to the wall. One of the rifles seems to be loosely secured" << endl;
            
            lootRifle();
            break;
        case 2:
            cout << " you get back into the car and continue driving to the extraction point." << endl;
            apartmentSearch();
            break;
    
        default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_lootGunshop;
    }}}        

void route_path()
    {
        int input;
        {
        retry_route_path:
        cout << "You reach the edge of the neighbourhood, which route do you want to take?" << endl;
        cout << "\n" << endl;
        cout << "/t 1: Take the ring road and travel around to the evacuation point. It could be safer but you are less likley to find anything" << endl;
        cout << "/t 2: Travel straight to the evacuation point. This will take you through residential areas but there is more chance to find things" << endl;
        cout << "/t 3: Go to the evacuation point via the gunshop downtown. There could be weapons there" << endl;
        cin >> input;
        switch(input)
        {    
            case 1:
    
    
                cout << "You travel along the ringroad towards the evacuation point, whilst on the overpass you see a roadblock up ahead." << endl
                << "You stop the car and get out well short of the roadblock. you are close to the evacuation point" << endl
                << "and there are no other routes to take. So you approach the roadblock carefully. There seems to be noone there." <<endl;
                
                ringroadShop();
       
                break;

            case 2:
    
    
                cout << "You travel down the main road that leads to the evacuation point. You turn around a sharp" << endl
                << "corner and see the road is blocked and theres people sitting on the blockade. Before you" << endl
                << "Can do anything hey shoot the windscreen and hit you in the chest. You are dead." << endl
                << "/n game over please start again" << endl;
                
                break;
    
            case 3:
                cout << "you Drive down the road that leads to the gunshop." << endl;
                
                lootGunshop();
                
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_route_path;
        }
    }
}
    
            
        
        

    int killLooter()
    {   
        int input;
        {
        retry_killLooter:
        cout << "He doesnt notice you but he is armed with a pistol. Do you quietly kill him?" << endl;
        cout << "\n" <<endl;
        cout << "/t 1: Yes" << endl;
        cout << "/t 2: No and leave" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You sneak up behind him and kill them. You loot him and get his pistol" << endl
                << "along with a tin of food. You rummage around the house and find some old" << endl         // possibly change this bit to use Will's search house code
                << "tshirts you can use as rags and some magazines you could use as bite protection" << endl
                << "on your arms. After looting the house you leave and go back to your car." << endl;
                route_path();
                break;
            case 2:
                cout << "You sneak out and leave the house, you go straight to your car and drive off." <<endl;
                route_path();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_killLooter;    
                
        }
    }
}

        
        
        
int neighbourCar()
    {
        int input;
        {
        retry_neighbourCar:
        cout << "You go up to the front door and hear movement inside. how should you enter?" << endl;
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
                route_path();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_neighbourCar;
        }
        }
        
    }        
    
    
   
    

void car(){
        int input;
        {
        retry_car:
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
                    cout << "You go into the garage and look around and see fuel cans, a knife and some duck tape." << endl
                    << "You pick these items up and go back to the car." << endl
                    << "There isn't much fuel in the fuel cans but you pour what is there into the tank and " << endl
                    << "and put the empty cans into the boot." << endl
                    << "You get back into the car and see the tank is now 1/3 full." << endl
                    << " you start driving" << endl;
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
        
        default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_car;
        }
        }
    }               // error here????????
