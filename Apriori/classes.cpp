#include "classes.h"
#include "functions.h"



void ItemsetHolder::buildItemsets(int** database)
{
	//for single item itemsets, fill in linked list with the item of the itemset
	//call the determineSupport function
	//move to next spot in array and repeat
	//when all single itemsets added, call pruneItemsets function
	//for remaining itemsets, combind and repeat

	for (int i = 0; i < 100000; i++)  
		for (int j = 0; j < 100000; j++)
		{
			Itemset::items.insert(database[i + 1][j]);
		}
}

void ItemsetHolder::pruneItemsets()
{
	//go through array, if an itemsets support isnt great enough, destroy the itemset.
	//every time function is called, start off where it last stopped, instead of at the beginning of the array
}

void Itemset::determineSupport()
{

}