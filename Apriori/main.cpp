#include "classes.h"
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

		cout << "Please select an option.\n\nR - Run Apriori\nQ - Quit\n\n";
		cin >> entry;

		if (entry == 'Q' || entry == 'q')
		{
			cout << "\n";
			shouldExit = true;
		}
		else if (entry == 'R' || entry == 'r')
		{
			//run apriori
		}
		else
		{
			cout << "\nInvalid entry!\n\n";
		}
	}

	system("pause");

}