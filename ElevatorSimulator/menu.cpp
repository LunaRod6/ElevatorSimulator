#include "menu.h"


int startingInfo() { //Returns the number of elevators

	int totalElevators;
	std::cout << "How many elevators does your building has?" << std::endl;
	std::cin >> totalElevators;

	return totalElevators;
	
}

elevator createBuilding() { //Creates an object with the floor limits

	int totalFloors;
	double weight;
	std::cout << "How many floors does your building has?" << std::endl;
	std::cin >> totalFloors;

	std::cout << "What weight will your elevators support?" << std::endl;
	std::cin >> weight;

	elevator elevator1(totalFloors, weight);

	return elevator1;

}



