#include <string.h>
#include "Room.h"

class World{

public:
	Room* rooms;


public:
	void World::InitWorld(const int& num_rooms, const int& num_exits){
		rooms = new Room[num_rooms];
		rooms->exits = new Exit[num_exits];
	}

	

	
	World::~World(){
		delete[] rooms;
	}
	
		
};

void CreateMap();