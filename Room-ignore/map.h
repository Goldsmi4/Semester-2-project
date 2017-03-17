#ifndef MAP_H
#define MAP_H


#include<vector>
#include<fstream>
#include<string>
//this is Map class interface to the user
class Map
{

private:
	std::vector<Room> mRooms; //vector is the best data types small memory 
	//consumption and fast acces with assigning memory before you put stuff inside you can even save time
	Room *mCurRoom; //room that you are currently shown http://www.cplusplus.com/articles/ENywvCM9/ pointers and references

public:

	Map();
	//full constructor
	Map(std::vector<Room> rooms);

	~Map();

	void loadRooms(std::ifstream& inFile);
	//current room functionality
	void setCurrentRoom(Room& r1);
	void setCurrentRoom(std::string& rName);
	bool curRoomCheckExit(std::string& exit);

	Room& getCurrentRoom();

	Room* getAnyRoom(std::string& rName);
	

	void printCurrentRoom();

	void printMap();
	void loadPosition(std::ifstream& inFile);
	void savePosition(std::ofstream& oFile);


