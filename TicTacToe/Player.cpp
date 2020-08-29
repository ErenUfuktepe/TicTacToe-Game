#include "Player.h"

/*
*  This is parameterized constructor to create a player.
*  Symbol -> X or O.
*  Type -> 0 refers to humans and 1 refers to computer. 
*/
Player::Player(char symbol, int type)
{
	set_symbol(symbol);
	set_type(type);
}

/*
*  This function returns the symbol of the player.
*  
*  Return : X or O
*/
char Player::get_symbol()
{
	return this->symbol;
}

/*
*  This function sets the symbol of the player.
*/
void Player::set_symbol(char symbol)
{
	this->symbol = symbol;
}

/*
*  This function returns whether the player is computer or not.
*
*  Return : 1 -> Player is computer.
*    		0 -> Player is human.
*/
int Player::get_type()
{
	return this->type;
}

/*
*  This function sets the player type. If the player is human, type should be 0.
*  If the player is computer, type should be 1.
*/
void Player::set_type(int type)
{
	this->type = type;
}