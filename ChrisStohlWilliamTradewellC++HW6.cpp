// ChrisStohlWilliamTradewellC++HW6.cpp : Defines the entry point for the console application.
// Author: Chris Stohl, William Tradewell

#include "stdafx.h"
#include "header.h"

using namespace std;

int main()
{


	cout << "      _______     _______ " << " | " << "___              ___" << endl;
	cout << "-----/   ___/----/ _____/-" << " | " << "\\  \\------------/  /" << "  ------------------------  " << endl;
	cout << "----/  /--------/ /____---" << " | " << "-\\  \\  ______  /  /-" << " |       Christopher      | " << endl;
	cout << "---/  /--------/____  /---" << " | " << "--\\  \\/  __  \\/  /--" <<" |            &           | " << endl;
	cout << "--/  /____----_____/ /----" << " | " << "---\\    /--\\    /---" << " |         William        | " << endl;
	cout << "-/_______/---/______/-----" << " | " << "----\\__/----\\__/----" << "  ------------------------  " << endl;
	cout << endl;

	int opNumber = 0;
	string inputCSV = ""; // May need getline instead of cin.

	cout << "Select an option" << endl;
	cout << "1) Load Contacts" << endl;
	cout << "2) Find Contact" << endl;
	cout << "3) Delete Contact" << endl;
	cout << "4) Delete all Contacts" << endl;
	cout << "5) End Program" << endl;

	while (opNumber == 0)
	{
		cin >> opNumber;
		cin.clear();
		cin.ignore(100, '\n');
	}

	do
	{
		switch (opNumber) // First time using switches!! Used for the Menu.
		{
		case 1:
			cout << "good1" << endl;

			opNumber = 6;
			break;
		case 2:
			cout << "good2" << endl;
			opNumber = 6;
			break;
		case 3:
			cout << "good3" << endl;
			opNumber = 6;
			break;
		case 4:
			cout << "good4" << endl;
			opNumber = 6;
			break;
		case 5:
			cout << "good5" << endl;
			return 0;
		case 6:
			while (opNumber == 6)
			{
				cin >> opNumber;
				cin.clear();
				cin.ignore(100, '\n');
			}
			break;


		default:
			opNumber = 0;
			cout << "error" << endl;
		}

		

	} while (opNumber != 0);


	system("pause");
    return 0;
}

