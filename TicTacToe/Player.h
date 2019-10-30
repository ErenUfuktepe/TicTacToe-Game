#include<iostream>

using namespace std;

class Player {

private:
	string symbol;
	int move_turn;
	int is_computer;
	void set_symbol(string symbol);
	void set_is_computer(int is_computer);
	
public:
	Player(string symbol, int move_turn, int is_computer);
	string get_symbol();
	int get_move_turn();
	int get_is_computer();
	void set_move_turn(int move_turn);
};