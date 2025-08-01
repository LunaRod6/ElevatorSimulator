#pragma once
#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <iostream>
#include <vector>


class elevator {

public:

	elevator(); //Default Constructor
	
	void setFloor(int num); // Setters
	void setWeight(double num);
	void setButtonUp(bool val);
	void setButtonDown(bool val);
	void setNumFloors(int num);
	void setDoorStatus(std::string status);

	int getFloor() const; //Getters
	int getNumFloors() const;
	double getWeight() const;
	bool getButtonUp() const;
	bool getButtonDown() const;
	std::string getStatus() const;

private:

	int floor , numFloors;
	double weightLimit;
	std::string doorStatus;
	bool buttonUp, buttonDown;
};

#endif // !ELEVATOR_H
