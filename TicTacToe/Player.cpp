#include "Player.h"

/*
*  This is parameterized constructor.
*/
Player::Player(string symbol, int move_turn, int is_computer)
{
	set_symbol(symbol);
	set_move_turn(move_turn);
	set_is_computer(is_computer);
}

/*
*  This function returns the symbol of the player.
*  
*  Return : X or O
*/
string Player::get_symbol()
{
	return string();
}

/*
*  This function sets the symbol of the player.
*/
void Player::set_symbol(string symbol)
{
	this->symbol = symbol;
}

/*
*  This function returns the move turn of the player.
*
*  Return : 1 -> Player's turn.
*			0 -> Not Player's turn. 
*/
int Player::get_move_turn()
{
	return move_turn;
}

/*
*  This function returns whether the player is computer or not.
*
*  Return : 1 -> Player is computer.
*    		0 -> Player is not computer.
*/
int Player::get_is_computer()
{
	return is_computer;
}

/*
*  This function sets the move turn of the player.
*/
void Player::set_move_turn(int move_turn)
{
	this->move_turn = move_turn;
}

/*
*  This function sets the player type.
*/
void Player::set_is_computer(int is_computer)
{
	this->is_computer = is_computer;
}


