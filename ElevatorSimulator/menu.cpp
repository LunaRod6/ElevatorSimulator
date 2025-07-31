#include "menu.h"


int startingInfo() { //Returns the number of elevators

	int totalElevators;
	std::cout << "How many elevators does your building has?" << std::endl;
	std::cin >> totalElevators;

	return totalElevators;
	
}

 void assignLimits(std::vector<elevator>& currElev) { //Assigns the floor limits

	int totalFloors;
	double weight;
	

	std::cout << "How many floors does your building has?" << std::endl;
	std::cin >> totalFloors;
	std::cout << "What weight will your elevators support?" << std::endl;
	std::cin >> weight;

	for (unsigned int i = 0; i < currElev.size(); ++i) {

		currElev.at(i).setNumFloors(totalFloors);
		currElev.at(i).setWeight(weight);

	}


}



