#include <stdio.h>

class Exit{

public:
	bool open;
	char name[80], desc[200];
	enum direction{n, s, e, w};
	Room* source;
	Room* destination;

public:
	void LookExit(const char& player_dir){
		printf("");
	}
	
	void SearchExits();

};