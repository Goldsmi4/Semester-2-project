#include <iostream>
#include <stdlib>
#include <time>

using namespace std;

int npc_attack() {
    
    
    int selection;
    int npAttack , npcDefence, npcAgility, npcDamage, npcHealth;
    int attack, defence, agility, damage, health;
    //declaring variables for attack 
    
    npcAttack = 10;
    npcBite =10;
    npcDefence = 10;
    npcAgility=10; 
                      //setting values for each attack option
    attack = 10; 
    kick = 10;       //aswell as stats for both player and npc
    defence = 10;
    agility =10;
    
    
    srand(unsigned(time(0)));
    
    npcHealth = rand()%10+90;
    health = rand()%10+90;
    
    // add randomiser to check who gets the first move
   
    while (npcHealth && health >0){
        cout << " select your attack -" << endl;
        
        cout << "/t 1: punch enemy" << endl;
        cout << "/t 2: use equipted weapon " << endl;
        cout << "/t 3: run and take cover " << endl;
        cout << "/t 4: block and counter attack" << endl;
        
        //if possible add weapon selected from database 
        //this way the weapon will be automatically
        //displayed 
        //
        
        switch(selection){
            case 1:
                
                break;
            
            case 2:
                
                break;
                
            case 3:
                
                break;
                
            case 4:
                
                break;
                
            default:
                cout << "invalid input, try again" << endl;       
                
        }
        
        selection = rand()%3;
        
        switch (selection){
                        case 1:
                
                break;
            
            case 2:
                
                break;
                
            case 3:
                
                break;
                
            case 4:
                
                break;
                
            default:
                cout << "invalid input, try again" << endl;  
                
        }
        npcdamage = (attack-)
        
        
    }
    
       
    
    
    
    
    
    
    
    
    
}