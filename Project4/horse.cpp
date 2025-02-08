#include "horse.h"

// Static random device for all horses
std::random_device Horse::rd;
std::uniform_int_distribution<int> Horse::dist(0, 1);

Horse::Horse() : position(0) {}  // Start at position 0

void Horse::advance() {
    if (dist(rd)) {  // 50% chance to move
        position++;
    }
}

int Horse::getPosition() const {
    return position;
}

void Horse::printLane(int trackLength) const {
    for (int i = 0; i < trackLength; i++) {
        if (i == position) {
            std::cout << "H";  // Show horse at its position
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}
