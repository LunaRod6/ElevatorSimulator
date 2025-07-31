#include <iostream>
#include <vector>
#include "menu.h"
#include "elevator.h"


int main() {

	std::vector<elevator> elevators (startingInfo()); //Ask the user how many elevators and creates a list
	
	assignLimits(elevators);

	drawMap(elevators , elevators.at(0).getNumFloors());

	return 0;
}