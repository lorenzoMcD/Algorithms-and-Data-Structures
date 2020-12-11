#ifndef FFTRUCK_H
#define FFTRUCK_H

#include "ffvehicle.h"

#include <iostream>
#include <string>
using namespace std;


class FFTruck : public FFVehicle
{



public:
	FFTruck(std::string); 


	void getWater() override; // overrides base class function


	void douseFire() override; // overrides base class function



};

#endif

