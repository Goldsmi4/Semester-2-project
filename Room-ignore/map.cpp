
#include<iostream>
// implementation of inventory class
using std::string;		using std::vector;
using std::ifstream;	using std::ofstream;
using std::cin;			using std::cout;
using std::endl;
typedef vector<Room> roomVec;

Map::Map()
{
	mCurRoom = new Room; //initialize my pointer with value of empty room
}

Map::Map(roomVec rooms)
{
	mRooms = rooms;	
}

Map::~Map()
{
	delete mCurRoom; //deleting the instance of new room
}

void Map::loadRooms(ifstream& inFile)
{
	//check the file how many times the loop will execute
	string garbage;
	unsigned int roomsTotal;

	inFile >> garbage >> roomsTotal;
	mRooms.reserve(roomsTotal); //reserves the space for vector so it wont need to grow more saves the memory space

	while (!inFile.eof())//loop throught all the files rooms
	{

		Room loadedRoom;
		loadedRoom.loadRoom(inFile);
		mRooms.push_back(loadedRoom);//push one room into map

	}
	
}


void Map::printMap()
{
	for (roomVec::iterator it = mRooms.begin(); it != mRooms.end(); ++it)
	{
		it->printRoom();
	}
}

void Map::setCurrentRoom(Room& r1)
{
	mCurRoom = &r1;

}

void Map::setCurrentRoom(string& rName)
{
	mCurRoom = this->getAnyRoom(rName);
}

Room& Map::getCurrentRoom()
{
	return (*mCurRoom);//gets the pointer to the room we are currently in
}

bool Map::curRoomCheckExit(string& exit)
{
	return (*mCurRoom).checkForExit(exit);
}

bool Map::curRoomCheckObj(string& obj)
{
	return (*mCurRoom).isObjectInRoom(obj);

}


//returns the pointer to the room we specify by name
Room* Map::getAnyRoom(string& rName)
{
	bool found = false;

	for (roomVec::iterator iter = mRooms.begin(); iter != mRooms.end(); ++iter)
	{
		if (toLowerCase(iter->getName()) == toLowerCase(rName))
		{
			found = true;
			return &(*iter);
		}
	}	
	if (found == false)
	{	
		cout << "room Not found" << endl;
		return NULL;
	}
	

}



void Map::printCurrentRoom()
{
	mCurRoom->printRoom();
}

void Map::loadPosition(ifstream& inFile)
{
	string position;
	inFile >> position;
	cout << position << endl;
	mCurRoom = this->getAnyRoom(position);
}

void Map::savePosition(ofstream& oFile)
{
	
	oFile << mCurRoom->getName();
}