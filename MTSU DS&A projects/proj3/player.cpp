#include "player.h"
#include "deck.h"
#include "card.h"

#include <vector>
#include <array>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;



Player::Player(string pname)
{

	if (pname == "") // if pname is empty set to "unknown"
	{
		name = "unknown";
	}
	else
	{
		name = pname;
	}
	
		

	score = 0;

	// set hasplayed to true to fill hand on first run
   for (int i = 0; i < Max_Cards; ++i)
   {
	  hasPlayed[i] = true;
   }

}


// Simulates player removing one card from hand and playing it - returns the card
// Play the card with the highest value, per the rules in the specification 
Card Player::playCard()
{
	
	Card largest = hand[0]; // set initial largest to first card
	int max = -1;
	
	

	// flag to check the num times largest val gets changed will use 
	// this below to determine if need to use faceValue or SuitValue
	int cnt = 0;
	for (int i = 1; i < Max_Cards; i++)
	{
		if (hand[i].getPointValue() > largest.getPointValue())
		{
			cnt++;
		}
	}

	// create flag for hasPlayed to count if the card is empty in game
	// if card is 1: one card left, 2:two cards left etc.
	int hasplay_cnt = 0;
	 for (int i = 0; i < Max_Cards; ++i)
   	{
	 
	 	if (hasPlayed[i] == false)
	 	{
			 hasplay_cnt++;
	 	}
  	
	}



// one card is left play that card 
if(hasplay_cnt == 1)
{
	 for (int i = 0; i < Max_Cards; ++i)
   	{
	 
	 	if (hasPlayed[i] == false)
	 	{
			largest = hand[i];
			max = i;
	 	}
  	
	}

	hasPlayed[max] = true;  // will set the played card to true 
	return largest;
}


// two cards are left 
if(hasplay_cnt == 2)
{
	
	largest = hand[1]; // set largest to new value



	// should check if the 2 cards left are equal before continue

	bool equal = false;
			if (largest.getPointValue() == hand[2].getPointValue())
			{
				equal = true;
			}

			if (equal == false)
			{
				for (int i = 2; i < Max_Cards; i++)
				{
					if (hand[i].getPointValue() > largest.getPointValue())
					{
						largest = hand[i];
						max = i;
					}
					else
					{
						largest = hand[1];
						max = 1;
					}	
				}
			}
			
			else // equal is true 
			{
				bool face = false;
				if(largest.getFaceValue() == hand[2].getFaceValue())
				{
					face = true;
				}


				if (face == true)
				{
					if(largest.getSuit() < hand[2].getSuit())
					{
						largest = hand[1];
						max = 1;

					}
					else
					{
						largest = hand[2];
						max =2;
					}
			
				}

				else // face is false
				{
					if(largest.getFaceValue() > hand[2].getFaceValue())
					{
						largest = hand[1];
						max = 1;

					}

					else
					{
						largest = hand[2];
						max = 2;
					}
				

				}
			

			}
	
		}



if (hasplay_cnt == 3)
{
	
		// cnt 0 first card is greatest 
		if (cnt == 0)
		{	
			largest = hand[0];
			max = 0;

		}


		// cnt 1 there is one card greater than
		if (cnt == 1)
		{	
			for (int i = 1; i < Max_Cards; i++)
			{
				if (hand[i].getPointValue() > largest.getPointValue())
				{
					largest = hand[i];
					max = i;
				}
			}
		
		}
	
		// cnt 2 two cards greater than 
		if (cnt == 2)
		{	
			largest = hand[1];
		
			// should check if the 2 cards left are equal 

			bool equal = false;
			if (largest.getPointValue() == hand[2].getPointValue())
			{
				equal = true;
			}

			if (equal == false)
			{
				for (int i = 2; i < Max_Cards; i++)
				{
					if (hand[i].getPointValue() > largest.getPointValue())
					{
						largest = hand[i];
						max = i;
					}
					else
					{
						largest = hand[1];
						max = 1;
					}	
				}
			}
			
			else // equal is true 
			{
				bool face = false;
				if(largest.getFaceValue() == hand[2].getFaceValue())
				{
					face = true;
				}


				if (face == true)
				{
					if(largest.getSuit() < hand[2].getSuit())
					{
						largest = hand[1];
						max = 1;

					}
					else
					{
						largest = hand[2];
						max =2;
					}
			
				}

				else // face is false
				{
					if(largest.getFaceValue() > hand[2].getFaceValue())
					{
						largest = hand[1];
						max = 1;

					}

					else
					{
						largest = hand[2];
						max = 2;
					}
				

				}
			

			}
	
		}
}

	hasPlayed[max] = true;  // will set the played card to true 
	return largest; // return the card that was smallest 

}

// draw top card from the deck to replace played card in hand
void Player::drawCard(Deck& dk) 
{
	// loop through the hand, and replace card if it == to true
	// after find card break from the loop. only one card should 
	// be replaced when drawCard is called

	for (int i = 0; i < Max_Cards; ++i)
	{ 
		if (hasPlayed[i] == true)
       { 
           hand[i] = dk.dealCard();
           hasPlayed[i] = false;
		   break; 
		   		
        }
	  
	 }

}

//overload the << operator to display cards in player's hand (or _____ if no card)
std::ostream& operator << (std::ostream& os, const Player& p)
{
	
	
	for (int i = 0; i < p.Max_Cards; ++i)
   	{
       if (p.hasPlayed[i] == true)
        {
			
			os << " _____ ";   // display _____ if no card
			
		
		}  

		else 
		{
			
			os << p.hand[i] << " "; // display the card 
			

		}
		
      
	}

  	return os;

}


// add the point value of the card to the player's score
void Player::addScore(Card acard)
{
	// protects score from empty cards 
	if (acard.getPointValue() <= 15)
	{
		score += acard.getPointValue(); // add score

	}

}


// return the score the player has earned so far
int Player::getScore() const
{

	return score;

}


// return the name of the player
string Player::getName() const
{
	return name;
}



// return true if the player's hand is out of cards
bool Player::emptyHand() const
{
	
	int cnt = 0;
   for (int i = 0; i < Max_Cards; i++)
   {
       if (hasPlayed[i] == false) 
    	{
			cnt++; // cnt num times has played = false 
		}
   }

	// if cnt = 0 the return true
	if (cnt == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	

		
}


