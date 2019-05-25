

/************************************************************************************************
Program Name: Fantasy Combat Game
Program Developer: Matthew Solbrack
Date: 07/28/2018
Description: This is the main game play functions for the Fantasy Combat Game. It works with the
character class and all its inherited characters. Each combat between 2 characters ends when one
of the characters die.  Each round consists of two attacks, one for each character. For each
attack, attacker and defender both generate dice rolls. The type and number of dice is listed above
in the table.  The actual damage inflicted from the attacker onto the defender is calculated as
follows: Damage = attacker’s roll – defender’s roll – defender’s armor
Then the value of that damage is subtracted from the defender’s strength points.
*************************************************************************************************/
#include "fantasyCombatGame.hpp"

fantasyCombatGame::fantasyCombatGame()
{	srand(time(0));

	int characterOne, characterTwo; //Variables for two characters

	cout << "\nTo play the game you must pick two characters from the following list : " << endl << endl;
	cout << "1. Vampire" << endl;
	cout << "2. Barbarian" << endl;
	cout << "3. Blue Men" << endl;
	cout << "4. Medusa" << endl;
	cout << "5. Harry Potter" << endl << endl;
	cout << "Please choose your 1st character[1 through 5]: ";
	cin >> characterOne;

	//Input validation
	while (!cin || characterOne < 1 || characterOne > 5)
	{
		cout << "Try Again:  ";
		cin.clear();
		cin.ignore();
		cin >> characterOne;
	}

	//Initialize the pointer object for the character picked for player 1
	if (characterOne == 1)
	{
		vampire plyOneVam;
		playerOne = &plyOneVam;
	}
	else if (characterOne == 2)
	{
		barbarian plyOneBar;
		playerOne = &plyOneBar;
	}
	else if (characterOne == 3)
	{
		blueMen plyOneBlu;
		playerOne = &plyOneBlu;
	}
	else if (characterOne == 4)
	{
		medusa plyOneMed;
		playerOne = &plyOneMed;
	}
	else if (characterOne == 5)
	{
		harryPotter plyOneHar;
		playerOne = &plyOneHar;
	}

	cout << "Please choose your 2nd character[1 through 5] : ";
	cin >> characterTwo;

	//Input validation
	while (!cin || characterTwo < 1 || characterTwo > 5)
	{
		cout << "Try Again:  ";
		cin.clear();
		cin.ignore();
		cin >> characterTwo;
	}


	//Initialize the pointer object for the character picked for player 2
	if (characterTwo == 1)
	{
		vampire plyTwoVam;
		playerTwo = &plyTwoVam;
	}
	else if (characterTwo == 2)
	{
		barbarian plyTwoBar;
		playerTwo = &plyTwoBar;
	}
	else if (characterTwo == 3)
	{
		blueMen plyTwoBlu;
		playerTwo = &plyTwoBlu;
	}
	else if (characterTwo == 4)
	{
		medusa plyTwoMed;
		playerTwo = &plyTwoMed;
	}
	else if (characterTwo == 5)
	{
		harryPotter plyTwoHar;
		playerTwo = &plyTwoHar;
	}

	beginGame();

}


