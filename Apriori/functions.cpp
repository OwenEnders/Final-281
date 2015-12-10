#include "functions.h"

int** buildDatabase(string filename)
{
	int **databaseArray = new int* [50]; //first element is the number of items in a transaction - playing it safe at 50, though the highest average is 25.
	for (int i = 0; i < 50; i++)
	{
		databaseArray[i] = new int[100000];
	}//second element is the total number of transactions. 100k is the max ever used
	int transaction, item, i = 0, j = -1, tmp = 0;

	ifstream inputFile(filename);

	if (!inputFile.good())
	{
		cout << "\nFile not found!\n\n";
		return databaseArray;
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
		cout << "\n" << item << " added!";
	}
	return databaseArray;
}

void arrayDisplayer(int** array)
{
	for (int i = 0; i<9; i++)    //This loops on the rows.
	{
		for (int j = 0; j<9; j++) //This loops on the columns
		{
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
}