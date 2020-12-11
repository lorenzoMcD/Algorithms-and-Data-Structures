#include "wordtree.h"

#include <iostream>
#include <string>
using namespace std;



// word tree constuctor 

WordTree::WordTree()
{

	// initialize the root node here 
	root = nullptr;



}


// Destructor - invokes helper function
WordTree::~WordTree()
{

	deleteSubTree(root);

}



// public functions via which the tree operations 
// are called (hides tree's root/implementation) 


//private functions
void WordTree::addWord(TreeNode *& node, std::string sval)
{

	// create node 
    if(node == NULL)
	{
	    node = new TreeNode();
	    node->value = sval;
	    node->left = NULL;
	    node->right = NULL;
	    
	    
	}
	
	// the string value is == to the nodes value 
	if(sval == node->value)
	{
		// increment the count 
		node->count+=1;

	}

	//val is less than the node value 
	else if (sval < node->value)
	{
		  // Make a new node as the left child of this node
		if (node->left == nullptr)
		{

			node->left = new TreeNode();
			node->left->value = sval;
			node->left->count = 1;
			
		
			
		}
		else
		{
            // Recursively call addWord() on this node's left child
			this->addWord(node->left,sval);
		}


		
	}
	
	else // val is greater than the node value 
	{
	     // Make a new node as the right child of this node
		 if (node->right == nullptr)
		{

			node->right = new TreeNode();
			node->right->value = sval;
			node->right->count = 1;
		}
		else
		{
            // Recursively call addWord() on this node's right child
			this->addWord(node->right,sval);
		}
	}
	
	


}


void WordTree::deleteSubTree(TreeNode * node)
{
	
	if (node == NULL)
	{
	    return;
	}
	
	
	deleteSubTree(node->left);
	deleteSubTree(node->right);
	delete node;
	


}


void WordTree::getCounts(TreeNode * node, int compare, int& cnt) const
{
  
    // in order tree traversal 
    
   
    if (node == NULL)
    {
        return;
    }
    
    
    if (node != NULL)
    {
        getCounts(node->left,compare,cnt);
        
        if (node->count >= compare)
        {
            std::cout << node->value << "(" << node->count << ")"<< endl;
	        cnt+=1;
        }
        
        getCounts(node->right,compare,cnt);
         
      
    }

}







// public functions 
void WordTree::addWord(std::string sval)
{


    // call private function 
    addWord(root,sval);
	

}


void WordTree::getCounts(int compare)
{
	int cnt = 0;
	
	// call private function
	getCounts(root,compare,cnt);
	
	std::cout << cnt << " nodes had words with " << compare << " or more occurrence(s). " << endl;

}


// need to traverse tree to search for word 
void WordTree::findWord(std::string sval)
{
   
	// needs to be itterative  not recursive 
	bool contains = false;

	while (root != nullptr)
	{
        
		if (sval > root->value)
		{

			root = root->right;
		}

		else if ( sval < root->value)
		{


			root = root->left;
		}

		else if (sval == root->value)
		{
			// found in tree

			std::cout << "The word " << "'" << sval << "'" << " occurs " << root->count << " time(s)" << " in the text." <<  endl;
		    contains = true;
			break; // break from loop 
		}
		
	}
	
	
	if(contains == false)
	{

		// not found in tree
		std::cout << "The word " << "'"<<sval << "'" << " was not found in the text." << endl;
		 
    }
	
	

 }


