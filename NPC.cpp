#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<ctime>

using namespace std;

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
class HumanZombie: public Zombie {
    public:
       void create(int id, string name, string behaviour, string description ) {
           createZombie(id,name,behaviour,description);
           setIsFast(false);
           setZombieType("Human Zombie");
       }
};

class AnimalZombie: public Zombie {
    public:
       void create(int id, string name, string behaviour, string description ) {
           createZombie(id,name,behaviour,description);
           setIsFast(true);
           setZombieType("Animal Zombie");
       }
};


int main() {

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

    int random();
    {
    srand(time(0));
    int x = rand()>>8;
    x =1 + (x%8);
        
        if (x == 1){
        cout << humanSurvivor.getId() + ":" +humanSurvivor.getNormalHumanType() + " (" + humanSurvivor.getBehaviour() + "): " + humanSurvivor.getName() + humanSurvivor.getDescription() + humanSurvivor.getWeapon() << endl;         
        }else if (x == 2){
            cout << militaryUnit.getId() + ":" + militaryUnit.getNormalHumanType() + " (" + militaryUnit.getBehaviour() + "): " + militaryUnit.getName() + militaryUnit.getDescription() + militaryUnit.getWeapon() << endl;
        }else if (x == 3) {
             cout << rebelUnit.getId() + ":" +rebelUnit.getNormalHumanType() + " (" +rebelUnit.getBehaviour() + "): " + rebelUnit.getName() + rebelUnit.getDescription() +rebelUnit.getWeapon() << endl;
        }else if (x == 4){
             cout << gangUnit.getId() + ":" +gangUnit.getNormalHumanType() + " (" +gangUnit.getBehaviour() + "): " + gangUnit.getName() +gangUnit.getDescription() +gangUnit.getWeapon() << endl;
        }else if (x == 5){
             cout << infectedSurvivor.getId() + ":" +infectedSurvivor.getZombieType() + "(" +infectedSurvivor.getBehaviour()+ "): " + infectedSurvivor.getDescription() << endl;  
        }else if (x == 6){
             cout <<  walker.getId() + ":" + walker.getZombieType() + " (" + walker.getBehaviour()+"): " +  walker.getDescription() << endl;  
        }else if (x == 7){
             cout << crazyDog.getId() + ":" +crazyDog.getZombieType() + " (" +crazyDog.getBehaviour()+"): " + crazyDog.getDescription() << endl;  
        }else if (x == 8){
             cout << fastCat.getId() + ":" +fastCat.getZombieType() + " (" +fastCat.getBehaviour()+"): " + fastCat.getDescription() << endl;  
        }
    
};

    int attack();
    {
        srand(time(0));
        int x = rand()>>10;
        x = (x%10);
         if (x == 0){
        cout << "You attacked 0 times" << endl;   
        }else if (x == 1){
        cout << "You attacked 1 time" << endl;
        }else if (x == 2){
        cout << "You attacked 2 times" << endl;
        }else if (x == 3){
        cout << "You attacked 3 times" << endl;
        }else if (x == 4){
        cout << "You attacked 4 times" << endl;
        }else if (x == 5){
        cout << "You attacked 5 times" << endl;
        }else if (x == 6){
        cout << "You attacked 6 times" << endl;
        }else if (x == 7){
        cout << "You attacked 7 times" << endl;
        }else if (x == 8){
        cout << "You attacked 8 times" << endl;
        }else if (x == 9){
        cout << "You attacked 9 times" << endl;
        }else if (x == 10){
        cout << "You attacked 10 times" << endl;
        }
       
        srand(215);
        int y = rand()>>10;
        y = (y%10);
        if (y == 0){
        cout << "Computer attacks 0 times" << endl;   
        }else if (y == 1){
        cout << "Computer attacks 1 time" << endl;
        }else if (y == 2){
        cout << "Computer attackes 2 times" << endl;
        }else if (y == 3){
        cout << "Computer attackes 3 times" << endl;
        }else if (y == 4){
        cout << "Computer attackes 4 times" << endl;
        }else if (y == 5){
        cout << "Computer attackes 5 times" << endl;
        }else if (y == 6){
        cout << "Computer attackes 6 times" << endl;
        }else if (y == 7){
        cout << "Computer attackes 7 times" << endl;
        }else if (y == 8){
        cout << "Computer attackes 8 times" << endl;
        }else if (y == 9){
        cout << "Computer attackes 9 times" << endl;
        }else if (y == 10){
        cout << "Computer attackes 10 times" << endl;
        }
        
        if (x>y){
            cout << "YOU WIN!" << endl;
            }else if (x==y){
                cout << "Attack again" << endl;
                }else{
                    cout << "YOU Lose" << endl;
                }
                
}
    
return 0;
}