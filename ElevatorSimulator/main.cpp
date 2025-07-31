#include <iostream>
#include <vector>
#include "menu.h"
#include "elevator.h"



int main() {

	std::vector<elevator> elevators (startingInfo()); //Ask the user how many elevators and creates a list
	
	assignLimits(elevators);

	for (unsigned int i = 0; i < elevators.size(); ++i) {

		std::cout << "Elevator " << i + 1 << ":" << std::endl;
		std::cout << elevators.at(i).getWeight() << std::endl;

	}
	return 0;
}