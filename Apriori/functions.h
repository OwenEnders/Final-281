/*  Author: Owen Enders
            Sam Poquette

Class:   CSI-281-03

Assignment: Final

Date Assigned: 11/19

Due Date:  12/12

Description:  This program analyzes data sets given to it using the apriori algorithm
Certification of Authenticity:
I certify that this is entirely my own work, except where I have
given fully - documented references to the work of others.
I understand the definition and consequences of plagiarism and acknowledge
that the assessor of this assignment may, for the purpose of assessing this
assignment:
-Reproduce this assignment and provide a copy to another member of
academic staff; and / or
- Communicate a copy of this assignment to a plagiarism checking service (which
may then retain a copy of this assignment on its database for the purpose of
future plagiarism checking)
*/

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/*      Pre:  2d array has been allocated
*     Post:  the first 9X9 of the array is diplayed
*  Purpose:  to display the array and show that information has been
*            loaded correctly.
*************************************************************************/
void arrayDisplayer(int**);

/*      Pre:  none
*     Post:  inforamtion has been loaded into a 2d dynamic array
*  Purpose:  To obtain information for the program
*************************************************************************/
int** buildDatabase(string);
