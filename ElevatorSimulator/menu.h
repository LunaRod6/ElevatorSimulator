#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include<iomanip>
#include "elevator.h" //Uses the elevator header
#include "algorithm.h"

int startingInfo(); //Ask the user the number of elevators to create
void drawMap(std::vector<elevator>& building, int floors); //Draws the building 
void assignLimits(std::vector<elevator>& building); //Creates the limits for the elevators
void controller(std::vector<elevator>& building); //Lets the user choose what to do next
#endif // !MENU_H