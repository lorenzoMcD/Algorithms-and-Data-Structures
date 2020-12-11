#include "card.h"

#include <iostream>
#include <string>
using namespace std;



// constructor for card

Card::Card(int a , suit b)
{
	// take in card face and suit values then set the point value
	cardFace = a;
	cardSuit = b;
	
	if(cardFace == 0 )
	{
		pointValue = 15;
	}
	else if(cardFace == 11)
	{
		pointValue = 10;
	}
	else if(cardFace == 12)
	{
		pointValue = 10;
	}
	else if(cardFace == 13)
	{
		pointValue = 10;
	}
	else if(cardFace == 10)
	{
		pointValue = 10;
	}
	
	else if (cardFace == 2)
	{
		pointValue = 2;
	}
	else if (cardFace == 3)
	{
		pointValue = 3;
	}
	else if (cardFace == 4)
	{
		pointValue = 4;
	}
	else if (cardFace == 5)
	{
		pointValue = 5;
	}
	else if (cardFace == 6)
	{
		pointValue = 6;
	}
	else if (cardFace == 7)
	{
		pointValue = 7;
	}
	else if (cardFace == 8)
	{
		pointValue = 8;
	}

	else if (cardFace == 9)
	{
		pointValue = 9;
	}
	
	
	
}


// overload the << operator to display the card
std::ostream& operator << (ostream& os, const Card& cd)
{
	
	// for each suit print the face and point value of cards

	if (cd.getSuit() == diamonds)
	{
		char s = 'D';
		char face = '-';

        // display the suit , the face and the value 
		if (cd.getFaceValue() == 13)
		{
			face = 'K';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 12)
		{
			face = 'Q';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'J';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 10)
		{
			
			os << "10" << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 9)
		{
			face = '9';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 8)
		{
			face = '8';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 7)
		{
			face = '7';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '6';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '5';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '4';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '3';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '2';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		
		
	}




	else if (cd.getSuit() == hearts)
	{
		char s = 'H';
		char face = '-';

        // display the suit , the face and the value 
		if (cd.getFaceValue() == 13)
		{
			face = 'K';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 12)
		{
			face = 'Q';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'J';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 10)
		{
			
			os << "10" << s << "[" << cd.getPointValue() << "]" << " ";
		}
		
		else if (cd.getFaceValue() == 9)
		{
			face = '9';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 8)
		{
			face = '8';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 7)
		{
			face = '7';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '6';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '5';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '4';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '3';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '2';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		

	}

	else if (cd.getSuit() == clubs)
	{

		char s = 'C';
		char face = '-';

        // display the suit , the face and the value 
		if (cd.getFaceValue() == 13)
		{
			face = 'K';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 12)
		{
			face = 'Q';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'J';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 10)
		{
			
			os << "10" << s << "[" << cd.getPointValue() << "]" << " ";
		}
		
		else if (cd.getFaceValue() == 9)
		{
			face = '9';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 8)
		{
			face = '8';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 7)
		{
			face = '7';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '6';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '5';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '4';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '3';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '2';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		
		
	


	}
	
	else if (cd.getSuit() == spades)
	{
		
		char s = 'S';
		char face = '-';

        // display the suit , the face and the value 
		if (cd.getFaceValue() == 13)
		{
			face = 'K';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 12)
		{
			face = 'Q';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'J';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 10)
		{
			
			os << "10" << s << "[" << cd.getPointValue() << "]" << " ";
		}
		
		else if (cd.getFaceValue() == 9)
		{
			face = '9';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		else if (cd.getFaceValue() == 8)
		{
			face = '8';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 7)
		{
			face = '7';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '6';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '5';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '4';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '3';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '2';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}
		else if (cd.getFaceValue() == 0)
		{
			face = 'A';
			os << face << s << "[" << cd.getPointValue() << "]" << " ";
		}

		
	}
	
	
	return os;
}



bool Card::operator==(const Card& cd) const
{
	
	return (this->getPointValue() == cd.getPointValue());
}



bool Card::operator > (const Card& cd) const
{

	return (this->getPointValue() > cd.getPointValue());
}


bool Card::operator < (const Card& cd) const
{

	return (this->getPointValue() < cd.getPointValue());
}





int Card::getPointValue() const
{

	return pointValue;
}



int Card::getFaceValue() const
{

	return cardFace;
}

suit Card::getSuit() const
{

	return cardSuit;

}
