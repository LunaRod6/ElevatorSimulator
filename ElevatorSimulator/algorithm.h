#pragma once
#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "elevator.h"
#include "menu.h"

void moveElevator(std::vector<elevator> building, elevator currElev, int desiredFloor);
void operations(std::vector<elevator>& currElev);

#endif // !ALGORITHM_H
