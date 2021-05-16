#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	string ssn;
	
	cout << "Nine-character Social Security Number: ";
	getline(cin, ssn);

	for (int i = 0; i < ssn.size(); ++i)
	{
		if (isdigit(ssn.at(i)) == 0)
		{
			cout << "All characters must be numbers" << endl;
			exit(0);
		}
	}
	if (ssn.length() == 9)
	{
		ssn.insert(3, "-");
		ssn.insert(6, "-");

		cout << "Social Security Number: " << ssn << endl;
	}
	else
	cout << "The number must contain 9 Characters" << endl;
	return 0;
}
