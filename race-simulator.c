#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section

struct Race {
  int numberOfLaps;
  int currentLap;
  char *firstPlaceDriverName;
  char *firstPlaceRaceCarColor;
};

struct RaceCar {
  char *driverName;
  char *raceCarColor;
  int totalLapTime;
};

// Print functions section

void printIntro() {
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");
}

void printCountDown() {
  printf("Racers Ready! In...\n");
  for (int i = 5; i > 0; i--)
    printf("%d\n", i);
  printf("Race!\n");
}

void printFirstPlaceAfterLap(struct Race race) {
  printf("After lap number %d\n", race.currentLap);
  printf("First Place Is: %s in the %s race car!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section

int calculateTimeToCompleteLap() {
  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;
  return speed + acceleration + nerves;
}

void updateRaceCar(struct RaceCar *raceCar) {
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2) {
  if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  } else {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  }
}

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2) {
  struct Race race = {5, 1, "", ""};
  for (int i = 0; i < race.numberOfLaps; i++) {
    race.currentLap = i + 1;
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);
  }
  printCongratulation(race);
}

// main program

int main() {
  srand(time(0));
  printIntro();
  printCountDown();
  struct RaceCar raceCar1 = {"John", "yellow", 0};
  struct RaceCar raceCar2 = {"Jack", "orange", 0};
  startRace(&raceCar1, &raceCar2);
};


// Output 1:
/*

Welcome to our main event digital race fans!
I hope everybody has their snacks because we are about to begin!
Racers Ready! In...
5
4
3
2
1
Race!
After lap number 1
First Place Is: Jack in the orange race car!
After lap number 2
First Place Is: Jack in the orange race car!
After lap number 3
First Place Is: Jack in the orange race car!
After lap number 4
First Place Is: Jack in the orange race car!
After lap number 5
First Place Is: Jack in the orange race car!
Let's all congratulate Jack in the orange race car for an amazing performance.
It truly was a great race and everybody have a goodnight!

*/

// Output 2:
/*

Welcome to our main event digital race fans!
I hope everybody has their snacks because we are about to begin!
Racers Ready! In...
5
4
3
2
1
Race!
After lap number 1
First Place Is: Jack in the orange race car!
After lap number 2
First Place Is: John in the yellow race car!
After lap number 3
First Place Is: Jack in the orange race car!
After lap number 4
First Place Is: John in the yellow race car!
After lap number 5
First Place Is: John in the yellow race car!
Let's all congratulate John in the yellow race car for an amazing performance.
It truly was a great race and everybody have a goodnight!

*/
 
