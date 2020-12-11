// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj2
// Due: 09/11/2020
#include "gaspump.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include<cstdlib>
using namespace std;


int main()
{

	// random num from input file needed for the srand function
	int rand_num;

	// var for total num of cars 
	int num_cars;

	// vars for price of gas 
	double price_a;
	double price_b;
	double price_c;

	// var for money to spend on gas
	double money;

	// vars for the gas type 
	std::string gas_type_a ;
	std::string gas_type_b ;
	std::string gas_type_c ;


	ifstream inputFile("gas.txt"); // open text file to read input
	
	// will read until end of file while adding content to vars above 
	while(inputFile >> rand_num >> num_cars >> gas_type_a >> price_a >> gas_type_b >> price_b >> gas_type_c >> price_c)
		{
			
		}

	GasPump *obj[3]; // creates array of objects for 3 items 

	obj[0] = new GasPump(gas_type_a, price_a);
	obj[1] = new GasPump(gas_type_b, price_b);
	obj[2] = new GasPump(gas_type_c, price_c);


	srand(rand_num); // sets the random number generator seed

	

	for (int i = 1; i < num_cars + 1; i++)
	{
		// random index object 
		int j = rand() % 3;

		// random money to spend 
		money = rand() % 6 * 5 + 25;

		// send the money user wants to spend to the dispense function
		
		// will call dispense below in the cout command 
		std::cout << std::fixed << std::setprecision(2) << i << " " << obj[j]->getType_of_gas() << " " << obj[j]->getPrice_per_gallon() << " " << money << " " << obj[j]->dispenseFuel(money) << endl;

	}

	// print totals
	std::cout << std::fixed << std::setprecision(2) << obj[0]->getType_of_gas() << " " << obj[0]->getTotal_amnt_fuel() << " " << obj[0]->getTotal_amnt_money() << endl;
	std::cout << std::fixed << std::setprecision(2) << obj[1]->getType_of_gas() << " " << obj[1]->getTotal_amnt_fuel() << " " << obj[1]->getTotal_amnt_money() << endl;
	std::cout << std::fixed << std::setprecision(2) << obj[2]->getType_of_gas() << " " << obj[2]->getTotal_amnt_fuel() << " " << obj[2]->getTotal_amnt_money() << endl;
	
	
	// need to delete pointers 
	for(int i = 0; i < 3; i++)  
{  
        delete obj[i];  
}


	return 0;
}