#pragma once
#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <iostream>
#include <vector>


class elevator {

public:

	elevator(int numFloors , double weightLimit); //Constructor
	
	void setFloor(int num); // Setters
	void setWeight(double num);
	void setButtonUp(bool val);
	void setButtonDown(bool val);
	void setCall(bool val);

	int getFloor() const; //Getters
	double getWeight() const;
	bool getButtonUp() const;
	bool getButtonDown() const;
	bool getCall() const;

private:

	int floor , numFloors;
	double weightLimit;
	std::string doorStatus;
	bool buttonUp, buttonDown , callElevator;
};

#endif // !ELEVATOR_H
