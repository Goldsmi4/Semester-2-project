

// implementation of room class

#include<string>
#include<iostream>
#include<vector>

using std::string;		using std::vector;
using std::cout;		using std::cin;
using std::endl;		using std::ifstream;
//defines my types just change here if i want to change to list
typedef vector<string> strContainer;

Room::Room()
{
	name = "no name";
	description = "no description";
	roomNumber = 99;
}

Room::Room(string nName, string desc, unsigned int roomN, strContainer ext)
{
	name = nName;
	description = desc;
	roomNumber = roomN;
	exits = ext;//puts whole vector in
	objects = obj;
}

Room::~Room()
{
}


string Room::getName()
{
	return name;
}

void Room::setName(std::string nName)
{
	name = nName;
}
string Room::getDescription()
{
	return description;
}
void Room::setDescription(std::string desc)
{
	description = desc;
}
unsigned int Room::getRoomNumber()
{
	return roomNumber;
}

strContainer Room::getExits()
{
	return exits;
}
//if user wants to go to room we have to check if he cas use exit he typed
bool  Room::checkForExit(string& exitName)
{
	bool exitFound = false;
	for (strContainer::iterator it = exits.begin(); it != exits.end(); ++it)
	{
		if (toLowerCase((*it)) == toLowerCase(exitName))
		{
			exitName = (*it); //to add capital letter at the beginning if user didnt type it and we want to use it
			exitFound = true;
			break;
		}
	}
	return exitFound;
}


void Room::goToRoom(Room& r)//load new room acording to passed room
{
	std::cout << "going into room" << std::endl;
}

void Room::setRoomNumber(unsigned int rNum)
{
	roomNumber = rNum;
}

void Room::setExits(strContainer exit)
{
	exits = exit;
}

void Room::printRoom()
{	
	cout << "Area number: "<<roomNumber << endl;
	printlnCenter("--------------------------------------------------");
	printlnCenter("Area name: " + name);
	printlnCenter("--------------------------------------------------");
	cout << "Area desc: " <<  endl;
	printInLines(description, '.');
	cout <<  "You can see objects: " ;
	for (objContainer::iterator it = objects.begin(); it != objects.end();++it)//print objects
	{
		cout << " " << it->getName();
	}
	cout << endl;	
	cout << "From here you can go to: " ;
	for (strContainer::size_type i = 0; i != exits.size(); i++)//print exits
	{
		cout << " "<< exits[i]<<"-->";
	}
	cout << endl;
	cout << "What do you want to do ? "<<endl;
}

void Room::loadRoom(ifstream& inFile)
{
	string garbage= "";
	int exitNumber = 0;//for loop 
	string curExit = "";
	std::vector<Object> objects;
	//read the rooms member variables
	inFile >> garbage >> roomNumber;//read the room number
	inFile >> garbage >> name;
	inFile >> garbage ;
	getline(inFile, description); //gets the description as the whole line with spaces
	inFile >> garbage >> exitNumber;

	for (unsigned int i = 0; i != exitNumber; i++)
	{
		inFile >> garbage >> curExit;
		exits.push_back(curExit);//get all the exit names
	}

}

