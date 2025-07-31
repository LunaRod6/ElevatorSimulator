#include "elevator.h"



elevator::elevator(int numFloors, double weightLimit) {

	this->floor = 1;
	this->buttonDown = false;
	this->buttonUp = false;
	this->doorStatus = "close";
	this->callElevator = false;
	this->numFloors = numFloors;
	this->weightLimit = weightLimit;

}

void elevator::setFloor(int num) {

	this->floor = num;

}

int elevator::getFloor() const {

	return this->floor;

}

void elevator::setWeight(double num) {

	this->weightLimit = num;

}

double elevator::getWeight() const {

	return this->weightLimit;

}

void elevator::setButtonUp(bool val) {

	this->buttonUp = val;

}
bool elevator::getButtonUp() const {

	return this->buttonUp;

}

void elevator::setButtonDown(bool val) {

	this->buttonDown = val;

}

bool elevator::getButtonDown() const {

	return this->buttonDown;

}

void elevator::setCall(bool val) {

	this->callElevator = val;

}

bool elevator::getCall() const {

	return this->callElevator;

}