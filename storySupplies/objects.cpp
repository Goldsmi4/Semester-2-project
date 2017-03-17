#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <stdio.h>

using namespace std;

class OBJECTS{//class defenition and acces modifier defined
    public:
        void setName (string x){
            name=x;
        }
        string getName(){
            return name;
        }
        void setCategory (string y){
            category=y;
        }
        string getCategory(){
            return category;
        }
        void setType (string z){
            type=z;
        }
        string getType(){
            return type;
        }
    private:
        string name;
        string type;
        string category;
    
        
};


int items()
{
    OBJECTS knife;
    knife.setName("\t >> name of object: knife ");
    knife.setType("\t >> type: melee ");
    knife.setCategory("\t >> category: weapons ");
    
    OBJECTS health;
    health.setName("\t >> name of object: prescription drugs ");
    health.setType("\t >> type: consumable ");
    health.setCategory("\t >>  category: health ");
    
        OBJECTS pistol;
    pistol.setName("\t >> name of object: knife ");
    pistol.setType("\t >> type: melee ");
    pistol.setCategory("\t >> category: weapons ");
    
        OBJECTS food;
    food.setName("\t >> name of object: canned food ");
    food.setType("\t >> type: consumable");
    food.setCategory("\t >> category: health");
    
        OBJECTS ball;
    ball.setName("\t >> name of object: ball");
    ball.setType("\t >> type: unknown");
    ball.setCategory("\t >> category: misc ");
    
        OBJECTS bat;
    bat.setName("\t >> name of object: baseball-bat ");
    bat.setType("\t >> type: melee ");
    bat.setCategory("\t >> category: weapon ");
    
        OBJECTS aid;
    aid.setName("\t >> name of object: rags ");
    aid.setType("\t >> type: consumable");
    aid.setCategory("\t >> category: health ");
    
        OBJECTS flare;
    flare.setName("\t >> name of object: flare");
    flare.setType("\t >> type: consumable ");
    flare.setCategory("\t >> category: misc");    
    
    
    
    cout << knife.getName()+knife.getCategory()+knife.getType() << endl;
    cout << health.getName()+health.getCategory()+health.getType() << endl;
    return 0;
 
}