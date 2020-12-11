#include <time.h>

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <forward_list>
#include <stack>
#include <queue>

using namespace std;






int main()
{


 //a. create vector that holds int 
	clock_t timerStart, timerEnd;
	

	timerStart = clock();
	// create empty vector
	vector<int> vect;

	// add items to vector 
	for (int i = 0; i < 100000 - 1; i++)
	{
		vect.push_back(1);
	}
	
	
	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;

/*
//b. create list that holds ints
	

	// create empty vector
	list<int> liist;


	timerStart = clock();


	for (int i = 0; i < 1000000 - 1; i++)
	{
		liist.push_front(1);
	}


	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;




//c. a forward_list that holds ints 
	
	// create empty forward_list
	forward_list<int> flist1;

	

	timerStart = clock();


	for (int i = 0; i < 1000000 - 1; i++)
	{
		flist1.push_front(1);
	}


	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;







//d1. a stack ( with the default deque implementation)

	stack<int> s;
	
	timerStart = clock();


	for (int i = 0; i < 1000000 - 1; i++)
	{
		s.push(1);
	}
	


	
	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;



// d2.
	
	
	timerStart = clock();


	for (int i = 0; i < 500000 - 1; i++)
	{
		s.pop();
	}
		
	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;



//e1 . stack vector 

	stack<int, vector<int> > s3;

	timerStart = clock();

	for (int i = 0; i < 1000000 - 1; i++)
	{
		s3.push(1);
	}


	

	

	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;



// e2.
	

	timerStart = clock();

	for (int i = 0; i < 500000 - 1; i++)
	{
		s3.pop();
	}


	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;



// f1. stack list 



	stack<int, list<int> > s2;

	timerStart = clock();

	for (int i = 0; i < 1000000 - 1; i++)
	{
		s2.push(1);
	}



	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;



// f2. stack list 



	

	timerStart = clock();

	for (int i = 0; i < 500000 - 1; i++)
	{
		s2.pop();
	}



	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;
	






// g. queue 

	queue<int> q;

	timerStart = clock();

	for (int i = 0; i < 1000000 - 1; i++)
	{
		q.push(1);
	}



	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;


// g2. queue 

	

	timerStart = clock();

	for (int i = 0; i < 500000 - 1; i++)
	{
		q.pop();
	}



	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;





// h. q deque

	queue<int, deque<int>> q7;


	timerStart = clock();

	for (int i = 0; i < 1000000 - 1; i++)
	{
		q7.push_back(1);
		
	}


	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;


// h2. q deque



	timerStart = clock();

	for (int i = 0; i < 500000 - 1; i++)
	{
		q7.pop_front();
		
	}


	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;





// i. q list 

	queue<int, list<int> > q3;

	timerStart = clock();

	for (int i = 0; i < 1000000 - 1; i++)
	{
		q3.push(1);
		
	}

	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;





// i2. q list 

	

	timerStart = clock();

	for (int i = 0; i < 500000- 1; i++)
	{
		q3.pop();
		
	}

	timerEnd = clock();

	std::cout << "time is : " << (timerEnd - timerStart)*1.0/CLOCKS_PER_SEC << endl;





	



*/


	return 0;
}