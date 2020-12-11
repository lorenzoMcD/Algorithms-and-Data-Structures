#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <algorithm>
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;


template <typename Object, typename Compare>

class PriorityQueue
{


public:

	PriorityQueue()
	{
		
		// resize the vector to 50 
		heapArr.resize(50);
	
	}


	// removes the highest priority item. Does not return it.
	void dequeue(Compare c)
	{
        
        if (IsEmpty() == false)
		 {
		 
		  std::cout << "Dequeued " << heapArr[0] << " ";   
	      heapArr[0] = heapArr[size-1];

		
		  size--; // subtract size 
		  //std::cout << size << endl;
        

		  heapDown(0);
		 }  

    }
	// takes one parameter: the item to be enqueued. Enqueues the item and places it in the proper heap
	// order
	void enqueue(Object item)
	{
        
        // place item at end of heap 
		heapArr[size] = item;

		size++; // increase size 
	
        
        //heap up 
		heapUp(size-1);

	}

    
    bool IsEmpty()
    {
        
        if (size <= 0)
        {
            
            return true;
        }
        else
        {
            return false;
        }
        
        
    }

	// print items inside heap from index 0 through num of elements - 1
	void print()
	{
        
       
         for (int i = 0; i <= size-1; i++)
		 {
                
			std::cout << heapArr[i] << " ";
	
		 }        
            

		
	}

private:

	vector<Object> heapArr; // vector created 
   	
   	int size = 0; // variable to keep track of size 

    Compare c; // Compare item used for the comparisons 

	// takes index param and heaps up based on priority
	void heapUp(int index)
	{

		int parent = (index - 1) / 2;

		if (index == 0 || c.HighPriority(heapArr[parent],heapArr[index]))
         {

         	return;
         }
        

        if (c.HighPriority(heapArr[index],heapArr[parent]))
        {
        	Object t = heapArr[parent];
        	heapArr[parent] = heapArr[index];
        	heapArr[index] = t;

        	heapUp(parent);
        }

	}


	// takes index param and heaps down based on priority
	void heapDown(int index)
	{

		int left = (index * 2) + 1;
		int right = (index * 2 ) + 2;

		if (left > size)
		{
			return;
		}

		int largest = index;
		
		
		if (c.HighPriority(heapArr[left],heapArr[index]))
		{
		    largest = left;
		}

		if (right < size && (c.HighPriority(heapArr[right],heapArr[largest])))
		{

			largest = right;
		}

        
		if (largest!= index)
		{

			Object t = heapArr[index];
        	heapArr[index] = heapArr[largest];
        	heapArr[largest] = t;

        	heapDown(largest);


		}


	}


};




template <typename Object>

class MinHeap
{

public:
    // needed for comparing objects in the heap 
	bool HighPriority(const Object &lhs, const Object &rhs) const
	{

		return (lhs <= rhs);

	}

};

template <typename Object>

class MaxHeap
{

public:

	bool HighPriority(const Object &lhs, const Object &rhs) const
	{

		return (lhs >= rhs);

	}


};

#endif