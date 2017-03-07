#include <iostream>
#include <string>

using namespace std;

bool answer()
{
    cout<< "enter at own discretion...(y/n): "<<endl ;
    
    string entry = "";
    bool valid_entry = false;
    
    while (!valid_entry) {
        cin >> entry;
        
        if (entry =="yes" or entry == "Yes" or entry == "y" or entry == "Y") {
            valid_entry= true;
            return true;
        }else if (entry =="No" || entry == "no" || entry == "N" || entry == "n"){
            valid_entry = true;
            return false;    
        }else{
            cout << "invalid input! please try again " << endl;
            
        }
    }
        
}
    