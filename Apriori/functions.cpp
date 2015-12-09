#include <string>
#include <iostream>
#include <fstream>


using namespace std;

void buildDatabase(ifstream inputFile, string filename)
{
	int databaseArray[50][100000]; //first element is the number of items in a transaction - playing it safe at 50, though the highest average is 25.
								   //second element is the total number of transactions. 100k is the max ever used
	int transaction, item;

	while (!inputFile.eof())
	{
		inputFile >> transaction >> item;

	}

}