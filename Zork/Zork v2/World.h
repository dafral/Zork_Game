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
	void World::LookInventory();
	void World::EquipItem(const String &item);
	void World::UnequipItem(const String &item);
	void World::Transform();
	bool World::CheckOption(Vector<String>&option, unsigned int num_words);
	World::~World();
	
		
};

#endif

