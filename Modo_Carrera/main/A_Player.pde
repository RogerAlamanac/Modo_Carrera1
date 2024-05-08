enum Positions {
  STRIKER,
    WINGER,
    MIDFIELDER,
    FULLBACK,
    CENTERBACK,
    GOALKEEPER
};

class Player {
  char[] name = {'A', 'B', 'C', 'D'};
  int selectName;
  Positions positions;
  String[] position = {"Striker", "Winger", "Midfielder", "Fullback","Centerback", "Goalkeeper"};
  int selectPosition;
  int number;
  int OVR;
  int age;
  Player() {
    selectName = int(random(name.length));
    selectPosition = int(random(position.length));
    age = int(random(16,43));
    OVR = int(random(60,80));
    number = int(random(2,30));
  }
};

void DrawPlayer(){
 fill(255,0,0);
 ellipse(100,400,10,10);
}
