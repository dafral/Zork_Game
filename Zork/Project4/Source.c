#include <stdio.h>
#include <string.h>

typedef struct {
	int x;
	int y;
} pos;

typedef struct {
	int grid;
	char* name;
}world;

pos player;
world map[3][3];

void main(void) {
	char op;
	player.x = 1;
	player.y = 1;
	printf("You are in the dinning room. Which direction you want to go (n/s/e/w/q)? ");
	scanf_s("%c%*c", &op, 1);
	while (op != 'q') {

		init_map();
		movement(op);

		printf("\nYou are in the %s. ", map[player.x][player.y].name);

		printf("Which direction you want to go (n/s/e/w/q)? ");
		scanf_s("%c%*c", &op, 1);
	}
}

int init_map(){
	map[0][0].grid = 0; 
	map[0][1].grid = 1;
	map[0][2].grid = 1;
	map[1][0].grid = 0;
	map[1][1].grid = 1;
	map[1][2].grid = 1;
	map[2][0].grid = 0;
	map[2][1].grid = 1;
	map[2][2].grid = 0;

	map[0][1].name = "kitchen";
	map[0][2].name = "pantry";
	map[1][1].name = "dinning room";
	map[1][2].name = "bathroom";
	map[2][1].name = "bedroom";
}

int movement(char op){
	if (op == 'n' && player.x >= 0 && map[player.x - 1][player.y].grid != 0)
		player.x--;
	else if (op == 's' && player.x < 3 && map[player.x + 1][player.y].grid != 0)
		player.x++;
	else if (op == 'w' && player.y >= 0 && map[player.x][player.y - 1].grid != 0)
		player.y--;
	else if (op == 'e' && player.y < 3 && map[player.x][player.y + 1].grid != 0)
		player.y++;
	else
		printf("\nYou can't go there.\n");
}