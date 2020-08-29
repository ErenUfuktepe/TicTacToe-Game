#include "Referee.h"

/*
*  This is parameterized constructor to create a referee.
*  If game type is 0, human vs human game.
*  If game type is 1, human vs computer game.
*/
Referee::Referee(int game_type)
{
	//Human vs Human
	if (!game_type)
	{
		this->player1 = new Player('X', 0);
		this->player2 = new Player('O', 0);
	}
	else // Human vs Computer
	{
		this->player1 = new Player('X', 0);
		this->player2 = new Player(79, 1);
	}
	this->board = new Board();
	this->player_turn = 0;
}

/*
*  Returns the first player.
*/
Player* Referee::get_player1()
{
	return this->player1;
}

/*
*  Returns the second player.
*/
Player* Referee::get_player2()
{
	return this->player2;
}

/*
*  Returns the board.
*/
Board* Referee::get_board()
{
	return this->board;
}

/*
*  Returns the which player got the turn.
*/
int Referee::get_player_turn()
{
	return this->player_turn;
}

/*
*  This function changes the turn.
*/
void Referee::set_player_turn(int turn)
{
	this->player_turn = turn;
}

/*
*  This function resets the board.
*/
void Referee::reset_board()
{
	this->player_turn = 0;
	this->board = new Board();
}

/*
*  This function returns player move charecter.
*/
string* Referee::make_move(int row, int column)
{
	string* result = new string[3];
	// First player move
	if (!this->player_turn)
	{
		this->player_turn = 1;
		this->board->set_matrix_element(row, column, 0);
		result[0] = this->get_player1()->get_symbol();
		result[1] = "Player 1";
		if(is_win(this->board->get_matrix(), 0))
		{
			result[1] = "Player 1 Wins!";
			return result;
		}
		else if (is_draw(this->board->get_matrix()))
		{
			result[1] = "Draw!";
			return result;
		}
		
		if (this->get_player2()->get_type())
		{
			//Computer move
			int *move = new int[2];
			move = find_best_move();
			result[2] = to_string(move[0]) + to_string(move[1]);
		}
		return result;
	}
	// Second player or computer move
	else
	{
		this->player_turn = 0;
		this->board->set_matrix_element(row, column, 1);
		result[0] = this->get_player2()->get_symbol();
		result[1] = "Player 2";
		if (is_win(this->board->get_matrix(), 1))
		{
			result[1] = "Player 2 Wins!";
		}
		else if (is_draw(this->board->get_matrix()))
		{
			result[1] = "Draw!";
		}
		return result;
	}
}

/*
* This function is to check whether player wins the game or not.
* To check the first player, the player parameter should be 0, 
* and 1 is for computer or second player. 
*/
int Referee::is_win(int** board, int player)
{
	for (int i = 0; i < 3; ++i) {
		if ((board[i][0] == player) && (board[i][0] == board[i][1])
			&& (board[i][1] == board[i][2])) {
			return 1;
		}
		if ((board[0][i] == player) && (board[0][i] == board[1][i])
			&& (board[1][i] == board[2][i])) {
			return 1;
		}
	}
	if (board[1][1] == player)
	{
		if ((board[1][1] == board[0][0])
			&& (board[1][1] == board[2][2]))
		{
			return 1;
		}
		if ((board[1][1] == board[0][2])
			&& (board[1][1] == board[2][0]))
		{
			return 1;
		}
	}

	return 0;
}

/*
*  This function returns 1 if there is a tie. Otherwise returns 0.
*/
int Referee::is_draw(int** board)
{
	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 3; ++j) 
		{
			if (board[i][j] == -1)
			{
				return 0;
			}
		}
	}
	return 1;
}

/*
* Minimax algorithm implementation.
*/
int Referee::minimax(int** board, int depht, int player)
{
	if (is_win(board, 1))
	{
		return 1000;
	}
	else if (is_win(board, 0))
	{
		return -1000;
	}
	else if (is_draw(board))
	{
		return 0;
	}
	else if(player)
	{
		int bestScore = -1000;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (this->board->get_matrix()[i][j] == -1)
				{
					board[i][j] = 1;
					bestScore = std::max(bestScore, minimax(board, depht + 1, !player));
					board[i][j] = -1;
				}
			}
		}
		return bestScore;
	}
	else 
	{
		int bestScore = 1000;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (this->board->get_matrix()[i][j] == -1)
				{
					board[i][j] = 0;
					bestScore = std::min(bestScore, minimax(board, depht + 1, !player));
					board[i][j] = -1;
				}
			}
		}
		return bestScore;
	}
}

/*
* Returns the best move for computer using minimax algorithm. 
*/
int* Referee::find_best_move()
{
	int *move = new int[2];
	int maxScore = -1000;
	int** board = this->board->get_matrix();
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			if (board[i][j] == -1)
			{
				board[i][j] = 1;
				int score = minimax(board, 0, 0);
				board[i][j] = -1;
				if (maxScore < score)
				{
					move[0] = i;
					move[1] = j;
					maxScore = score;
				}
			}
		}
	}
	return move;
}
