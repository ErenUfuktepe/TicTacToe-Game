#include<iostream>

using namespace std;

class Board
{
	public:
		int** matrix;
		int** get_matrix();
		void set_matrix_element(int row, int column, int value);
		Board();
};