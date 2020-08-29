#include <iostream>
#include <string> 
#include "Board.h"
#include "Player.h"
#include <algorithm> 

using namespace std;

class Referee
{
	public:
		int player_turn;
		Player* player1;
		Player* player2;
		Board* board;
		Player* get_player1();
		Player* get_player2();
		Board* get_board();
		int get_player_turn();
		void set_player_turn(int turn);
		Referee(int game_type);
		void reset_board();
		string* make_move(int row, int column);
		int is_win(int** board, int player);
		int is_draw(int** board);

		int minimax(int** board, int depht, int player);
	private:
		int* find_best_move();
};