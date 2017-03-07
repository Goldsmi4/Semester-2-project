#include <iostream>
#include <string>
#include <fstream>

using namespace std;
    




std:: string contents (std::ifstream&);  //this will get the file contents

int hey(int argc , char *argv[])
    
    
{
    void game_title ()
        
    std::ifstream reader ("title.txt"); //will open the file 
    
    std::string gametitle = contents (reader); //get file contents 
        
    std::cout << gametitle << std::endl;
    
    reader.close();
        
    return 0;
    
    
    
    
}

