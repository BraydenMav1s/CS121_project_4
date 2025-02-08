#ifndef HORSE_H
#define HORSE_H

#include <iostream>
#include <random>

class Horse {
private:
    int position;  // Position of this horse
    static std::random_device rd;
    static std::uniform_int_distribution<int> dist;

public:
    Horse();  // Constructor
    void advance();  // Moves forward randomly (50% chance)
    int getPosition() const;  // Gets horse position
    void printLane(int trackLength) const;  // Prints horse's track
};

#endif // HORSE_H
