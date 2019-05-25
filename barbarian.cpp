
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Barbarian
data bits about the character.  These functions will be called from the game if the Barbarian is
selected to participate.
*************************************************************************************************/
#include "barbarian.hpp"

string barbarian::getType() { return "Barbarian"; }// Return the Name of the Character
int barbarian::getAttackNumberOfDice() { return 2; }// Get the attack number of Dice for the character
int barbarian::getAttackSidesOfDice() { return 6; } // Get the attack number of sides for the character
int barbarian::getDefenseNumberOfDice() { return 2; } // Get the defense number of Dice for the character
int barbarian::getDefenseSidesOfDice() { return 6; } // Get the defense number of Dice for the character
int barbarian::getArmor() { return 0; } // Get and return the armor amount for the character
int barbarian::getStrengthPoints() { return 12; } // Get initial strength points
