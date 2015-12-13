#include "classes.h"
#include "functions.h"

void ItemsetHolder::buildItemsets(int** database)
{
	//for single item itemsets, fill in linked list with the item of the itemset
	//call the determineSupport function
	//move to next spot in array and repeat
	//when all single itemsets added, call pruneItemsets function
	//for remaining itemsets, combind and repeat
	
	for (int i = 0; i < 100000 ; i++)
	{
		if (database[i + 1][0] != NULL)
		{
			int *dArray = new int[];

			for (int j = 1; j < 50; j++)
			{
				if (database[i][j + 1] != NULL)
				{
					dArray[j - 1] = database[i][j];
					cout << "\n location: [" << i << "] [" << j << "] item: " << dArray[j - 1] << endl;
					Itemset(dArray);
				}
			}
		}
	}

	for (int i = 0; i < 50; ++i)
	{
		for (int j = 0; j < 100000; ++j)
		{
			delete[] database[i];
		}
	}
	delete[] database;

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