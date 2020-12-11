#ifndef FFHELICOPTER_H
#define FFHELICOPTER_H

#include "ffvehicle.h"

#include <iostream>
#include <string>
using namespace std;






class FFHelicopter : public FFVehicle
{



private:
	std::string staging_airport; 


public:
	FFHelicopter(std::string, std::string); 


	void gotoFire(std::string) override; // overrides base class function


	void getWater() override; // overrides base class function





};

#endif