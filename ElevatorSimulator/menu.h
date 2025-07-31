#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "elevator.h" //Uses the elevator header

int startingInfo(); //Ask the user the number of elevators to create
void assignLimits(std::vector<elevator>& currElev); //Creates the limits for the elevators

#endif // !MENU_H
