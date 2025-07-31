#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include<iomanip>
#include "elevator.h" //Uses the elevator header

int startingInfo(); //Ask the user the number of elevators to create
void assignLimits(std::vector<elevator>& currElev); //Creates the limits for the elevators
void drawMap(std::vector<elevator>& currElev , int floors); //Draws the building 
void controller(std::vector<elevator>& currElev);
#endif // !MENU_H
