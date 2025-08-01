#pragma once
#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "elevator.h"
#include "menu.h"

//Algorithm to move the elevators between floors.
void moveElevator(std::vector<elevator>& building, elevator& currElev, int desiredFloor);
//Gets the commands for the algorithm
void operations(std::vector<elevator>& currElev);

#endif // !ALGORITHM_H