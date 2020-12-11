#include "ffvehicle.h"

#include <iostream>
#include <string>
using namespace std;



// one param constructor that takes vehicles name 
FFVehicle::FFVehicle(std::string vname)
{

	name = vname; // name = vehicle name

}


// sets fire location data member and outputs 
void FFVehicle::gotoFire(std::string location) {

	fire_location = location;

	std::cout << name << " " << "responding to " << fire_location << " fire." << endl;


}




//void function that outputs <fire location> fire extinguished 
void FFVehicle::douseFire()
{

	std::cout << fire_location << " fire extinguished." << endl;

}





