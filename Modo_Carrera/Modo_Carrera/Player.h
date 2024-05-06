#pragma once
#include <string>
enum class Positions {
	STRIKER,
	WINGER,
	MIDFIELDER,
	FULLBACK,
	CENTERBACK,
	GOALKEEPER
};

struct Player {
	char name;
	Positions position;
	int number;
	int OVR;
	int age;
};

