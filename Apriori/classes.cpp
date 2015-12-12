#include "classes.h"
#include "functions.h"

void ItemsetHolder::buildItemsets(int** database)
{
	//for single item itemsets, fill in linked list with the item of the itemset
	//call the determineSupport function
	//move to next spot in array and repeat
	//when all single itemsets added, call pruneItemsets function
	//for remaining itemsets, combind and repeat
	

	for (int i = 0; database[i][0] != NULL; i++)
	{
		int *dArray = new int[];

		for (int j = 1; database[i][j] != NULL; j++)
		{
			dArray[j-1] = database[i][j];
			Itemset(dArray) ;
		}
	}
}

void ItemsetHolder::pruneItemsets( int support)
{
	
	//go through array, if an itemsets support isnt great enough, destroy the itemset.
	//every time function is called, start off where it last stopped, instead of at the beginning of the array
}

//void Itemset::determineSupport()
//{
//
//}