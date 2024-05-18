#pragma once
#include <cstring>
#include "Player.h"
struct Team {
	int numPlayers = 20;
	Player* players;
	int numTitles = 0;
	void InicializeTeam();
	void PrintTeam();
	//Team();
};

