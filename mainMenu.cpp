
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/26/2018
Description: This class is responsible to provide the Fantasy Combat Game with all the menu's 
assocaited with this program. These menus will be called and return 

*************************************************************************************************/
#include"mainMenu.hpp"



int mainMenu::mainMenuOne()
{
	int choice; // User's choice Variable

	//Main Menu display
	cout << "Fantasy Combat Game            By Matthew Solbrack" << endl << endl;

	cout << "Menu" << endl;
	cout << "----" << endl;
	cout << "1. Play Game" << endl;
	cout << "2. Exit Game" << endl << endl;

	cout << "Please choose from above [1 or 2]: ";
	cin >> choice;

	//Input validation
	while (!cin || choice < 1 || choice > 2)
	{
		cout << "Try Again:  ";
		cin.clear();
		cin.ignore();
		cin >> choice;
	}
	
	return choice;
}

/******************************************************************************************
Description: This method is the first menu that the user is prompted to. It returns
the users choice to play or quit. 
*******************************************************************************************/

int mainMenu::playAgain()
{
	int choice;

	cout << endl << "Menu" << endl;
	cout << "----" << endl;
	cout << "1. Play Again" << endl;
	cout << "2. Exit Game" << endl << endl;

	cout << "Please choose from above [1 or 2]: ";
	cin >> choice;

	//Input validation
	while (!cin || choice < 1 || choice > 2)
	{
		cout << "Try Again:  ";
		cin.clear();
		cin.ignore();
		cin >> choice;
	}

	return choice;
}

