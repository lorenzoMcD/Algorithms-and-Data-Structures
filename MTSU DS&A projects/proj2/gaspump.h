// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj2
// Due: 09/11/2020

#ifndef GASPUMP_H
#define GASPUMP_H

#include <iostream>
#include <string>
using namespace std;


class GasPump
{
	
	private:
		std::string type_of_gas;
		double price_per_gallon;
		double total_amnt_fuel;
		double total_amnt_money;


	public:

		// constructor 
		GasPump(std::string , double);


		// inline accessor functions 
		
		//returns gas type
		std::string getType_of_gas()
		{return type_of_gas;}

		// returns price per gallon
		double getPrice_per_gallon()
		{return price_per_gallon;}

		// returns total amnt of fuel dispensed(all purchases)
		double getTotal_amnt_fuel()
		{return total_amnt_fuel;}

		// returns total amnt of revenue collected(all purchases)
		double getTotal_amnt_money()
		{return total_amnt_money;}


		double dispenseFuel(double);

};
#endif
















