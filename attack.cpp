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
        cout << "- select your attack -" << endl;
        
        cout << "/t 1: Punch enemy" << endl;
        cout << "/t 2: Use equipted weapon " << endl;
        cout << "/t 3: Run and take cover " << endl;
        cout << "/t 4: Block and counter attack" << endl;
        
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
                cout << "Invalid input, try again" << endl;  
                
        }
        npcdamage = (attack-kick)-(npcDefence/attack);
        
        if(npcDamage <0){
            
            npcDamage = 0 
        }
        
        npcHealth = npcHealth - npcDamage;
        
        cout << "Your attach has reduced the zombies health by "<< npcDamage << "!\n";
        cin.get();
        
        if(npcHealth < 1) {
            cout << " You have killed the zombie! \n";
            cin.get();
            return 0;
            
        }
        
        
        cout << "The zombie still has" << npcHealth << "health left.\n";
        damage= (npcAttack-agility) - (defence/npcAttack);
        
        if (damage <0) {
            
            damage=0
            
        }
        
        health=health - damage;
        
        cout << "You have lost " << damage << "health, you still have " << health << "health left\n";
        
        
        if (health < 1){
            
            cout << " you died, would you like to start from checkpoint again, test your skills once more? [y/n]" << endl;
           
            cin.get();
            return 0;
            
         }
        
        else{
            
            cout << " how would you like to attack?? \n"
                
                
            }
        }
        
        
        
            
        
    }
    
       
    
    
    
    
    
    
    
    
    
}