#ifndef __ENTITY__
#define __ENTITY__

#include "MyString.h"

class Entity{
public:
	char* name;
	char* desc;

	void Entity::Look(const char* entity);
};


#endif