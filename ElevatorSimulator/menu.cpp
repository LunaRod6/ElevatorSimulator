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

 void drawMap(std::vector<elevator>& currElev , int floors) {

	 for (unsigned int i = floors ; i > 0 ; --i) {
	 
		 for (unsigned int j = 0; j < currElev.size() ; ++j) {

			 //Checks if the elevator is in use and is open
			 if ((currElev.at(j).getFloor() == i) && (currElev.at(j).getStatus() == "open") {

				 std::cout << " [0] ";

			 } else {

				 std::cout << " [!] ";

			 }

		 }

		 std::cout << std::endl << std::endl;

	 }

 }

 void controller(std::vector<elevator>& currElev) {

	 std::string action;
	 int choice;

	 do {

		 std::cout << "Do you want to use an elevator? (y/n) " << std::endl;

		 std::cin >> action;

		 if (action == "y") {

			 std::cout << "What action do you want to perform? " << std::endl;

			 //FIXME displayMenu();
			 // floor -> elevator -> status -> move elevator

		 }

	 } while (action != "n")

 }



