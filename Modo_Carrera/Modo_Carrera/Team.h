#pragma once
#include <cstring>
#include "Player.h"
struct Team {
	int numPlayers;
	Player player;
	int numTitles;
	void InicializeTeam();
	void PrintTeam();
};

