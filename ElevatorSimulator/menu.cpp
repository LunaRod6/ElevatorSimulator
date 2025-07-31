#include "menu.h"



int startingInfo() { //Returns the number of elevators

	int totalElevators;
	std::cout << "How many elevators does your building has?" << std::endl;
	std::cin >> totalElevators;
	system("cls");

	return totalElevators;
	
}

 void assignLimits(std::vector<elevator>& currElev) { //Assigns the floor limits

	int totalFloors;
	double weight;
	

	std::cout << "How many floors does your building has?" << std::endl;
	std::cin >> totalFloors;
	std::cout << "What weight will your elevators support?" << std::endl;
	std::cin >> weight;
	system("cls");

	for (unsigned int i = 0; i < currElev.size(); ++i) {

		currElev.at(i).setNumFloors(totalFloors);
		currElev.at(i).setWeight(weight);

	}


}

 void drawMap(std::vector<elevator>& building , int floors) {

	  

	 for (int i = floors; i > 0; --i) {
	 
		 for (unsigned int j = 0; j < building.size() ; ++j) {

			 //Checks if the elevator is in use and is open
			 if ( (building.at(j).getFloor() == i) && (building.at(j).getStatus() == "open")) {

				 std::cout << " [open] ";

			 } else {

				 std::cout << " [close] ";

			 }

		 }

		 std::cout << std::endl << std::endl;

	 }

 }

 void controller(std::vector<elevator>& building) {

	 std::string action;
	 int choice;

	 do {

		 std::cout << "Do you want to use an elevator? (y/n) " << std::endl;

		 std::cin >> action;

		 if (action == "y") {

			 std::cout << "What action do you want to perform? " << std::endl;

			 
			 //FIXME displayMenu();
			 // floor -> elevator -> status -> move elevator
			 operations(building);
		 }

	 } while (action != "n");

 }



