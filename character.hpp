
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a pure virtual class. It is used to Implement characters using
polymorphism. Not sure if I really needed the cpp file for this but included anyway.
*************************************************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
using std::string;


class character
{
public:
	character();
	virtual string getType() = 0; // Pure virtual function
	virtual int getAttackNumberOfDice() = 0; // Pure virtual function
	virtual int getAttackSidesOfDice() = 0; // Pure virtual function
	virtual int getDefenseNumberOfDice() = 0; // Pure virtual function
	virtual int getDefenseSidesOfDice() = 0; // Pure virtual function
	virtual int getArmor() = 0; // Pure virtual function
	virtual int getStrengthPoints() = 0; // Pure virtual Function
};

#endif