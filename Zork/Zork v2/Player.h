#ifndef __PLAYER_H__
#define __PLAYER_H__

#define MAX_ITEMS 3

#include "World.h"


class Player : public Entity{

public:
	Vector<String> inventory;
	String equipment = "Empty";
	String current_room;
	char* inventory_desc;
	bool beast = false;
};



#endif