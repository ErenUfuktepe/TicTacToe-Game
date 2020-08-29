#include "Board.h"

/*
*  This is default constructor to create the board.
*  All elements set to -1 which means empty cell.
*/
Board::Board()
{
	this->matrix = new int* [3];
	for (int i = 0; i < 3; ++i) 
	{
		this->matrix[i] = new int[3];
	}

	this->matrix[0][0] = -1;
	this->matrix[0][1] = -1;
	this->matrix[0][2] = -1;

	this->matrix[1][0] = -1;
	this->matrix[1][1] = -1;
	this->matrix[1][2] = -1;

	this->matrix[2][0] = -1;
	this->matrix[2][1] = -1;
	this->matrix[2][2] = -1;
}

/*
*  This function returns the symbol of the player.
*
*  Return : X or O
*/
int** Board::get_matrix()
{
	return this->matrix;
}

/*
*  This function sets the given value to given row and column.
*/
void Board::set_matrix_element(int row, int column, int value)
{
	this->matrix[row][column] = value;
}
