
class Exit{

public:
	bool open;
	char name[80], desc[200];
	enum direction{n, s, e, w};
	Room* source, destination;

public:
	void LookExit();
};