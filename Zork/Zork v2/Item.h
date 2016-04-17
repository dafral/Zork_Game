#include "World.h"

class Item : public Entity {
public:
	char* equip;
	String room;
	bool pick = true;
};