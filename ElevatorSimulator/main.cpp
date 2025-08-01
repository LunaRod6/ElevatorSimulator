#include <iostream>
#include <vector>
#include "menu.h"
#include "elevator.h"


int main() {

	std::vector<elevator> elevators (startingInfo()); //Ask the user how many elevators and creates a list
	
	assignLimits(elevators); //Allows to set the floor and weight limits.

	controller(elevators); //Manipulates the behavior of the program

	return 0;
}