#include "deck.h"
#include "card.h"

#include <vector>
#include <array>
#include <algorithm>
#include <iostream>
using namespace std;





Deck::Deck()
{

	topCard = 51; // set top card to last num in array 

	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1; // create vars to add cards to each suit



	
	
	// will loop and add cards to the deck
	for (int i=0; i < 13; i++)
	{
		theDeck[i] =  Card(a++, clubs);
	}
		
	for (int i=13; i < 26; i++)
	{
		
		theDeck[i] =  Card(b++, hearts);
		
	}

	for (int i=26; i < 39; ++i)
	{
		theDeck[i] =  Card(c++, spades);
	}
	
	for (int i=39; i < 52; ++i)
	{
		theDeck[i] =  Card(d++, diamonds);
	}
	// set the ace cards for each suit

	theDeck[0] = Card(0,clubs); 
	
	theDeck[13] = Card(0,hearts);

	theDeck[26] = Card(0,spades);

	theDeck[39] = Card(0,diamonds);



}


// Remove the top card from the deck and return it.
Card Deck::dealCard()
{

	// after the first run just keep subtracting from the total size
	// top card is always the last card in the deck

	Card top = theDeck[topCard];
	topCard--;
    return top;
}


// print the deck to screen
std::ostream& operator << (ostream& os, const Deck& d)
{


	int len = sizeof(d.theDeck)/sizeof(d.theDeck[0]);

//for (int i=0; i < 13; i++)
	for (int i = len  ; i >= 0; i--) // should print topdeck first
	{

		os << d.theDeck[i];

	}

	return os;
}



// shuffle the card deck
void Deck::Shuffle()
{
	std::random_shuffle(std::begin(theDeck), std::end(theDeck));


}


// check if the card deck is empty
bool Deck::isEmpty()
{

	// when top card hits 0 then deck is empty

	if (topCard == -1)
	{
		return true;
	}
	else
	{
		return false;
	}

}
