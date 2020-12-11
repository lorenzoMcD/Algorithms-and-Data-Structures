// name: Lorenzo McDaniel
// class: 3110-003
// Project: proj3
// Due: 09/27/2020

#include "card.h"
#include "deck.h"
#include "player.h"


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include<cstdlib>
using namespace std;




int main()
{

	int x; // rand num seed

	std::string player1_name; // player 1 name

	std::string player2_name; // player 2 name



	ifstream inputFile("cardgame.txt"); // open text file to read input



	while(inputFile >> player1_name >> player2_name >> x)
	{

	}


	srand(x); // sets the random number generator seed



	// create player objects
	
	Player p1(player1_name);

	Player p2(player2_name);

	

	Deck d = Deck(); // create card deck

	// need to display the deck before shuffle
	std::cout << d << endl;

	std::cout << " " << endl;


	d.Shuffle(); // shuffle card deck

	std::cout << d << endl; // display again before draw cards

	std::cout << " " << endl;

	

	int turn = 1; // counts the number of turns for players


	// deal players initial 3 cards before game starts
	for (int i = 0; i < 3; ++i)
	{
		p1.drawCard(d);
		p2.drawCard(d);

	}
		
		

	while (!p1.emptyHand() == true|| !p2.emptyHand() == true) // while the players hands not empty
	{

		// deal cards if deck is not empty
		if(d.isEmpty() == false)
		{
		p1.drawCard(d);
		p2.drawCard(d);
		}
		
	
		
		std::cout << " " << endl;
			// preplay

		std::cout << turn << ")" << " " << p1.getName() << " " << p1 << " " << "(" << p1.getScore() << ")" << " " << "-";
		std::cout << " " << p2.getName() << " " << p2 << " " << "(" << p2.getScore() << ")"<< endl;



		Card card1 = p1.playCard();
		Card card2 = p2.playCard();





		// player 1 hand is higher gets both card points
		if (card1 > card2)
		{
			

			p1.addScore(card1);
			p1.addScore(card2);


			// print postplay

			std::cout << turn << ")" << " " << p1.getName() <<"*" <<  " " << p1 << " " << "(" << p1.getScore() << ")" << " " << "-";

			std::cout << " " << p2.getName() << " " << p2 << " " << "(" << p2.getScore() << ")";

			std::cout << " " << endl;


		}

		// player 2 hand is higher gets both card points
		else if (card2 > card1)
		{

			
			p2.addScore(card2);
			p2.addScore(card1);

			// print postplay

			std::cout << turn << ")" << " " << p1.getName() <<  " " << p1 << " " << "(" << p1.getScore() << ")" << " " << "-";

			std::cout << " " << p2.getName() << "*" << " " << p2 << " " << "(" << p2.getScore() << ")" ;

			std::cout << " " << endl;
		
		}


		else

		{
			// the play is a tie because both high cards same
			// no points awarded to either player
			// no winner is identified
			


			// print postplay

			std::cout << turn << ")" << " " << p1.getName() <<  " " << p1 << " " << "(" << p1.getScore() << ")" << " " << "-";

			std::cout << " " << p2.getName() << " " << p2 << " " << "(" << p2.getScore() << ")" ;
			std::cout << " " << endl;


		}

		turn++; // iterate the turns

	}


	// print the final results of the game
	if (p1.getScore() > p2.getScore())
	{
		std::cout << " " << endl;
		std::cout << "Winner" << " " << p1.getName() << " " << p1.getScore() << endl;
	}
	else if (p1.getScore() < p2.getScore())
	{
		std::cout << " " << endl;
		std::cout << "Winner" << " " << p2.getName() << " " << p2.getScore() << endl;
	}

	else if (p1.getScore() == p2.getScore())
	{
		std::cout << " " << endl;
		std::cout << "Tie" << " " << p1.getScore() << endl;
	}



	return 0;
}
