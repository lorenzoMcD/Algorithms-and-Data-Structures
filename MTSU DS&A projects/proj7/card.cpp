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
		if (cd.getFaceValue() == 12)
		{
			face = 'K';
			os << face << s << "[" << "13" << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'Q';
			os << face << s << "[" << "12"<< "]" << " ";
		}

		else if (cd.getFaceValue() == 10)
		{
			face = 'J';
			os << face << s << "[" << "11"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 9)
		{
			
			os << "10" << s << "[" << "10"<< "]" << " ";
		}
		
		else if (cd.getFaceValue() == 8)
		{
			face = '9';
			os << face << s << "[" << "9" << "]" << " ";
		}

		else if (cd.getFaceValue() == 7)
		{
			face = '8';
			os << face << s << "[" << "8"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '7';
			os << face << s << "[" << "7"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '6';
			os << face << s << "[" << "6" << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '5';
			os << face << s << "[" << "5" << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '4';
			os << face << s << "[" << "4" << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '3';
			os << face << s << "[" << "3" << "]" << " ";
		}
		else if (cd.getFaceValue() == 1)
		{
			face = '2';
			os << face << s << "[" << "2" << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << "1" << "]" << " ";
		}
		
	}




	if (cd.getSuit() == hearts)
	{
		char s = 'H';
		char face = '-';

        // display the suit , the face and the value 
		if (cd.getFaceValue() == 12)
		{
			face = 'K';
			os << face << s << "[" << "13" << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'Q';
			os << face << s << "[" << "12"<< "]" << " ";
		}

		else if (cd.getFaceValue() == 10)
		{
			face = 'J';
			os << face << s << "[" << "11"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 9)
		{
			
			os << "10" << s << "[" << "10"<< "]" << " ";
		}
		
		else if (cd.getFaceValue() == 8)
		{
			face = '9';
			os << face << s << "[" << "9" << "]" << " ";
		}

		else if (cd.getFaceValue() == 7)
		{
			face = '8';
			os << face << s << "[" << "8"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '7';
			os << face << s << "[" << "7"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '6';
			os << face << s << "[" << "6" << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '5';
			os << face << s << "[" << "5" << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '4';
			os << face << s << "[" << "4" << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '3';
			os << face << s << "[" << "3" << "]" << " ";
		}
		else if (cd.getFaceValue() == 1)
		{
			face = '2';
			os << face << s << "[" << "2" << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << "1" << "]" << " ";
		}
		

	}

	else if (cd.getSuit() == clubs)
	{

		char s = 'C';
		char face = '-';

      if (cd.getFaceValue() == 12)
		{
			face = 'K';
			os << face << s << "[" << "13" << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'Q';
			os << face << s << "[" << "12"<< "]" << " ";
		}

		else if (cd.getFaceValue() == 10)
		{
			face = 'J';
			os << face << s << "[" << "11"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 9)
		{
			
			os << "10" << s << "[" << "10"<< "]" << " ";
		}
		
		else if (cd.getFaceValue() == 8)
		{
			face = '9';
			os << face << s << "[" << "9" << "]" << " ";
		}

		else if (cd.getFaceValue() == 7)
		{
			face = '8';
			os << face << s << "[" << "8"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '7';
			os << face << s << "[" << "7"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '6';
			os << face << s << "[" << "6" << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '5';
			os << face << s << "[" << "5" << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '4';
			os << face << s << "[" << "4" << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '3';
			os << face << s << "[" << "3" << "]" << " ";
		}
		else if (cd.getFaceValue() == 1)
		{
			face = '2';
			os << face << s << "[" << "2" << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << "1" << "]" << " ";
		}
		
	


	}
	
	else if (cd.getSuit() == spades)
	{
		
		char s = 'S';
		char face = '-';

        // display the suit , the face and the value 
		if (cd.getFaceValue() == 12)
		{
			face = 'K';
			os << face << s << "[" << "13" << "]" << " ";
		}

		else if (cd.getFaceValue() == 11)
		{
			face = 'Q';
			os << face << s << "[" << "12"<< "]" << " ";
		}

		else if (cd.getFaceValue() == 10)
		{
			face = 'J';
			os << face << s << "[" << "11"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 9)
		{
			
			os << "10" << s << "[" << "10"<< "]" << " ";
		}
		
		else if (cd.getFaceValue() == 8)
		{
			face = '9';
			os << face << s << "[" << "9" << "]" << " ";
		}

		else if (cd.getFaceValue() == 7)
		{
			face = '8';
			os << face << s << "[" << "8"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 6)
		{
			face = '7';
			os << face << s << "[" << "7"<< "]" << " ";
		}
		else if (cd.getFaceValue() == 5)
		{
			face = '6';
			os << face << s << "[" << "6" << "]" << " ";
		}
		else if (cd.getFaceValue() == 4)
		{
			face = '5';
			os << face << s << "[" << "5" << "]" << " ";
		}
		else if (cd.getFaceValue() == 3)
		{
			face = '4';
			os << face << s << "[" << "4" << "]" << " ";
		}
		else if (cd.getFaceValue() == 2)
		{
			face = '3';
			os << face << s << "[" << "3" << "]" << " ";
		}
		else if (cd.getFaceValue() == 1)
		{
			face = '2';
			os << face << s << "[" << "2" << "]" << " ";
		}
		else if (cd.getFaceValue() == 0 )
		{
			face = 'A';
			os << face << s << "[" << "1" << "]" << " ";
		}

		
	}
	
	
	return os;
}



bool Card::operator <= (const Card& cd) const
{

	if (cardFace <= cd.cardFace)
	{
		return true;
	}

	else
	{
		return false;

	}

	
}


bool Card::operator >= (const Card& cd) const
{

	if (cardFace >= cd.cardFace)
	{
		return true;
	}

	else
	{
		return false;

	}

	
}




int Card::getFaceValue() const
{

	return cardFace;
}

suit Card::getSuit() const
{

	return cardSuit;

}
