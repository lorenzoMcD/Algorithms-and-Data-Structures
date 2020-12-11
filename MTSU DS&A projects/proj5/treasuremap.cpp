#include "treasuremap.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;



// Constructor: takes file object and reads treasure map from file
TreasureMap::TreasureMap(std::ifstream& inputFile)
{

	// need to read in the treaure map 
	string line; // needed to fill in the land, water and treasure for 2d map 
	string row;
	string cols;
	getline(inputFile,xplor); // grabs entrire first line and puts in xplor 
	getline(inputFile,row, ' '); // gets max rows in string form
	getline(inputFile,cols); // gets max cols  in string form 


    
    maxRows = std::stoi(row); // convert strings to ints 
    maxCols = std::stoi(cols);
	// input the characters for the map 

	// fill in the X chars for the out of bounds area.
	
	for (int i = 0; i <= maxRows+1; i++)
	{
		tmap[i][0] = 'X';
		tmap[i][maxCols+1] ='X';
	}

	for (int j = 0; j <= maxCols+1; j++)
	{
		tmap[0][j] = 'X';
		tmap[maxRows+1][j] = 'X';
		
	}

    
	// insert the chars from the inputFile into the 2d array

	for (int i = 1; i <= maxRows; i++)
	{
		getline(inputFile,line);
		
		
		for (int j = 1; j <= maxCols; j++)
		{

			tmap[i][j] = line[j-1];
		}

	}


}


// Displays the treasure map and its state
void TreasureMap::PrintMap()
{

	// will print map to screen
	std::cout << "Current Map" << endl;
	for (int i = 1; i <= maxRows; i++)
	{
				
		for(int j = 1; j <= maxCols; j++)
		{
			std::cout << tmap[i][j] << " ";
		}
		
		std::cout << "\n";
	}


}



// returns a pair (row, then column offset from current cell)
std::pair<int,int> TreasureMap::getMove(char b)
{

	int row_offset;
	int col_offset;

	if (b == '1')
	{
		
		row_offset = -1;
		col_offset = -1;

	}

	else if (b == '2')
	{
		
		row_offset = -1;
		col_offset = 1;
		

	}

	else if (b == '3')
	{
		
		row_offset = 1;
		col_offset = 1;


	}

	else // (b == '4')
	{
		
		row_offset = 1;
		col_offset = -1;

	}



	return std::make_pair(row_offset, col_offset); // return coordinate pair
	

}



// Recursive function that finds the treasure (ints: row, then column)
void TreasureMap::FindTreasure(int row, int col, bool& found)
{

	
	
	
	if(!found && tmap[row][col]!='X' && tmap[row][col]!='*' && tmap[row][col]!='~')
	{
	    
	    std::cout << "Searching " << row  << "," << col << endl;
		
		// base case for recursive function 
    	if (tmap[row][col] == 'T')
	    {

		    found = true; 
    	}

	    else
	    {

		    // call the recursive find treaseure and move function and keep searching 
		    tmap[row][col] = '*'; // set the * then call the move function
		    PrintMap();

	    	for (int i = 0; i<4; i++) // loop through chars in the xplor string 
		    {

		    	std::pair<int,int> move = getMove(xplor[i]);

			    FindTreasure(row + move.first, col + move.second, found); // recursive call 
			

		    }
		

	    }
	}


}

	



	



















