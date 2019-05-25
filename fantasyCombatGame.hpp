/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This is the main game play class for the Fantasy Combat Game. It works with the 
character class and all its inherited characters. Each combat between 2 characters ends when one 
of the characters die.  Each round consists of two attacks, one for each character. For each 
attack, attacker and defender both generate dice rolls. The type and number of dice is listed above 
in the table.  The actual damage inflicted from the attacker onto the defender is calculated as 
follows: Damage = attacker’s roll – defender’s roll – defender’s armor
Then the value of that damage is subtracted from the defender’s strength points.
*************************************************************************************************/

#ifndef FANTASYCOMBATGAME_HPP
#define FANTASYCOMBATGAME_HPP

#include "mainMenu.hpp"
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "medusa.hpp"
#include "harryPotter.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


class fantasyCombatGame
{
private:
	character * playerOne, * playerTwo;
	void beginGame();
public:
	fantasyCombatGame();

};

#endif
