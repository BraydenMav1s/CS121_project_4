#include "race.h"
#include <iostream>
#include <limits>

Race::Race() {}  // Default constructor

void Race::startRace() {
    bool raceOn = true;

    while (raceOn) {
        // Move each horse forward
        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
        }

        // Print the race track
        printRace();

        // Check for a winner
        if (hasWinner()) {
            raceOn = false;
        } else {
            std::cout << "Press Enter to continue...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    std::cout << "Race finished!" << std::endl;
}

bool Race::hasWinner() const {
    for (int i = 0; i < NUM_HORSES; i++) {
        if (horses[i].getPosition() >= TRACK_LENGTH) {
            std::cout << "Horse " << i + 1 << " WINS!!!\n";
            return true;
        }
    }
    return false;
}

void Race::printRace() const {
    std::cout << "Current Race Status:\n";
    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i].printLane(TRACK_LENGTH);
    }
    std::cout << std::endl;
}
