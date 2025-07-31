#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "elevator.h" //Uses the elevator header

int startingInfo(); //Ask the user the number of elevators to create
elevator createBuilding(); //Ask the user the number of floors and weight limit

#endif // !MENU_H
