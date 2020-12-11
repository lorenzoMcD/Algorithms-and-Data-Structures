// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj5
// Due: 10/20/2020


#include "treasuremap.h"


#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;




int main()
{


	ifstream inputFile("treasuremap.txt");

	// set starting place coordinates
	int row = 1;
	int col = 1;

	// create treasure map object and pass the inputfile to it 
	TreasureMap t(inputFile); 

	// print the map and starting position 
	t.PrintMap();
	std::cout << "Start position: " << row <<  ","  << col << endl;

	

	// set bool variable to false
	// pass row ,col and bool var to recursive functio
	bool found = false;
	t.FindTreasure(row,col,found);



	if (found == true)
	{

		std::cout << "Treasure Found" << endl;
	}

	else
	{

		std::cout << "Treasure not found "<< endl;

	}






	return 0;

}