/*  Author: Owen Enders
Sam Poquette

Class:   CSI-281-03

Assignment: Final

Date Assigned: 11/19

Due Date:  12/12

Description:  This program analyzes data sets given to it using the apriori algorithm
Certification of Authenticity:
I certify that this is entirely my own work, except where I have
given fully - documented references to the work of others.
I understand the definition and consequences of plagiarism and acknowledge
that the assessor of this assignment may, for the purpose of assessing this
assignment:
-Reproduce this assignment and provide a copy to another member of
academic staff; and / or
- Communicate a copy of this assignment to a plagiarism checking service (which
may then retain a copy of this assignment on its database for the purpose of
future plagiarism checking)
*/

#include "linkedList.h"

class ItemsetHolder
{
public:
	// Linked list of itemsets;

	/*      Pre:  2d array has been allocated
	*     Post:  The information in the array has been moved to the apriori
	*            structure
	*  Purpose:  to move information into the data structure      
	*************************************************************************/	
	void buildItemsets(int**);

	/*      Pre: the apriori structure is has been made and filled
	*     Post:  the data structure has been pruned of low support items/itemsets
	*  Purpose:  to prune low support items/itemsets
	*************************************************************************/
	void pruneItemsets(int);

};

class Itemset:public ItemsetHolder
{
public:
	LinkedList<int> items;

	int *mArray = new int[];


	/*void determineSupport();*/
	Itemset()
	{
	}

	Itemset(int* passArray)
	{
		mArray = passArray;
	}

	~Itemset()
	{
		delete[] mArray;
	}
private:

};