#include <iostream>
#include <stdlib.h>


using namespace std;

void options();

int main()
{
    cout<<"line has been cut"<<endl;
    options();
    return(0);
}

void options()
{
    int input;
    
    {
        cout << "Please select an option:" << endl
        << "1.Search the house " << endl
        << "2.Go to neighbours " << endl
        << "3.Hide " << endl
        << "4.Shout for help " << endl;
        cin >> input;
        
       switch(input)
       {
           case 0:
               exit(0);
           case 1:
               cout << "Search the house" << endl;
               cout <<"u die"<<endl;
               break;
           case 2:
               cout << "Go to neighbours" << endl;
               break;
           case 3:
               cout << "Hide " << endl;
               break;
           case 4:
               cout << "Shout for help" <<endl;
               break;
           default:
               cout<<"invalid option please choose between 1 and 4"<< endl;
               break; 
       }
    }
}
