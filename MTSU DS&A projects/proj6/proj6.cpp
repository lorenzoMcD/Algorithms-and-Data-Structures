// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj6
// Due: 11/4/2020


#include "wordtree.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



void split(const std::string& s, char c, std::vector<std::string>& v); 


int main()
{


	WordTree tree; // create word tree object 


	
	fstream inputFile("input.txt",fstream::in); 
	string s;
	getline(inputFile,s,'\0');

	std::transform(s.begin(), s.end(), s.begin(), ::tolower); // lower all the letters in this string 


	char c = ' ';

	std::vector<std::string> vect;

	split(s,c, vect);
	
	
    
   int size = vect.size();

	
	// build the word tree
	for (int i = 0; i < size; i++)
	{

		tree.addWord(vect[i]);
	

	}

    
	std::cout << "Word tree built and loaded" << endl;
	std::cout << " " << endl;
	


  


	// open query file and invoke each query as it is read 
    
    ifstream myfile("queries.txt");
    std::string line;
	int compare;
	std::string find;
	

	while(getline(myfile,line))
	{

		// take in first char
		// add rest of line to the compare variable after cleaning
		if (line[0] == 'C')

		{
			
		
			compare = std::stoi(line.substr(2,line.length()));
			std::cout << "Finding all words with " << compare << " or more occurrences: " << endl;
			tree.getCounts(compare);
			std::cout << " " << endl;
			
			

		}
		
		// take in first char
		// add rest of line to the find variable after cleaning 
		else if (line[0] == 'F')
		{
            line.erase(std::remove(line.begin(),line.end(),'\r'), line.end() );
		    find = line.substr(2,line.length()-1);
		    std::cout << "Searching for occurrences of the word "<< "'"<< find <<"'" <<  endl;
			tree.findWord(find);
			std::cout << " " << endl;
		

		}




	}




    return 0;

}




// split function 

void split(const std::string& s, char c, std::vector<std::string>& v) {

   std::string::size_type i = 0;
   std::string::size_type j = s.find(c);

   while (j != std::string::npos) {
      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == std::string::npos)
       {  v.push_back(s.substr(i, s.length()));
   
       }           
           
    }
    
}
   
   