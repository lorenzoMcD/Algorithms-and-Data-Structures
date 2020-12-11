// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj4
// Due: 10/08/2020


#include "ffvehicle.h"
#include "fftruck.h"
#include "ffhelicopter.h"

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;




void fightFire(FFVehicle& v, string location);


int main()
{

	// create vars needed for program

	std::string truck_name;

	std::string t_location ;

	std::string heli_name ;

	std::string h_location ;

	std::string stg_airport ;








ifstream inputFile("fires.txt"); // open text file to read input


	// read in contents of text file to respective vars
	while(inputFile >> truck_name >> t_location >> heli_name >> h_location >> stg_airport)
	{

	}


	FFTruck t(truck_name); // create truck object 
	fightFire(t,t_location); // call fight fire method 


	std::cout << " " << endl;

	FFHelicopter h(heli_name,stg_airport); // create  helicopter object 
	
	fightFire(h,h_location); // call fight fire method 


	return 0;
}



// method takes in address of vehicle object then calls vehicle methods 
// according to the type. 
void fightFire(FFVehicle& v, string location)
{
	v.gotoFire(location);
	v.getWater();
	v.douseFire();

}



