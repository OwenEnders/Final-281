#include "linkedList.h"



class ItemsetHolder
{
public:
	// Linked list of itemsets;
	
	void buildItemsets(int**);
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