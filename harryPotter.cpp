
/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This class is a polymorphic class of character. This specifically holds the Harry Potter
data bits about the character.  These functions will be called from the game if the Harry Potter is
selected to participate.
*************************************************************************************************/
#include "harryPotter.hpp"

string harryPotter::getType() { return "Harry Potter"; }; // Return the Name of the Character
int harryPotter::getAttackNumberOfDice() { return 2; }; // Get the attack number of Dice for the character
int harryPotter::getAttackSidesOfDice() { return 6; }; // Get the attack number of sides for the character
int harryPotter::getDefenseNumberOfDice() { return 2; }; // Get the defense number of Dice for the character
int harryPotter::getDefenseSidesOfDice() { return 6; }; // Get the defense number of Dice for the character
int harryPotter::getArmor() { return 0; }; // Get and return the armor amount for the character
int harryPotter::getStrengthPoints() { return 10; }; // Get initial strength points
	
