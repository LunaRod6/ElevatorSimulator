#include "algorithm.h"


void operations(std::vector<elevator>& currElev) {
	int floorNumber , elevatorNum;

	std::cout << "Choose a floor: " << std::endl;
	std::cin >> floorNumber;

	//Checks if the floor exist
	while (!((floorNumber > 0) && (floorNumber < currElev.at(0).getNumFloors()))) {

		std::cout << "That floor doesn't exist try again." << std::endl;
		std::cout << "Choose a floor: " << std::endl;
		std::cin >> floorNumber;

	}

	std::cout << "Choose an Elevator: " << std::endl;
	std::cin >> elevatorNum;

	//Checks if the elevator exist
	while (!((floorNumber > 0) && (floorNumber < currElev.size()))) {

		std::cout << "That Elevator doesn't exist try again." << std::endl;
		std::cout << "Choose an Elevator: " << std::endl;
		std::cin >> elevatorNum;

	}

	if (currElev.at(elevatorNum - 1).getFloor() == floorNumber) {

		std::cout << "The elevator is already here, where do you want to go next?" << std::endl;

	}
	else {

		std::cout << "The elevator is not here yet! calling it..." << std::endl;
		currElev.at(elevatorNum - 1).setFloor(floorNumber);
	}

}