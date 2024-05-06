#pragma once

enum class Positions{
	STRIKER,
	WINGER,
	MIDFIELDER,
	FULLBACK,
	CENTERBACK,
	GOALKEEPER
};
struct Team {
	int numPlayers;
	Player player;
	int numTitles;
	void InicializeTeam();
};

struct Player {
	char name[20];
	Positions position;
	int number;
};