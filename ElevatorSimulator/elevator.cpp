#include "elevator.h"



elevator::elevator() {

	this->floor = 1;
	this->numFloors = 2;
	this->buttonDown = false;
	this->buttonUp = false;
	this->doorStatus = "close";
	this->callElevator = false;
	this->weightLimit = 0.0;

}

void elevator::setFloor(int num) {

	this->floor = num;

}

int elevator::getFloor() const {

	return this->floor;

}

int elevator::getNumFloors() const {

	return this->numFloors;

}

void elevator::setWeight(double num) {

	this->weightLimit = num;

}

void elevator::setDoorStatus(std::string status) {

	this->doorStatus = status;

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

void elevator::setNumFloors(int num) {

	this->numFloors = num;

}

std::string elevator::getStatus() const {

	return this->doorStatus;

}