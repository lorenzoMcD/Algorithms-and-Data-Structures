#include "ffhelicopter.h"


#include <iostream>
#include <string>
using namespace std;




// get heli name pass to base constructor , also set the stage_airport name
FFHelicopter::FFHelicopter(std::string vname , std::string stg_airport) : FFVehicle(vname)
{

	
	staging_airport = stg_airport;


}




// overrides base class function
void FFHelicopter::gotoFire(std::string location)
{
	fire_location = location;

	std::cout << name << " staging in " << staging_airport << " for "<< fire_location << " fire" << endl;  

}



// overrides base class function
void FFHelicopter::getWater()
{

	std::cout << name << " scooping water from lake." << endl;

}


