// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj7
// Due: 11/16/2020

#include "priorityqueue.h"
#include "card.h"
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{

     
	ifstream inputFile("pqseed.txt"); // open text file to read input

	int seed;

   
	while(inputFile >> seed)
	{

	}
    
	
    
    
	srand(seed); // sets the random number generator seed

	// max p queue 
	PriorityQueue <Card, MaxHeap<Card> > maxQueue;

	// min p queue
	PriorityQueue <Card, MinHeap<Card> > minQueue;



	// Instantiates two arrays of 13 Card objects each.
    Card Dspades[13];	// spades 
	Card Dhearts[13];	// hearts
    
    

    // fill the spades deck
	for (int i = 0; i < 13; i++)
	{
		Dspades[i] = Card(i,spades);
		
	}
    
    
    // fill the hearts deck
	for (int i = 0; i < 13; i++)
	{
		
		Dhearts[i] = Card(i,hearts);
		
	}
    
    // shuffle the spades deck
    std::random_shuffle(std::begin(Dspades), std::end(Dspades)); 
    
  
	
   // shuffle the hearts deck
    std::random_shuffle(std::begin(Dhearts), std::end(Dhearts)); 
  
   
   
   
	// enqueue the spades cards 
	for (int i = 0; i < 13; i++)
	{
	    std::cout << "Enqueued " << Dspades[i] << " ";
		maxQueue.enqueue(Dspades[i]);
		maxQueue.print();
		std::cout << " " << endl;
	}
    
    
	std::cout << " " << endl;


	// dequeue the cards 
	while (maxQueue.IsEmpty() == false)
	{
		maxQueue.dequeue(MaxHeap<Card>{});
		maxQueue.print();
		std::cout << " " << endl;
	}
    
    if (maxQueue.IsEmpty() == true)
    {
        std::cout << "MaxHeap Empty." << endl;
    }
   
    
    std::cout << " " << endl;
	
	
	// enqueue the hearts cards 
	for (int i = 0; i < 13; i++)
	{

		std::cout << "Enqueued " << Dhearts[i] << " ";
		minQueue.enqueue(Dhearts[i]);
		minQueue.print();
		std::cout << " " << endl;
	}

	std::cout << " " << endl;


	// dequeue the cards 
	while (minQueue.IsEmpty() == false)
	{
		minQueue.dequeue(MinHeap<Card>{});
		minQueue.print();
		std::cout << " " << endl;
	}

    if (minQueue.IsEmpty() == true)
    {
        std::cout << "MinHeap Empty." << endl;    
    }
	
	
	std::cout << " " << endl;


	return 0;
}
