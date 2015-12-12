#include "linkedList.h"



class ItemsetHolder
{
public:
	//DynamicArray itemsets;
	
	void buildItemsets(int** database);
	void pruneItemsets();

};

class Itemset:public ItemsetHolder
{
public:
	LinkedList<int> items;

	int *mArray = new int[];


	/*void determineSupport();*/
	Itemset()
	{
		mArray = NULL;
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

	int support;

};