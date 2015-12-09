#include "classes.h"
#include "functions.cpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	bool shouldExit = false;

	while (!shouldExit)
	{
		char entry;
		string filename;
		double support;

		cout << "Please select an option.\n\nR - Run Apriori\nQ - Quit\n\n";
		cin >> entry;

		if (entry == 'Q' || entry == 'q')
		{
			cout << "\n";
			shouldExit = true;
		}
		else if (entry == 'R' || entry == 'r')
		{
			cout << "Please enter filename.";
			cin >> filename;

			ifstream inputFile(filename);

			if (inputFile.good())
			{
				buildDatabase(inputFile, filename);



			}
			else
				cout << "\nFile not found!\n\n";
		}
		else
		{
			cout << "\nInvalid entry!\n\n";
		}
	}

	system("pause");

}