void fantasyCombatGame::beginGame()
{
	int playerOneStrength = playerOne->getStrengthPoints(); // initailize the Strength points for Player One
	int playerTwoStrength = playerTwo->getStrengthPoints(); // initialize the Strength points for Player Two
	int plays = 1, // initializes the control unit for the while statement
		hogwarts = 0, // initializes Harry Potters Special Power
		round = 1; // Keeps track of the round of fighting that the game is on
	int defendersArmor, // holds the deferenders armor
		attackersDiceRole, // holds the number for the attackers dice Roll
		defendersDiceRole; // holds the number for the defenders dice Roll

	while (playerOneStrength > 0 && playerTwoStrength > 0)
	{
		int charm = rand() % 2 + 0;
		int damage = 0, glare = 0;

// Attacker Type

		if (plays == 1)
		{
			cout << "\nRound " << round << endl;
			cout << "----------" << endl;
		}
		else
		{
			cout << "\nRound " << round << " (part 2)" << endl;
			cout << "----------------" << endl;
		}
		
		if (plays == 1)
			cout << "	Player 1 Attacks with: " << playerOne->getType() << endl << endl;
		else
			cout << "	Player 2 Attacks with: " << playerTwo->getType() << endl << endl;

// Defender Type

		if (plays == 1)
		{
			cout << "	Player 2 Defends with: " << playerTwo->getType() << endl;
			defendersArmor = playerTwo->getArmor();
			cout << "	Defender Armor: " << defendersArmor << endl;
			cout << "	Defender Strength Points: " << playerTwoStrength << endl << endl;
		}
		else
		{
			cout << "	Player 1 Defends with: " << playerOne->getType() << endl;
			defendersArmor = playerOne->getArmor();
			cout << "	Defender Armor: " << defendersArmor << endl;
			cout << "	Defender Strength Points: " << playerOneStrength << endl << endl;
		}

// Attacker's Attack dice roll

		cout << "	Attack Sequence" << endl;
		cout << "	---------------" << endl;



		if (plays == 1)
		{
			attackersDiceRole = (rand() % playerOne->getAttackSidesOfDice() + 1) * playerOne->getAttackNumberOfDice();
			cout << "	Attacker's Dice Roll: " << attackersDiceRole << endl;
			if (playerOne->getType() == "Medusa" && attackersDiceRole == 12)
				glare = 1;
		}
		else
		{
			attackersDiceRole = (rand() % playerTwo->getAttackSidesOfDice() + 1) * playerTwo->getAttackNumberOfDice();
			cout << "	Attacker's Dice Roll: " << attackersDiceRole << endl;
			if (playerTwo->getType() == "Medusa" && attackersDiceRole == 12)
				glare = 2;
		}


//The defender's defends dice roll

		if (plays == 1)
		{
			if (playerTwo->getType() == "Blue Men" && playerTwoStrength <= 8)
			{
				if (playerTwoStrength <= 4)
				{
					cout << "	Blue Men Special Ability: The Mob has decreased the number of defensive dice by one!" << endl;
					defendersDiceRole = (rand() % playerTwo->getDefenseSidesOfDice() + 1) * 1;
				}
				else
				{
					cout << "	Blue Men Special Ability: The Mob has decreased the number of defensive dice by one!" << endl;
					defendersDiceRole = (rand() % playerTwo->getDefenseSidesOfDice() + 1) * 2;
				}
			}
			else
			defendersDiceRole = (rand() % playerTwo->getDefenseSidesOfDice() + 1) * playerTwo->getDefenseNumberOfDice();
		}
		else
		{
			if (playerOne->getType() == "Blue Men" && playerOneStrength <= 8)
			{
				if (playerOneStrength <= 4)
				{
					cout << "	Blue Men special ability: The Mob has decreased the number of defensive dice by one!" << endl;
					defendersDiceRole = (rand() % playerOne->getDefenseSidesOfDice() + 1) * 1;
				}
				else
				{
					cout << "	Blue Men special ability: The Mob has decreased the number of defensive dice by one!" << endl;
					defendersDiceRole = (rand() % playerOne->getDefenseSidesOfDice() + 1) * 2;
				}
			}
			else
			defendersDiceRole = (rand() % playerOne->getDefenseSidesOfDice() + 1) * playerOne->getDefenseNumberOfDice();
			
		}

			cout << "	Defender's Dice Roll: " << defendersDiceRole << endl << endl;



//The total inflicted damage calculation

			cout << "	Damage Report" << endl;
			cout << "	-------------" << endl;

		if (playerTwo->getType() == "Vampire" && plays == 1)
		{
			if (charm == 1 || glare == 1)
			{
				damage = 0;
				cout << "	The special abilities of the Vampire \"Charm\" stopped the opponent from attacking"
					<< endl;
				glare = 0;
			}
			else
			{
				damage = attackersDiceRole - defendersDiceRole - defendersArmor;
				cout << "	Total inflicted Damage on Player 2: " << damage << endl;
			}

		}

		else if (playerOne->getType() == "Vampire" && plays == 0)
		{
			if (charm == 1 || glare == 2)
			{
				damage = 0;
				cout << "	The special abilities of the Vampire \"Charm\" stopped the opponent from attacking"
					<< endl;
				glare = 0;
			}
			else
			{
				damage = attackersDiceRole - defendersDiceRole - defendersArmor;
				cout << "	Total inflicted Damage on Player 1: " << damage << endl;
			}
		}
		else
		{
			damage = attackersDiceRole - defendersDiceRole - defendersArmor;
			cout << "	Total inflicted Damage: " << damage << endl;
		}


//The defender's updated strength point amount after subtracting damage

		if (glare == 1)
		{
			cout << "	Medusa rolled a 12 and used her Glare to turn the opponent into Stone!" << endl;
			playerTwoStrength = 0;
		}
		else if (glare == 2)
		{
			cout << "	Medusa rolled a 12 and used her Glare to turn the opponent into Stone!" << endl;
			playerOneStrength = 0;
		}
		else
		{
			if (damage > 0)
			{
				if (plays == 1)
					playerTwoStrength = playerTwoStrength - damage;
				else
					playerOneStrength = playerOneStrength - damage;
			}
		}

// Hogwarts/Harry Potter Special Abilities

		if (playerTwo->getType() == "Harry Potter" && playerTwoStrength <= 0 && plays == 1 && hogwarts == 0)
		{
			playerTwoStrength = 20;
			hogwarts = 1;
			cout << "	Harry Potter has used his Special Abilities to come back to life!" << endl;
		}
		else if (playerOne->getType() == "Harry Potter" && playerOneStrength <= 0 && plays == 0 && hogwarts == 0)
		{
			playerOneStrength = 20;
			hogwarts = 1;
			cout << "	Harry Potter has used his Special Abilities to come back to life!" << endl;
		}


// Display the WIN or the updated strength of the Defender

		if (playerOneStrength <= 0)
			cout << endl << "		" << playerTwo->getType() << " WINS!" << endl;
		else if (playerTwoStrength <= 0)
			cout << endl << "		" << playerOne->getType() << " WINS!" << endl;
		else if (plays == 1)
			cout <<	"	Player 2 updated strength: " << playerTwoStrength << endl << endl;
		else
			cout << "	Player 1 updated strength: " << playerOneStrength << endl << endl;

// Swap the defender and the attacker

		if (plays == 1)
			plays = 0;
		else
		{
			plays = 1;
			++round;
		}
	};

}




int main()
{
	//Create an object to the mainMenu
	mainMenu game;

	//Call the initial menu options 
	int choice = game.mainMenuOne();

	//loop the play agian menu until the user wants to stop
	while (choice == 1)
	{
		fantasyCombatGame();
		if (game.playAgain() == 1)
			choice = 1;
		else
			choice = 0;
	}

	return 0;
}
