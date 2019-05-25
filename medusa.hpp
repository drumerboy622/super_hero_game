/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Medusa
data bits about the character. For specific function information see medusa.cpp.
*************************************************************************************************/
#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "character.hpp"

class medusa : public character
{
	string getType();
	int getAttackNumberOfDice();
	int getAttackSidesOfDice();
	int getDefenseNumberOfDice();
	int getDefenseSidesOfDice();
	int getArmor();
	int getStrengthPoints();

};
#endif 