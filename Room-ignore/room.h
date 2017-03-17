#ifndef ROOM_H
#define ROOM_H

#include<string>
#include<vector>
#include<fstream>



//this is Room class interface to the user

class Room
{
private:
	std::string name;
	std::string description;
	unsigned int roomNumber;
	std::vector<std::string> exits;
	std::vector<Object> objects;

public:
	
	Room();
	Room(std::string name, std::string description, unsigned int roomNumber, std::vector<std::string> exits);
	~Room();

	void goToRoom(Room& r);
	
	//getters and setters for name etc.
	std::string getName();
	void setName(std::string nName);
	std::string getDescription();
	void setDescription(std::string desc);
	std::vector<std::string>getExits();
	unsigned int getRoomNumber();
	void setRoomNumber(unsigned int rNum);
	void setExits(std::vector<std::string> exits);
	//aditional functionality
	bool  checkForExit(std::string& exitName);
	void printRoom();
	//load function
	void loadRoom(std::ifstream& inFile);







};

//Unless you are working on an environment with severely constrained resources(esp.tiny memory), you are optimising on the wrong end.
//Operations on unsigned int are typically faster than on unsigned char, 
//because your processor cannot fetch single bytes but has to get at least a multiple of 4 and mask out the other 3 bytes.

//to display char as number
//std::cout << (int)A << std::endl;
//std::cout << +A << std::endl;








#endif 