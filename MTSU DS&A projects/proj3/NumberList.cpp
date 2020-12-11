#include "NumberList.h"

#include <iostream>
#include <string>
using namespace std;




void NumberList::appendNode(double num)
{
	ListNode *newNode; // point to new node 

	ListNode *nodePtr; // move through the list 



	// allocate a new node and store num there

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;


	// if there are no nodes in the list
	// make newNode the first node

	if(!head)
	{
		head = newNode;
	}
	else
	{

		// initialize nodePtr to head of list
		nodePtr = head;


		// find the last node in the list

		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}


		// insert newNode as the last node

		nodePtr->next = newNode;
	}





}


