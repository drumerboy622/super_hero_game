
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Vampire
data bits about the character.  These functions will be called from the game if the Vampire is
selected to participate. 
*************************************************************************************************/
#include "vampire.hpp"

string vampire::getType() { return "Vampire"; } // Return the Name of the Character
int vampire::getAttackNumberOfDice() { return 1; } // Get the attack number of Dice for the character
int vampire::getAttackSidesOfDice() { return 12; } // Get the attack number of sides for the character
int vampire::getDefenseNumberOfDice() { return 1; } // Get the defense number of Dice for the character
int vampire::getDefenseSidesOfDice() { return 6; } // Get the defense number of Dice for the character
int vampire::getArmor() { return 1; } // Get and return the armor amount for the character
int vampire::getStrengthPoints() { return 18; } // Get initial strength points




