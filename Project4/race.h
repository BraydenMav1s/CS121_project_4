#ifndef RACE_H
#define RACE_H

#include "horse.h"

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

class Race {
private:
    Horse horses[NUM_HORSES];  // Array of horse objects

public:
    Race();  // Constructor
    void startRace();  // Starts the race
    bool hasWinner() const;  // Checks if any horse won
    void printRace() const;  // Displays race track
};

#endif // RACE_H
