#include <iostream>
#include "Player.h"


class Board {

public:
	Player *player1;
	Player *player2;
	Player* get_Player1();
	Player* get_Player2();

	Board(Player *player1, Player *player2);

private:	
	void set_Player1(Player *player);
	void set_Player2(Player *player);
};