
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Blue Men
data bits about the character.  These functions will be called from the game if the Blue Men is
selected to participate.
*************************************************************************************************/
#include "blueMen.hpp"

string blueMen::getType() { return "Blue Men"; }; // Return the Name of the Character
int blueMen::getAttackNumberOfDice() { return 2; }; // Get the attack number of Dice for the character
int blueMen::getAttackSidesOfDice() { return 10; }; // Get the attack number of sides for the character
int blueMen::getDefenseNumberOfDice() { return 3; }; // Get the defense number of Dice for the character
int blueMen::getDefenseSidesOfDice() { return 6; }; // Get the defense number of Dice for the character
int blueMen::getArmor() { return 3; }; // Get and return the armor amount for the character
int blueMen::getStrengthPoints() { return 12; }; // Get initial strength points
