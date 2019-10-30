#include "Rules.h"

/*
*  Parameterized Constructor
*/
Rules::Rules(Board* borad)
{
	set_Board(borad);
	set_buttons();
	initialize_game();
}

/*
*  This function sets the game and returns nothing.
*/
void Rules::set_Board(Board* board)
{
	this->board = board;
}

/*
*  This function sets the buttons in the game and
*  returns nothing.
*/
void Rules::set_buttons()
{
	for (int index = 1; index < 10; index++) {
		this->buttons.push_back(index);
	}
	this->buttons = buttons;
}

/*
*  This function initialize the game board and returns nothing.
*/
void Rules::initialize_game()
{
	if (check_number_of_player()) {
		for (int index = 1; index < 10; index++) {
			game[index] = "";
		}
	}
}

/*
*  This function check whether there two valid players
*  in the game.
*
*  Return : 0 -> There are not two valid players in the game.
*			1 -> There are two valid players in the game.
*/
int Rules::check_number_of_player()
{
	if (board->get_Player1() != NULL && board->get_Player2() != NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

/*
*  This function checks whether there are possiable moves in game.
*
*  Return : 0 -> Game is not over.
*			1 -> Game is over.
*/
int Rules::is_finish()
{
	if (buttons.size() == 0) {
		return 1;
	}
	return 0;
}

/*
*  This function removes one element from the button vector.
*  It takes one parameters as an input which is the button
*  element that is going to remove from the vector.
*
*  Return : 0 -> When the element cannot found in the vector.
*			1 -> When the element successfully remove from vector.
*/
int Rules::remove_button(int button)
{
	for (std::vector<int>::iterator ItemIterator = buttons.begin(); ItemIterator != buttons.end(); ItemIterator++)
	{
		if ((*ItemIterator) == button)
		{
			buttons.erase(ItemIterator);
			return 1;
		}
	}
	return 0;
}

/*
*  This function removes one element from the vector.
*  It takes two parameters as an input which are vector
*  which element that is going to remove from and a
*  element that is remove from the vector.
*
*  Return : 0 -> When the element cannot found in the vector.
*			1 -> When the element successfully remove from vector.
*/
int Rules::remove(vector<int> vector, int element)
{
	for (std::vector<int>::iterator ItemIterator = vector.begin(); ItemIterator != vector.end(); ItemIterator++)
	{
		if ((*ItemIterator) == element)
		{
			vector.erase(ItemIterator);
			return 1;
		}
	}
	return 0;
}

/*
*  This function checks the game result.
*
*  Return : 0 -> If there is no winner in the game
*			1 -> First player win the game.
*			2 -> Second player win the game.
*/
int Rules::check_game_result(map<int, string> game)
{
	string symbol = "";
	if (!(board->get_Player1()->get_move_turn())) {
		symbol = "X";
		if (horizontal_check(game, symbol) == 1 || vertical_check(game, symbol) == 1 || diagonal_check(game, symbol) == 1) {
			return 1;
		}
	}
	else {
		symbol = "O";
		if (horizontal_check(game, symbol) == 1 || vertical_check(game, symbol) == 1 || diagonal_check(game, symbol) == 1) {
			return 2;
		}
	}
	return 0;
}

/*
*  This function checks horizontally whether the player wins and it takes
*  two parameters as an input which are the map which is game and the
*  symbol of the player.
*
*  Return : 0 -> Player cannot win.
*			1 -> Player win the game.
*			2 -> Player can win the game.
*/
int Rules::horizontal_check(map<int, string> game, string symbol)
{
	int player_score = 0;
	int flag = 0;
	for (int index = 1; index < 10; index++) {
		if (game[index] == symbol) {
			player_score++;
		}
		if (player_score == 3) {
			return 1;
		}
		if (index == 3 || index == 6 || index == 9) {
			if (player_score == 2) {
				flag = 2;
			}
			player_score = 0;
		}
	}

	if (flag != 0) {
		return 2;
	}

	return 0;
}

/*
*  This function checks vertically whether the player wins and it takes
*  two parameters as an input which are the map which is game and the
*  symbol of the player.
*
*  Return : 0 -> Player cannot win.
*			1 -> Player win the game.
*			2 -> Player can win the game.
*/
int Rules::vertical_check(map<int, string> game, string symbol)
{
	int player_score = 0;
	int flag = 0;

	for (int index = 1; index < 10; index = index + 3) {
		if (game[index] == symbol) {
			player_score++;

			if (player_score == 3) {
				return 1;
			}
		}

		if (index == 7 || index == 8 || index == 9) {
			if (player_score == 2) {
				flag = 2;
			}
			if (index == 7) {
				index = -1;
			}
			if (index == 8) {
				index = 0;
			}
			player_score = 0;
		}
	}

	if (flag != 0) {
		return 2;
	}

	return 0;
}

/*
*  This function checks diagonals whether the player wins and it takes
*  two parameters as an input which are the map which is game and the
*  symbol of the player.
*
*  Return : 0 -> Player cannot win.
*			1 -> Player win the game.
*			2 -> Player can win the game.
*/
int Rules::diagonal_check(map<int, string> game, string symbol)
{
	int player_score = 0;
	int flag = 0;

	for (int index = 1; index < 10; index = index + 4) {
		if (game[index] == "") {
			flag = 1;
		}
		if (game[index] == symbol) {
			player_score++;

			if (player_score == 3) {
				return 1;
			}
		}
	}
	if (player_score == 2 && flag) {
		return 2;
	}

	player_score = 0;

	for (int index = 3; index < 10; index = index + 2) {
		if (index == 9) {
			break;
		}
		if (game[index] == "") {
			flag = 1;
		}
		if (game[index] == symbol) {
			player_score++;

			if (player_score == 3) {
				return 1;
			}
		}
	}

	if (player_score == 2 && flag) {
		return 2;
	}
	return 0;
}

/*
*  This function checks the game result.
*
*  Return : 0 -> If there is no winner in the game
*			1 -> First player win the game.
*			2 -> Second player win the game.
*/
int Rules::check_game_result()
{
	string symbol = "";
	if (!(board->get_Player1()->get_move_turn())) {
		symbol = "X";
		if (horizontal_check(game, symbol) == 1 || vertical_check(game, symbol) == 1 || diagonal_check(game, symbol) == 1) {
			return 1;
		}
	}
	else {
		symbol = "O";
		if (horizontal_check(game, symbol) == 1 || vertical_check(game, symbol) == 1 || diagonal_check(game, symbol) == 1) {
			return 2;
		}
	}
	return 0;
}

/*
*  This function checks whether the game is finish or not
*  and it takes a map as parameter which is the game.
*
*  Return : 1 -> Game is over because there is no move on board.
*			0 -> There possible moves on board and it is not finished.
*/
int Rules::is_finish(map<int, string> game)
{
	for (int i = 1; i < 10; i++) {
		if (game[i] == "") {
			return 0;
		}
	}
	return 1;
}

/*
*  This function puts the player's symbol on the board.
*
*  Return : X -> If the first player made the move
*			O -> If the second player made the move
*/
string Rules::move(int button, string move)
{
	game[button] = move;
	return game[button];
}

/*
*  This function shows the move turn in the game.
*
*  Return : 1 -> First player's turn
*			2 -> Second player's turn
*/
int Rules::move_turn(int button)
{
	if (board->get_Player1()->get_move_turn() == 1) {
		move(button, "X");
		change_turn(button);
		return 1;
	}
	else {
		move(button, "O");
		change_turn(button);
		return 2;
	}
}

/*
*  This function takes a button (number) as an input which is the last players
*  move on board and removes the button from the list of buttons
*  in order to sure that the same move cannot play.
*
*  Return : 0 -> Games is over.
*			1 -> Change the move turn successfully.
*		   -1 -> When something gets wronge.
*/
int Rules::change_turn(int button)
{
	try {
		if (remove_button(button)) {

			if (is_finish()) {
				return 0;
			}

			int temp = board->get_Player1()->get_move_turn();
			board->get_Player1()->set_move_turn(board->get_Player2()->get_move_turn());
			board->get_Player2()->set_move_turn(temp);

			return 1;
		}
		return -1;
	}
	catch (exception) {
		return -1;
	}

}

/*
*  This function decides the first move of the computer.
*
*  Return : Returns suitable and best move for the computer.
*/
int Rules::computer_first_move()
{
	int max = 0;
	int button = 0;
	string symbol = "O";

	for (int index = 1; index < 10; index++) {
		if (game[index] == "") {
			if (index == 5) {
				if (5 > max) {
					return 5;
				}
			}
			else if (index == 1 || index == 3 || index == 7 || index == 9) {
				if (4 >= max) {
					max = 4;
					int i = ((3 + (2 * rand()) % 10) - 2);
					while (game[i] != "") {
						i = ((3 + (2 * rand()) % 10) - 2);
					}
					button = i;
				}
			}
			else if (index == 2 || index == 4 || index == 6 || index == 8) {
				if (3 >= max) {
					max = 3;
					int i = (2 + (2 * rand()) % 8);
					while (game[i] != "") {
						i = (2 + (2 * rand()) % 8);
					}
					button = i;
				}
			}
		}
	}
	return button;
}

/*
*  This function checks whether first player or the computer can win
*  and it takes a player's symbol as a parameter in order to check.  
*
*  Return : If the player can win, it will return the position. Otherwise
*			it will return 0.		
*/
int Rules::check_computer_move(string symbol)
{
	int button = 0;
	int player_score = 0;

	for (int index = 1; index < 10; index++) {
		if (game[index] == symbol) {
			player_score++;
		}
		else if (game[index] == "") {
			button = index;
		}
		if (index == 3 || index == 6 || index == 9) {
			if (player_score == 2 && button != 0) {
				return button;
			}
			button = 0;
			player_score = 0;
		}
	}

	for (int index = 1; index < 10; index = index + 3) {
		if (game[index] == symbol) {
			player_score++;
		}
		else if (game[index] == "") {
			button = index;
		}

		if (index == 7 || index == 8 || index == 9) {
			if (player_score == 2 && button != 0) {
				return button;
			}
			if (index == 7) {
				index = -1;
			}
			if (index == 8) {
				index = 0;
			}
			button = 0;
			player_score = 0;
		}
	}

	for (int index = 1; index < 10; index = index + 4) {
		if (game[index] == "") {
			button = index;
		}
		if (game[index] == symbol) {
			player_score++;
		}
		if (player_score == 2 && index == 9 && button != 0) {
			return button;
		}
	}

	player_score = 0;
	button = 0;

	for (int index = 3; index < 10; index = index + 2) {
		if (index == 9) {
			break;
		}
		if (game[index] == "") {
			button = index;
		}
		if (game[index] == symbol) {
			player_score++;
		}
		if (player_score == 2 && index == 7 && button != 0) {
			return button;
		}
	}

	return 0;
}

/*
*  This function finds and returns the best move in the game and
*  makes the action on the board.
*
*  Return : Resturns move for the computer.
*/
int Rules::computer_move()
{
	int max = 0;
	int button = 0;
	int temp = 0;
	map<int, string> temp_game = game;
	int check_first_player = check_computer_move("O");
	int check_second_player = check_computer_move("X");

	if (buttons.size() == 8) {
		return computer_first_move();
	}

	if (buttons.size() == 6) {
		int chack_special_case = special_case();
		if (chack_special_case) {
			return chack_special_case;
		}
	}

	if (check_first_player) {
		return check_first_player;
	}

	if (check_second_player) {
		return check_second_player;
	}

	for (int index = 1; index < 10; index++) {
		if (game[index] == "") {
			temp = best_move(index, 2, 0, temp_game);
			if (max <= temp) {
				max = temp;
				button = index;
			}
		}
	}

	return button;
}

/*
*  This function finds the bests move in the game for computer. It takes four parameter as 
*  an input. First parameter is the move that is going to be try. Second parameter is player. 
*  One means that first player's move and two means that computer's move. Third parameter is
*  the score in order to find the best move for the computer and the last parameter is the game
*  board to check the moves.
*
*  Return : Returns the best move for the computer in the game.
*			0 -> Cannot find best move.
*/
int Rules::best_move(int button, int player, int score, map<int, string> gametemp)
{
	if (diagonal_check(game, "O") == 2 || horizontal_check(game, "O") == 2 || vertical_check(game, "O") == 2) {
		score = score + 20;
	}

	if (diagonal_check(game, "X") == 2 || horizontal_check(game, "X") == 2 || vertical_check(game, "X") == 2) {
		score = score + 10;
	}

	if (player == 1) {
		gametemp[button] = "X";
		if (check_game_result(gametemp) == 1) {
			score = score - 50;
			return score;
		}
	}
	if (player == 2) {
		gametemp[button] = "O";
		if (check_game_result(gametemp) == 2) {
			score = score + 100;
			return score;
		}
	}
	if (is_finish(gametemp)) {
		return 60;
	}

	for (int i = 1; i < 10; i++) {
		if (gametemp[i] == "") {
			if (player == 1) {
				return best_move(i, 2, score, gametemp);
			}
			if (player == 2) {
				return best_move(i, 1, score, gametemp);
			}
		}
	}

	return 0;
}

/*
*  This function checks special case in the second move in the game. 
*  If there is a special case in the second move, it find a possible 
*  move for computer.
*
*  Return : Returns possible move if there is a special case in the game.
*			0 -> If there is no special case in the game.
*/
int Rules::special_case()
{
	int player_score = 0;
	int button = 0;
	int flag = 0;

	if (game[1] == "X" && game[8] == "X") {
		return 7;
	}
	if (game[2] == "X" && game[9] == "X") {
		return 3;
	}
	if (game[3] == "X" && game[4] == "X") {
		return 1;
	}
	if (game[6] == "X" && game[7] == "X") {
		return 9;
	}

	for (int index = 1; index < 10; index = index + 4) {
		if (game[index] == "O") {
			button = index;
		}
		if (game[index] == "X") {
			player_score++;
		}
		if (player_score == 2 && index == 9 && button != 0) {
			flag = button;
		}
	}

	player_score = 0;
	button = 0;

	for (int index = 3; index < 10; index = index + 2) {
		if (index == 9) {
			break;
		}
		if (game[index] == "O") {
			button = index;
		}
		if (game[index] == "X") {
			player_score++;
		}
		if (player_score == 2 && index == 7 && button != 0) {
			flag = button;
		}
	}

	if (flag) {
		button = (2 + (2 * rand()) % 8);
		while (game[button] != "") {
			button = (2 + (2 * rand()) % 8);
		}
		return button;
	}

	return 0;
}