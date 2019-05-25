/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is the header for the mainMenu class. This class was built to hold the 
menu's for the Fantasy Combat Game. 
*************************************************************************************************/
#ifndef MAINMENU_HPP
#define MAINMENU_HPP

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class mainMenu
{

public:
	mainMenu() {}; // default constructor
	int mainMenuOne(); // Main Menu
	int playAgain();// Play again Menu
};

#endif

