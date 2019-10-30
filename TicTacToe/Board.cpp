#include "Board.h"

/*
*  This is parameterized constructor.
*/
Board::Board(Player *player1, Player *player2)
{
	set_Player1(player1);
	set_Player2(player2);
}

/*
*  This function returns the first player in the game.
*
*  Return : Returns Player object. 
*/
Player* Board::get_Player1()
{
	return player1;
}

/*
*  This function returns the second player in the game.
*
*  Return : Returns Player object.
*/
Player* Board::get_Player2()
{
	return player2;
}

/*
*  This function sets the first player in the game.
*/
void Board::set_Player1(Player* player)
{
	this->player1 = player;
}

/*
*  This function sets the second player in the game.
*/
void Board::set_Player2(Player* player)
{
	this->player2 = player;
}


