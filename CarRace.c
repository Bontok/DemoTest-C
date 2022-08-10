#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
    int numberOfLaps;
    int currentLap;
    char* firstPlaceDriverName;
    char* firstPlaceRaceCarColor;
};

struct RaceCar {
    char* driverName;
    char* raceCarColor;
    int totalLapTime;
};

// Print functions section
 void printIntro(void){
   printf("Welcome to our main event digital race fans!I hope everybody has their snacks because we are about to begin!\n");
 }
 void printCountDown(void){
  printf("Race Rady! In..\n 5\n 4\n 3\n 2\n 1\n RACE!\n");
 }
 void printFirstPlaceAfterLap(struct Race race){
   printf("After Lap number %d\n Fist Place is : %s\n", race.currentLap, race.  firstPlaceDriverName);
 }
void printCongratulation(struct Race race){
  printf("Let's all congratulate %s in the %s race car for an amazing performance.It truly was a great race and everybody have a goodnight!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor );
}
// Logic functions section
int calculateTimeToCompleteLap(void){
  int speed;
  int acceleration;
  int nerves;
  speed = (rand() % 3) +1;
  acceleration = (rand() % 3) +1;
  nerves = (rand() % 2) +1;
  return speed + acceleration + nerves;
}
void updateRaceCar(struct RaceCar* racecarpoint){
   racecarpoint->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* racecar1, struct RaceCar* racecar2){
  if (racecar1->totalLapTime <= racecar2->totalLapTime ){
    race->firstPlaceDriverName =  racecar1->driverName;
    race->firstPlaceRaceCarColor =  racecar1->raceCarColor;
  }else{
  race->firstPlaceDriverName =  racecar2->driverName;
  race->firstPlaceRaceCarColor =  racecar2->raceCarColor;
  }
}
void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    struct Race race = {25, 0, "", ""};
    for (int i = 0; i < race.numberOfLaps; i++)
    {
        race.currentLap++;
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
    }
    printCongratulation(race);
}


int main() {
	srand(time(0));
  struct RaceCar raceCar1 = {"Martin", "Rojo", 0};
  struct RaceCar raceCar2 = {"Fede", "Verde", 0};
printIntro();
printCountDown();
startRace(&raceCar1, &raceCar2);
};