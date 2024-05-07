#include "Player.h"

Player::Player() {
	name = rand() % ('Z' - 'A' + 1) + 'A';
	age = rand() % (43 - 16 + 1) + 16;
	OVR = rand() % (80 - 60 + 1) + 60;
	number = rand() % (30 - 2 + 1) + 1;
}
