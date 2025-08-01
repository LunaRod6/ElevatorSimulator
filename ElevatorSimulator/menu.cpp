#include "menu.h"



int startingInfo() { //Returns the number of elevators

	int totalElevators;
	std::cout << "How many elevators does your building has?" << std::endl;
	std::cin >> totalElevators;
	system("cls");

	return totalElevators;
	
}

void drawMap(std::vector<elevator>& building, int floors) { //Displays the contents of the building

	char symbol;
	std::cout << std::endl;

	for (int i = floors; i > 0; --i) {

		std::cout << std::left << std::setw(7) << "Floor: " << i << "  ";

		for (unsigned int j = 0; j < building.size(); ++j) {

			//Checks if the elevator is in use and is open
			if ((building.at(j).getFloor() == i) && (building.at(j).getStatus() == "open")) {

				std::cout << " [ ] ";

			}
			else if ((building.at(j).getFloor() == i) && (building.at(j).getButtonUp() == true)) {

				std::cout << " [^] ";
			}
			else if ((building.at(j).getFloor() == i) && (building.at(j).getButtonDown() == true)) {

				std::cout << " [v] ";
			}
			else {

				std::cout << " [" << j + 1 << "] ";

			}

		}

		std::cout << std::endl << std::endl;



	}

}

 void assignLimits(std::vector<elevator>& building) { //Assigns the floor limits

	int totalFloors;
	double weight;
	

	std::cout << "How many floors does your building has?" << std::endl;
	std::cin >> totalFloors;
	std::cout << "What weight will your elevators support in kg?" << std::endl;
	std::cin >> weight;
	system("cls");

	for (unsigned int i = 0; i < building.size(); ++i) {

		building.at(i).setNumFloors(totalFloors);
		building.at(i).setWeight(weight);

	}

	drawMap(building, building.at(0).getNumFloors());


}

 void controller(std::vector<elevator>& building) { //Allows the user to interact with the elevators.

	 std::string action;

	 do {

		 std::cout << "Do you want to use an elevator? (y/n) " << std::endl;

		 std::cin >> action;

		 if (action == "y") {

			 operations(building);
		 }

	 } while (action != "n");

 }