#include "algorithm.h"

void moveElevator(std::vector<elevator>& building , elevator& currElev , int desiredFloor) {

	system("cls");
	currElev.setDoorStatus("open");
	drawMap(building, currElev.getNumFloors());
	std::cout << "Your elevator is moving, current floor: " << currElev.getFloor() << std::endl;
	currElev.setDoorStatus("close");
	system("pause");
	

	if (currElev.getFloor() < desiredFloor) { //If the user needs the elevator to go up

		currElev.setButtonUp(true);

		for (int i = currElev.getFloor(); i <= desiredFloor; ++i) {

			system("cls");
			currElev.setFloor(i);
			drawMap(building , currElev.getNumFloors());
			std::cout << "Your elevator is moving up, current floor: " << currElev.getFloor() << std::endl;
			system("pause");
			
		}

		currElev.setButtonUp(false);

	}
	else { // if the user needs the elevator to go down.

		currElev.setButtonDown(true);

		for (int i = currElev.getFloor(); i >= desiredFloor; --i) {

			system("cls");
			currElev.setFloor(i);
			drawMap(building, currElev.getNumFloors());
			std::cout << "Your elevator is moving down, current floor: " << currElev.getFloor() << std::endl;
			system("pause");

		}

		currElev.setButtonDown(false);

	}

	system("cls");
	currElev.setDoorStatus("open");
	drawMap(building, currElev.getNumFloors());
	currElev.setDoorStatus("close");
	std::cout << "Your elevator has reached his destination" << std::endl;

}


void operations(std::vector<elevator>& building) {
	int floorNumber , elevatorNum;

	std::cout << std::endl <<"Choose a floor: " << std::endl;
	std::cin >> floorNumber;
	floorNumber;

	//Checks if the floor exist
	while (!((floorNumber > 0) && (floorNumber <= building.at(0).getNumFloors()))) {

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

	std::cout << "Current elevator weight limit:  " << building.at(elevatorNum).getWeight() << std::endl;

	if (building.at(elevatorNum).getFloor() == floorNumber) {

		std::cout << "The elevator is already here, where do you want to go next?" << std::endl;
		building.at(elevatorNum).setDoorStatus("open");
		drawMap(building, building.at(elevatorNum).getNumFloors());
		system("pause");

	}
	else {

		std::cout << "The elevator is not here yet! calling it..." << std::endl;
		system("pause");
		moveElevator(building, building.at(elevatorNum), floorNumber);

		
	}

}