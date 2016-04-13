#include "Entity.h"
#include "String.h"

class Item : public Entity {
public:
	char* room;
	char equip;
	bool pick = true;


};