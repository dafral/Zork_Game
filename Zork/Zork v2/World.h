#ifndef __WORLD_H__
#define __WORLD_H__

#include "String.h"
#include "Room.h"
#include "Exit.h"
#include "Player.h"
#include "Item.h"

class World{

public:
	Room* rooms;
	Exit* exits;
	Player* player;
	Item* items;

public:

	World::World();
	void World::CreateMap();
	bool World::Play();
	void World::LookRoom(const char* room);
	void World::PickItem(char* item);
	void World::DropItem(char* item);
	World::~World();
	
		
};

#endif

