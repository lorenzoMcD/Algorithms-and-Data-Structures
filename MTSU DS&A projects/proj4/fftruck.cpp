#include "fftruck.h"

#include <iostream>
#include <string>
using namespace std;



// get truck name pass to base constructor 
FFTruck::FFTruck(std::string vname) : FFVehicle(vname)
{

	//FFVehicle(vname); // pass vname to base constructor 

}


void FFTruck::getWater() // overrides base class function
{

	std::cout << name << " hydrants connected." << endl;
}



void FFTruck::douseFire()  // overrides base class function
{

	std::cout << name << " pump pressure OK." << endl;

	FFVehicle::douseFire();



}