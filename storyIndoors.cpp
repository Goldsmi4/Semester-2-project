#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<ctime>
#include "storyIndoors.h"
using namespace std;

void gameBegins();

int playerLife = 120;    
int enemyLife = 100;

//Enemy attacks player
int enemyAttack() 
{
    srand(time(0));
    for (int n = 1; n <25; n++)
    {
        int HP;
        HP = (rand()%25) + 1;
        playerLife = playerLife - HP;
        cout << "You have taken a hit "<< "HP: " << HP << endl;
        
        if (playerLife <= 0) {
            cout << "You are Dead Your HP is: " << playerLife << endl;
        } else {
            cout << "Your HP is: " << playerLife <<endl;
        }
        return 0;
    }
}

//Player attacks the enemy  
int playerAttack(){
    for (int i = 1; i <25; i++)
    {
        int HP;
        HP = (rand()%25) + 1;
        enemyLife = enemyLife - HP;
        cout << "You're enemy has taken a hit "<< "HP: " << HP << endl;
        
        if (enemyLife <= 0) {
            cout << "Enemy is Dead it's HP is: "<< enemyLife << endl;
        } else {
            cout << "Enemy's HP is: " << enemyLife <<endl;
        }
        return 0;
    }
}


class NormalHuman {
public:
    void createNormalHuman(int id, string name, string behaviour, string description, string weapon ) {
        this->id = id;
        this->name = name;
        this->behaviour = behaviour;
        this->description = description;
        this->weapon = weapon;

    }
    string getId() {
        return std::to_string(id);
    }

    string getName(){
        return name;
    }

    string getDescription(){
        return description;
    }

    string getBehaviour(){
        return behaviour;
    }
    string getWeapon(){
        return weapon;
    }

    string getNormalHumanType(){
        return humanType;
    }

    void setNormalHumanType(string type){
        this->humanType = type;
    }

public:
    int id;
    string name;
    string description;
    string behaviour;
    string humanType;
    string weapon;
};

class HumanSurvivor: public NormalHuman{
public:
    void create(int id , string name, string behaviour, string description, string weapon){
        createNormalHuman(id, name, behaviour, description, weapon);
        setNormalHumanType("Uninfected Human");
    }

};

class Zombie {

public:
    void createZombie(int id, string name, string behaviour, string description ) {
        this->id = id;
        this->name = name;
        this->behaviour = behaviour;
        this->description = description;
        }
    string getName(){
        return name;
    }

    string getDescription(){
        return description;
    }

    string getBehaviour(){
        return behaviour;
    }

    string getId(){
        return std::to_string(id);
    }

    string getZombieType(){
        return zombieType;
    }

    string getIsFast(){
        if (isFast) {
            return "Yes";
        }
        
        return "No";
    }


    void setIsFast(bool isFast){
        this->isFast = isFast;
    }

    void setZombieType(string type){
        this->zombieType = type;
    }

public:
    int id;
    string name;
    string description;
    string behaviour;
    string zombieType;
    bool isFast;
};

//Creates a zombie of human type 
class HumanZombie: public Zombie {
    public:
       void create(int id, string name, string behaviour, string description ) {
           createZombie(id,name,behaviour,description);
           setIsFast(false);
           setZombieType("Human Zombie");
       }
};


//Creates a zombie of animal type 
class AnimalZombie: public Zombie {
    public:
       void create(int id, string name, string behaviour, string description ) {
           createZombie(id,name,behaviour,description);
           setIsFast(true);
           setZombieType("Animal Zombie");
       }
};
//void stayIndoors;

int somethingElse() {  
    
    gameBegins();  
    return 0;
};

