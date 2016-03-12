#include <stdio.h>
#include <string.h>
#include "Player.h"
#include "World.h"

bool Play(){
	char option[20];
	

	scanf("%s", option);

	if (strcmp(option, "q") == 0)
		return false;

	else if (strcmp(option, "look"))
		player->LookRoom();


}