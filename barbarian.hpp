/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Barbarian
data bits about the character. For specific function information see barbarian.cpp.
*************************************************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "character.hpp"

class barbarian : public character
{
	string getType();
	int getAttackNumberOfDice();
	int getAttackSidesOfDice();
	int getDefenseNumberOfDice();
	int getDefenseSidesOfDice();
	int getArmor();
	int getStrengthPoints();

};


#endif // !BARBARIAN_HPP



