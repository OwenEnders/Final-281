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

	void determineSupport();

private:

	int support;

};