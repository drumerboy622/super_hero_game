/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Vampire
data bits about the character. For specific function information see vampire.cpp.
*************************************************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "character.hpp"

class vampire : public character
{
public:
	string getType();
	int getAttackNumberOfDice(); 
	int getAttackSidesOfDice(); 
	int getDefenseNumberOfDice(); 
	int getDefenseSidesOfDice(); 
	int getArmor(); 
	int getStrengthPoints(); 
};

#endif // !VAMPIRE_HPP
