#include "functions.h"

void buildDatabase(string filename)
{
	int databaseArray[50][100000]; //first element is the number of items in a transaction - playing it safe at 50, though the highest average is 25.
								   //second element is the total number of transactions. 100k is the max ever used
	int transaction, item, i = 0, j = -1, tmp = 0;

	ifstream inputFile(filename);

	if (!inputFile.good())
	{
		cout << "\nFile not found!\n\n";
		return;
	}


	while (!inputFile.eof())
	{
		inputFile >> transaction >> item;

		if (transaction != tmp)
		{
			j++;
			i = 0;
			databaseArray[i][j] = transaction;
			tmp = transaction;
			databaseArray[i + 1][j] = item;
		}

		else if (transaction == tmp)
		{
			i++;
			databaseArray[i + 1][j] = item;
		}

	}

}