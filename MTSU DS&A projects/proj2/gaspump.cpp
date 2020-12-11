// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj2
// Due: 09/11/2020

#include "gaspump.h"

#include <iostream>
#include <string>
using namespace std;



GasPump::GasPump(string a , double b)
{

	type_of_gas = a;
	price_per_gallon = b;

}

double GasPump::dispenseFuel(double money)
{
	
		string g = getType_of_gas();

		double p = getPrice_per_gallon();

		double m = money / p;

	// cnt total fuel dispensed 
		total_amnt_fuel += m;

	// cnt total revenue collected 

		total_amnt_money += money;


	// return num of gallons the car recieved 
	
		return m;
	
}



