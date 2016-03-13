#pragma once

#include <string.h>
#include "Room.h"
#include "Exit.h"
#include "Player.h"

class World{

public:
	Room* rooms;
	Exit* exits;
	Player* player;


public:
	void World::CreateMap();
	bool World::Play();
		
	~World(){
		delete[] rooms;
	}
	
		
};

