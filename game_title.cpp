#include <iostream>
#include <string>
#include <fstream>


using namespace std;
    



string contents (ifstream&);  //this will get the file contents

int hey(int argc , char *argv[]);
    
int game_title ()

{
    ifstream reader ("title"); //will open the file 

    string gametitle = contents (reader); //get file contents 

    cout << gametitle << endl;

    reader.close();

    return 0;  
};

string contents (ifstream& title)
{
    string line = "";
    if (title.txt)
    {
        string temporary;
        getline (title.txt , temporary);
        temporary =+ "\n";
        
        line += temporary;
    }
    return line;
}