//Start the Zombie attacks
void callNpcAttack() {
    // Normal Human: Human Survivor
    HumanSurvivor humanSurvivor;
    humanSurvivor.create(0, "Human Survivor, ",  "Speciality: Aggressive if approached", " Survivor can be recruited", " Main weapon: kitchen knife");
    // Normal Human: MilitarySurvivorUnit
    HumanSurvivor militaryUnit;
    militaryUnit.create(1, "Military Survivors, ",  "Speciality: Marksmen", " recruiting to help catch zombie for studying", " Main weapon: Colt M4A1 5.56 NATO military, Side piece:  HK Mk 23 SOCOM .45 ACP, Tactical knives");

    // Normal Human: Rebel unit
    HumanSurvivor rebelUnit;
    rebelUnit.create(2, "Rebel unit, ", "Speciality: Always on alert", " recruiting to help kill all zombies ", " Main weapon:AR-15, Side piece:Sig-p226");

    // NormalHuman: GangUnit
    HumanSurvivor gangUnit;
    gangUnit.create(3, "Gang unit, " , "Speciality: Violent", " Attack to kill and steal your supplies ", " Main weapon: AK-47, Side piece: M9");

        // Human Zombie: Infected Survivor
    HumanZombie infectedSurvivor;
    infectedSurvivor.create(4, "Infected Survivor", "Speciality: Aggressive or Scared", " Survivor can act unpredictably (Either attack the group or plead for his life)");

    // Human Zombie: Walker
    HumanZombie walker ;
    walker.create(5, "Walker", "Speciality: violent", "Infected survivor that has recently been resurrected by the disease, eventually evolves into a runner, but its slow moving and not easily alerted ");

    // Animal Zombie: Crazy Dog
    AnimalZombie crazyDog;
    crazyDog.create(6, "Crazy Dog, ", "Speciality: Very strong", " Attacks are unpredictable");

    // Animal Zombie: Fast Cat
    AnimalZombie fastCat;
    fastCat.create(7, "Fast Cat, ", "Speciality: Very Fast and Very Agaile", " But is very weak");
// Randomly select a NPC to attack
    int random();
    {
        srand(time(0));
        int x = rand()>>8;
        x =1 + (x%8);
        
        if (x == 1) {
            cout << humanSurvivor.getId() + ":" +humanSurvivor.getNormalHumanType() + " (" + humanSurvivor.getBehaviour() + "): " + humanSurvivor.getName() + humanSurvivor.getDescription() + humanSurvivor.getWeapon() << endl;         
        } else if (x == 2) {
            cout << militaryUnit.getId() + ":" + militaryUnit.getNormalHumanType() + " (" + militaryUnit.getBehaviour() + "): " + militaryUnit.getName() + militaryUnit.getDescription() + militaryUnit.getWeapon() << endl;
        } else if (x == 3) {
             cout << rebelUnit.getId() + ":" +rebelUnit.getNormalHumanType() + " (" +rebelUnit.getBehaviour() + "): " + rebelUnit.getName() + rebelUnit.getDescription() +rebelUnit.getWeapon() << endl;
        } else if (x == 4) {
             cout << gangUnit.getId() + ":" +gangUnit.getNormalHumanType() + " (" +gangUnit.getBehaviour() + "): " + gangUnit.getName() +gangUnit.getDescription() +gangUnit.getWeapon() << endl;
        } else if (x == 5) {
             cout << infectedSurvivor.getId() + ":" +infectedSurvivor.getZombieType() + "(" +infectedSurvivor.getBehaviour()+ "): " + infectedSurvivor.getDescription() << endl;  
        } else if (x == 6) {
             cout <<  walker.getId() + ":" + walker.getZombieType() + " (" + walker.getBehaviour()+"): " +  walker.getDescription() << endl;  
        } else if (x == 7) {
             cout << crazyDog.getId() + ":" +crazyDog.getZombieType() + " (" +crazyDog.getBehaviour()+"): " + crazyDog.getDescription() << endl;  
        } else if (x == 8) {
             cout << fastCat.getId() + ":" +fastCat.getZombieType() + " (" +fastCat.getBehaviour()+"): " + fastCat.getDescription() << endl;  
        }
    };
    
    while (playerLife > 0 && enemyLife > 0)
	{
		enemyAttack ();
		playerAttack ();
		if (playerLife <= 0)
		{
			cout << "You have been killed by the Enemy." << endl;
		}
		else if (enemyLife <= 0)
		{
			cout << "You have killed the Enemy." << endl;
		}
	}
}
void levelUp(){
    cout << "Level 1 Complete" << endl;
    
}
void driveAway(){
    int input;
        cout << "A Captin in a military Unit has approched you and ask you to join them" << endl
             << "Select one of these options: "<< endl
             << "1. Accept offer " << endl
             << "2. Decline Offer " << endl;
             cin >> input;
        switch (input)
        {
            case 1:
                cout << "Offer Accepted" << endl;
                levelUp();
                break;
            case 2:
                cout << "you have been caught by a group of zombie "<< endl;
                cout << "Game Over " << endl;
                exit (0);
                break;    
        }
        
    
}

