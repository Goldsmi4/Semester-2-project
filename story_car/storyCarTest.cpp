#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


    

//int car()
void car();

//void car()


int main()
//int car_part()
 
{
    cout << "" << endl;
    car();
    return(0);
}





void evacAttackZombie()          //last function where the player has to defeat a small group of zombies
{                               //before he can enter the safe zone and win.
    
    
    
    
    {
        
        
        
        
    }
}
        

void evacRoofAttention()
{
    int input;
    {
        retry_evacRoofAttention:
        cout << "Do you try and get their attention by yelling?" << endl;
        cout << "" << endl;
        cout << "/t 1: Yes, they can help me" << endl;
        cout << "/t 2: No, Lets take a closer look" << endl;
        cout << "" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You wave your arms and yell to get their attention. They dont respond. You hear lots of" << endl
                << "stumbling a floor below you and suddenly the internal roof access door flies open. You are rushed" << endl
                << "by a large group of zombies. You are in no position to fight them so you turn and run for the external"
                << "roof access ladder but trip on one of the cables running across the roof. They grab you. You are dead" << endl
                << "" << endl
                << "Game over" << endl;
                break;
                
            case 2:
                cout << "You look closer at the people in the evacuation point and see they are zombies." << endl
                << "after looking around for a while, the bus seems to be the safest way into the site." << endl
                << "You climb down from the apartment roof and make your way quietly to the nearest building" << endl
                << "to the bus. When you are there you wait for an opportunity to run over. After some time the zombies" << endl
                << "disperse leaving three of them between you and the bus. More are wondering towards the bus so you make" << endl
                << "your move." << endl;
                evacAttackZombie();
                break;
            
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_evacRoofAttention;
    }}
}






void evacRoof()
{
    int input;
    {
        retry_evacRoof:
        cout << "Once on the roof you look around the evacuation point fro any ways in. You see a bus that has" << endl;
        cout << "rammed the fence but didnt make it through. Its roof is high enough for you to use it to climb" << endl;
        cout << "over the fence. Do you try this?" << endl;
        cout << "" << endl;
        cout << "/t 1: Yes, looks like the best option" << endl;
        cout << "/t 2: No, look for another safer way in" << endl;
        cout << "" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You climb down from the apartment roof and make your way quietly to the nearest building" << endl
                << "to the bus. When you are there you wait for an opportunity to run over. After some time the zombies" << endl
                << "disperse leaving three of them between you and the bus. More are wondering towards the bus so you make" << endl
                << "your move." << endl;
                //insert fight function here ;
                evacAttackZombie();
                break;
                
            case 2:
                cout << "You continue to look around and eventually see people in the evacuation point wondering around" << endl;
                evacRoofAttention();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_evacRoof;
                
        }
    }
}


void evacGateDash()
{
    int input;
    {
        retry_evacGateDash:
        cout << "" << endl;
        cout << "Do you go now?" << endl;
        cout << "" << endl;
        cout << "/t 1: Yes its now or never" << endl;
        cout << "/t 2: No wait for them to move from the gate" << endl;
        cout << "" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You move towards the gate and attack the zombies in your way." << endl;
                // attack the zombies function here
                evacAttackZombie();
                break;
            case 2:
                cout << "You wait even longer for them to move but the noise behind you turns out to be a" << endl
                << "small group of zombies. However they seem different. They see you and run towards you" << endl
                << "You turn around and attack them but you get overrun and mauled. You are dead." << endl
                << "" << endl
                << "Game over" << endl;
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_evacGateDash;
                
        }
    }
}


void evacInvest()
{
    int input;
    {
        retry_evacInvest:
        cout << "You see an apartment with external roof access and an abandoned military vehicle." << endl;
        cout << "What do you go to?" << endl;
        cout << "" << endl;
        cout << "/t 1: Apartment roof to scout area" << endl;
        cout << "/t 2: Military vehicle" << endl;
        cout << "" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                cout << "You head over to the apartment and climb up to the roof." << endl;
                evacRoof();
                break;
                
            case 2:
                cout << "You walk over to the vehicle to try and find anything useful" << endl
                << "Looking inside it there is little to salvage but youdo find a flare." << endl
                << "You then head to the roof and climb up." << endl;
                // add flare to inventory
                evacRoof();
                break;
                
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_evacInvest;
        }
        
                

    }
}



void evacDistract()
{
    int input;
    {
        retry_evacDistract:
        cout << "You throw them one by one towards the group of abandoned cars to your ledt away from" << endl;
        cout << "the main gate, they start burning and one of the cars explodes. The horde starts stumbling" << endl;
        cout << "over to the cars. do you go for the gate now?" << endl;
        cout << "" << endl;
        cout << "/t 1: Yes" << endl;
        cout << "/t 2: No, wait a minute" << endl;
        cout << "" << endl;
        cin >> input;
        switch(input)
        {
            case 1: 
                cout << "You Start to run over to the main gate but a large group sees you and walk towards you" << endl
                << "You continue to the main gate, get there and start opening it. before the metal beam securing the" << endl
                << "door is removed the large zombie group catches up with you and mauls you to death."<< endl
                << "" << endl
                << "Game over" << endl;
                break;
            
            case 2:
                cout << "You wait. The horde continues to the cars, a two zombies remain between you and the gate." << endl
                << "You hear lots of movement around the corner behind you." << endl;
                evacGateDash();
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_evacDistract;
        }
    }
}


