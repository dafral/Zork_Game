#ifndef __WORLD_H__
#define __WORLD_H__

#include "Entity.h"
#include "World.h"
#include "Player.h"
#include "Exit.h"
#include "Item.h"
#include "Room.h"

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
	void World::PickItem(const String &item);
	void World::DropItem(const String &item);
	void World::LookInventory(const Vector<String> &inv);
	bool World::CheckOption(Vector<String>&option);
	World::~World();
	
		
};

#endif

