#include <iostream>
#include "Team.h"
#include <ctime>
int main()
{
    srand(time(NULL));
    Player player;
    Team team;
    team.InicializeTeam();
    team.PrintTeam();
}