void evacPointHorde()
{
    int input;
    {
        retry_evacPointHorde:
        cout << "You have reached the evacuation site, it is surrounded by high fences" << endl; 
        cout << "and a horde of zombies. How do you want to get in?" << endl;
        cout << "" << endl;
        cout << "/t 1: Look around first to try and find an easier way in" << endl;
        cout << "/t 2: Make a distraction and run for the main gate" << endl;
        cout << "/t 3: Use a car to ram the gate to get in" << endl;
        cout << "" << endl;
        cin >> input;
        switch(input)
        {
            case 1: 
                cout << "You look around the area." << endl;
                evacInvest();
                break;
            case 2:
                cout << "You go to a nearby shop and take some glass bottles. Using these, some cloth rags and fuel from" << endl
                << "an abandoned car, you make 5 molotovs." << endl;
                evacDistract();
                break;
            case 3: 
                cout << "You go over to a group of cars to see if any are working. The third one you try" << endl
                << "has keys in the ignition and works. You drive it onto the main road leading to the main gate" << endl
                << "to get a run up to the gate. You wait For a gap in the zombie horde and accelerate. You " << endl
                << "reach the horde and plow into it, reaching the gate. the gate is locked with a heavy " << endl
                << "metal beam and the hinges dont break. The gate remains closed. You are now trapped in the middle of" << endl
                << "the zombie horde with no wayto escape. You are dead" << endl
                << "" << endl
                << "Game over" << endl;
                break;
            default:
                cout << "Thats not an option, please choose one given" << endl;
                goto retry_evacPointHorde;
        }
    
    }
}


void apartmentChoice()
{
    int input;
    {
        retry_apartmentChoice:
        cout << "" << endl;
        cout << "Do you go in to help?" << endl;
        cout << "" << endl;
        cout << "/t 1: Yes they need my help" << endl;
        cout << "/t 2: No too risky" << endl;
        cout << "" << endl;
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


void apartmentLoot()
{
    int input;
    {
        retry_apartmentLoot:
        cout << "On your way to the evacuation point you see an apartment and hear people screaming for help" << endl;
        cout << "from inside. Do you go inside to help." << endl;
        cout << "\n" << endl;
        cout << "/t 1: Yes." << endl;
        cout << "/t 2: No, carry on to the exacuation point." << endl;
        cout << "" << endl;
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
}}



void ringroadShop()
{                               
    int input;
    {
    retry_ringroadShop:
    cout << "You climb over the barricade and get off the overpass. By the exit you see a shop." << endl;
    cout << "Do you loot it?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Yes" << endl;
    cout << "/t 2: no, i need to get out of here" << endl;
    cout << "" << endl;
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


void apartmentSurvivor()
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
        cout << "" << endl;
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




void apartmentSearch()
{
    int input;
    {
        retry_apartmentSearch:
        cout << "On your way to the evacuation point you see an apartment and hear a person screaming for help." << endl;
        cout << "from inside. Do you go inside to help." << endl;
        cout << "\n" << endl;
        cout << "/t 1: Yes" << endl;
        cout << "/t 2: No, carry on to the exacuation point" << endl;
        cout << "" << endl;
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


void gunshopEscape()
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
        cout << "" << endl;
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


void managerLock()
{
    int input;
    {
    retry_managerLock:
    cout << "You try several keys in the lock but none of them work. You have many more to try" << endl;
    cout << "but you hear the zombie group approaching. What do you do?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: Leave, dont want to be stuck in here with them." << endl;
    cout << "/t 2: I have time to try a few more." << endl;
    cout << "" << endl;
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



void lootRifle()
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
    cout << "" << endl;
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
            << "Nothing. You hear the zombie group approaching. You leave before you get trapped in the shop." << endl
            << "However, the zombie group has surrounded your car so you carry on on foot." << endl;
            apartmentSearch();
            break;
        case 3:
            cout << "You look around the room, in the drawers of the desk, on the shelves and the cupboards." << endl
            << "Nothing. You hear the zombie group approaching. You leave before you get trapped in the shop." << endl
            << "However, the zombie group has surrounded your car so you carry on on foot." << endl;
            apartmentSearch();
            break;
        default:
            cout << "Thats not an option, please choose one given" << endl;
            goto retry_lootRifle;
    }}}

       
void lootGunshop()
    {
        int input;
        {
        retry_lootGunshop:
    cout << "You reach the shop with no problems but you have attracted a group of zombies a few hundred meters behind you." << endl;
    cout << "The shop looks clear but you dont have long. do you loot the gunshop?" << endl;
    cout << "\n" << endl;
    cout << "/t 1: yes" <<endl;
    cout << "/t 2: no, they are too close." << endl;
    cout << "" << endl;
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
        cout << "" << endl;
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
    
            
        
        

void killLooter()
    {   
        int input;
        {
        retry_killLooter:
        cout << "He doesnt notice you but he is armed with a pistol. Do you quietly kill him?" << endl;
        cout << "\n" <<endl;
        cout << "/t 1: Yes" << endl;
        cout << "/t 2: No and leave" << endl;
        cout << "" << endl;
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

        
        
        
void neighbourCar()
    {
        int input;
        {
        retry_neighbourCar:
        cout << "You go up to the front door and hear movement inside. how should you enter?" << endl;
        cout << "\n" << endl;
        cout << "/t 1: Front door" << endl;
        cout << "/t 2: Back door" << endl;
        cout << "/t 3: Leave it and go back to your car" << endl;
        cout << "" << endl;
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
        cout << "" << endl;
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
        }}}               