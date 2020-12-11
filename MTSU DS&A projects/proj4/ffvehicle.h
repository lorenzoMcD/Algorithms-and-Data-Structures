#ifndef FFVEHICLE_H
#define FFVEHICLE_H

#include <iostream>
#include <string>
using namespace std;


// abstract class 

class FFVehicle {


protected:
	std::string name; // string containing vehicle name 
	std::string fire_location; // string containing fire location

public:
	FFVehicle(std::string); // one param constructor that takes vehicles name 

	virtual void gotoFire(std::string); // sets fire location data member and outputs 

	virtual void douseFire(); // void function that outputs <fire location> fire extinguished 

	virtual void getWater() = 0;  // pure virtual function that captures how each type of vehicle gets water to fight fire 


};

#endif