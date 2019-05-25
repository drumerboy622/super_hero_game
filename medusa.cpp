
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Medusa
data bits about the character.  These functions will be called from the game if the Medusa is
selected to participate.
*************************************************************************************************/
#include "medusa.hpp"

string medusa::getType() { return "Medusa"; } // Return the Name of the Character
int medusa::getAttackNumberOfDice() { return 2; } // Get the attack number of Dice for the character
int medusa::getAttackSidesOfDice() { return 6; } // Get the attack number of sides for the character
int medusa::getDefenseNumberOfDice() { return 1; } // Get the defense number of Dice for the character
int medusa::getDefenseSidesOfDice() { return 6; } // Get the defense number of Dice for the character
int medusa::getArmor() { return 3; } // Get and return the armor amount for the character
int medusa::getStrengthPoints() { return 8; } // Get initial strength points