void playerStatus(){
    if (playerLife > enemyLife)
    {
        cout << "You Win!" << endl;
        cout << "your HP is now: " << playerLife << endl;
    }else {
        cout << "Game Over" << endl;
        exit (0);
    }
    
    
}

void runAway(){
    int input;
        cout << "Select one of these options: "<< endl
        <<"1. Run North" << endl
        <<"2. Run East" << endl
        <<"3. Run South" << endl
        <<"4. Run West" << endl;
        cin >> input;
    switch (input)
    {
        case 0:
            exit (0);
        case 1:
            cout << "you have been caught by a group of zombie "<< endl;
            cout << "Game Over " << endl;
            exit (0);
            break;
        case 2:
            cout << "Run East " << endl;
            cout << "There is an enemy up ahead prepare for battle" << endl;
            callNpcAttack();
            playerStatus();
            levelUp();
            break;
        case 3:
            cout << "Run South " << endl;
            cout << "There is an enemy up ahead prepare for battle" << endl;
            callNpcAttack();
            playerStatus();
            levelUp();
            break;
        case 4:
            cout << "Run West " << endl;
            cout << "There is an enemy up ahead prepare for battle" << endl;
            callNpcAttack();
            playerStatus();
            levelUp();
            break;
    }
}

void leave(){
    int input;
        cout << "Select one of these options: "<< endl
        <<"1. Take the car and drive away" << endl
        <<"2. runAway" << endl
        <<"3. Look for survivors" << endl;
        cin >> input;
        
    switch (input)
    {
        case 0:
            exit (0);
            break;
        case 1:
            cout << "Take the car and drive away " << endl;
            driveAway();
            break;
        case 2:
            cout << "Run away "<< endl;
            runAway();
            break;
        case 3:
            cout << "Look for survivors" << endl;
            cout << "You were killed and all you supplies have been stolen " << endl;
            cout << "Game Over" << endl;
            exit (0);
        break;
     }
}  

void panic(){
    int input;
        cout << "Select one of these options: "<< endl
        <<"1. Run away" << endl
        <<"2. Hide" << endl
        <<"3. Kill yourself" << endl;
        cin >> input;
        
    switch (input)
    {
        case 0:
            exit (0);
            break;
        case 1:
            cout << "Run away "<< endl;
            runAway();
            break;
        case 2:
            cout << "Hide " << endl;
            cout << "You were bitten by your dog who has become a zombie"<< endl;
            cout << "Game Over " << endl;
            exit(0);
            break;
        case 3:
            cout << "You have Killed yourself" << endl;
            cout << "Game Over " << endl;
            exit (0);
        break;
     }
}  

void home() {
    
    int input;
    cout << "Select one of these options: "<< endl
    <<"1. Start to Panic" << endl
    <<"2. Barricade the House" << endl
    <<"3. Leave the House" << endl;
    cin >> input;
    
    switch (input)
    {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Start to Panic "<< endl;
            panic();
            break;
        case 2:
            cout << "You begin barricading the house " << endl;
            cout << "The house has been breached from the back You're Dead " << endl;
            cout << "Game Over " << endl;
            break;
        case 3:
            cout << "Leave the House " << endl;
            leave();
            break;
        }
}

void gameBegins() {
    int input;
    cout << "The game begins when our player learns the existance of a mutated virus which turns humans to Zombies" <<endl
    << "Press 1 to start Game and 0 to exit :"<< endl
    << "0. Exit Game "<< endl
    << "1. Start Game"<< endl;
    cin >> input;
    
    switch (input)
    {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Start Game"<< endl;
            home();
            break;
    }

}
