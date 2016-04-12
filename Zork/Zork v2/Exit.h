#ifndef __EXIT__
#define __EXIT__

#include "Entity.h"

class Exit : public Entity{

public:
	bool open;
	char direction;
	char* destination;
	char* source;

};

#endif