#include <string.h>
#include "Room.h"

class World{

public:
	Room* rooms;
	Exit* exits;
	~World();

public:
	void CreateWorld(const int& num_rooms, const int& num_exits){
		rooms = new Room[num_rooms];
		exits = new Exit[num_exits];
	}

	void CreateRoom(const int& num, const char*& n, const char*& d){
		strcpy(rooms[num].name, n);
		strcpy(rooms[num].desc, d);
	}

	
	~World(){
		delete[] rooms;
	}
	
		
};