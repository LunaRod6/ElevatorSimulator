#include "algorithm.h"

void moveElevator(std::vector<elevator> building , elevator currElev , int desiredFloor) {

	if (currElev.getFloor() < desiredFloor) {

		std::cout << "Floor: " << currElev.getFloor() << std::endl;
		currElev.setButtonUp(true);
		currElev.setDoorStatus("open");
		drawMap(building, currElev.getNumFloors());
		currElev.setDoorStatus("close");

		/*for (unsigned int i = currElev.getFloor(); i < desiredFloor; ++i) {

			currElev.setFloor(i);
			drawMap(building , currElev.getNumFloors());
			
		}*/

		/*currElev.setDoorStatus("open");
		drawMap(building, currElev.getNumFloors());
		currElev.setDoorStatus("close");*/

	}
}


void operations(std::vector<elevator>& building) {
	int floorNumber , elevatorNum;

	std::cout << "Choose a floor: " << std::endl;
	std::cin >> floorNumber;
	floorNumber;

	//Checks if the floor exist
	while (!((floorNumber > 0) && (floorNumber < building.at(0).getNumFloors()))) {

		std::cout << "That floor doesn't exist try again." << std::endl;
		std::cout << "Choose a floor: " << std::endl;
		std::cin >> floorNumber;
		floorNumber;

	}

	std::cout << "Choose an Elevator: " << std::endl;
	std::cin >> elevatorNum;
	elevatorNum--;

	//Checks if the elevator exist
	while ( !((elevatorNum > -1) && (elevatorNum < building.size())) ) {

		std::cout << "That Elevator doesn't exist try again." << std::endl;
		std::cout << "Choose an Elevator: " << std::endl;
		std::cin >> elevatorNum;
		elevatorNum--;

	}

	if (building.at(elevatorNum).getFloor() == floorNumber) {

		std::cout << "The elevator is already here, where do you want to go next?" << std::endl;
		building.at(elevatorNum).setDoorStatus("open");
		drawMap(building, building.at(elevatorNum).getNumFloors());

	}
	else {

		std::cout << "The elevator is not here yet! calling it..." << std::endl;
		moveElevator(building, building.at(elevatorNum), floorNumber);

		
		
		
	}

}