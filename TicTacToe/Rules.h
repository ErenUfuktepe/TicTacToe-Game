#include "Board.h"
#include <vector>
#include <map>

using namespace std;

class Rules {

public:
	Rules(Board *borad);	
	int move_turn(int button);
	int check_game_result();
	int is_finish();
	int computer_move();
	
private:
	map<int, string> game;
	vector<int> buttons;
	Board* board;
	void initialize_game();
	void set_Board(Board* board);
	void set_buttons();
	int check_number_of_player();
	string move(int button, string move);
	int change_turn(int button);
	int remove(vector<int> vector, int element);
	int check_game_result(map<int, string> game);
	int horizontal_check(map<int, string> game, string symbol);
	int vertical_check(map<int, string> game, string symbol);
	int diagonal_check(map<int, string> game, string symbol);
	int is_finish(map<int, string> gametemp);
	int best_move(int button, int player, int score, map<int, string> temp);
	int computer_first_move();
	int check_computer_move(string symbol);
	int remove_button(int button);
	int special_case();
};