#include<iostream>

using namespace std;

class Player 
{
	public:
		char symbol;
		int type;
		char get_symbol();
		void set_symbol(char symbol);
		int get_type();
		void set_type(int type);
		Player(char symbol, int type);
};