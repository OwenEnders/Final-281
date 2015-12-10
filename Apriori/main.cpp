#include "classes.h"
#include "functions.h"
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
			cout << "Please enter filename.\n";
			cin >> filename;
			buildDatabase(filename);
		}
		else
		{
			cout << "\nInvalid entry!\n\n";
		}
	}

	cin.get();

}