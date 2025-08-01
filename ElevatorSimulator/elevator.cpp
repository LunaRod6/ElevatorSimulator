#include "elevator.h"



elevator::elevator() {

	this->floor = 1;
	this->numFloors = 2;
	this->buttonDown = false;
	this->buttonUp = false;
	this->doorStatus = "close";
	this->weightLimit = 0.0;

}

void elevator::setFloor(int num) {

	this->floor = num;

}

void elevator::setWeight(double num) {

	this->weightLimit = num;

}

void elevator::setDoorStatus(std::string status) {

	this->doorStatus = status;

}

void elevator::setButtonUp(bool val) {

	this->buttonUp = val;

}

void elevator::setButtonDown(bool val) {

	this->buttonDown = val;

}

void elevator::setNumFloors(int num) {

	this->numFloors = num;

}

int elevator::getFloor() const {

	return this->floor;

}

int elevator::getNumFloors() const {

	return this->numFloors;

}

double elevator::getWeight() const {

	return this->weightLimit;

}

bool elevator::getButtonUp() const {

	return this->buttonUp;

}

bool elevator::getButtonDown() const {

	return this->buttonDown;

}

std::string elevator::getStatus() const {

	return this->doorStatus;

}