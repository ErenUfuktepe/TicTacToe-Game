#pragma once
#include "Rules.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class MainWindow : public System::Windows::Forms::Form
{
public:
	Player *player1;
	Player* player2;
	Rules* rules;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
public:
	Board* board;

public:
	MainWindow(void)
	{
		player1 = new Player("X",1,0);
		player2 = new Player("O",0,0);
		board = new Board(player1, player2);
		rules = new Rules(board);
		
		InitializeComponent();
	}

protected:

	~MainWindow()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
protected:

private:
		
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
	void InitializeComponent(void)
	{
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->button6 = (gcnew System::Windows::Forms::Button());
		this->button7 = (gcnew System::Windows::Forms::Button());
		this->button8 = (gcnew System::Windows::Forms::Button());
		this->button9 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->button10 = (gcnew System::Windows::Forms::Button());
		this->button11 = (gcnew System::Windows::Forms::Button());
		this->button12 = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(168, 89);
		this->button1->Margin = System::Windows::Forms::Padding(4);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(100, 87);
		this->button1->TabIndex = 0;
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(296, 89);
		this->button2->Margin = System::Windows::Forms::Padding(4);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(100, 87);
		this->button2->TabIndex = 1;
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(423, 89);
		this->button3->Margin = System::Windows::Forms::Padding(4);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(100, 87);
		this->button3->TabIndex = 2;
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
		// 
		// button4
		// 
		this->button4->Location = System::Drawing::Point(168, 193);
		this->button4->Margin = System::Windows::Forms::Padding(4);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(100, 87);
		this->button4->TabIndex = 3;
		this->button4->UseVisualStyleBackColor = true;
		this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
		// 
		// button5
		// 
		this->button5->Location = System::Drawing::Point(296, 193);
		this->button5->Margin = System::Windows::Forms::Padding(4);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(100, 87);
		this->button5->TabIndex = 4;
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
		// 
		// button6
		// 
		this->button6->Location = System::Drawing::Point(423, 193);
		this->button6->Margin = System::Windows::Forms::Padding(4);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(100, 87);
		this->button6->TabIndex = 5;
		this->button6->UseVisualStyleBackColor = true;
		this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
		// 
		// button7
		// 
		this->button7->Location = System::Drawing::Point(168, 304);
		this->button7->Margin = System::Windows::Forms::Padding(4);
		this->button7->Name = L"button7";
		this->button7->Size = System::Drawing::Size(100, 87);
		this->button7->TabIndex = 6;
		this->button7->UseVisualStyleBackColor = true;
		this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
		// 
		// button8
		// 
		this->button8->Location = System::Drawing::Point(296, 304);
		this->button8->Margin = System::Windows::Forms::Padding(4);
		this->button8->Name = L"button8";
		this->button8->Size = System::Drawing::Size(100, 87);
		this->button8->TabIndex = 7;
		this->button8->UseVisualStyleBackColor = true;
		this->button8->Click += gcnew System::EventHandler(this, &MainWindow::button8_Click);
		// 
		// button9
		// 
		this->button9->Location = System::Drawing::Point(423, 304);
		this->button9->Margin = System::Windows::Forms::Padding(4);
		this->button9->Name = L"button9";
		this->button9->Size = System::Drawing::Size(100, 87);
		this->button9->TabIndex = 8;
		this->button9->UseVisualStyleBackColor = true;
		this->button9->Click += gcnew System::EventHandler(this, &MainWindow::button9_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(321, 428);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(0, 17);
		this->label1->TabIndex = 9;
		this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
		// 
		// button10
		// 
		this->button10->Location = System::Drawing::Point(577, 428);
		this->button10->Name = L"button10";
		this->button10->Size = System::Drawing::Size(100, 40);
		this->button10->TabIndex = 10;
		this->button10->Text = L"Reset";
		this->button10->UseVisualStyleBackColor = true;
		this->button10->Click += gcnew System::EventHandler(this, &MainWindow::button10_Click);
		// 
		// button11
		// 
		this->button11->Location = System::Drawing::Point(577, 89);
		this->button11->Name = L"button11";
		this->button11->Size = System::Drawing::Size(100, 40);
		this->button11->TabIndex = 11;
		this->button11->Text = L"1 VS 1";
		this->button11->UseVisualStyleBackColor = true;
		this->button11->Click += gcnew System::EventHandler(this, &MainWindow::button11_Click);
		// 
		// button12
		// 
		this->button12->Location = System::Drawing::Point(577, 135);
		this->button12->Name = L"button12";
		this->button12->Size = System::Drawing::Size(100, 41);
		this->button12->TabIndex = 12;
		this->button12->Text = L"1 VS COMP";
		this->button12->UseVisualStyleBackColor = true;
		this->button12->Click += gcnew System::EventHandler(this, &MainWindow::button12_Click);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(703, 500);
		this->Controls->Add(this->button12);
		this->Controls->Add(this->button11);
		this->Controls->Add(this->button10);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->button9);
		this->Controls->Add(this->button8);
		this->Controls->Add(this->button7);
		this->Controls->Add(this->button6);
		this->Controls->Add(this->button5);
		this->Controls->Add(this->button4);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->button1);
		this->Margin = System::Windows::Forms::Padding(4);
		this->Name = L"MainWindow";
		this->Text = L"Tic Tac Toe";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
	#pragma endregion

	private: void disable_buttons() {
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = false;
		this->button7->Enabled = false;
		this->button8->Enabled = false;
		this->button9->Enabled = false;
	}

	private :
		void disable_button_for_computer(int button) {
			if (button == 1) {
				this->button1->Text = "O";
				this->button1->Enabled = false;
			}
			else if (button == 2) {
				this->button2->Text = "O";
				this->button2->Enabled = false;
			}
			else if (button == 3) {
				this->button3->Text = "O";
				this->button3->Enabled = false;
			}
			else if (button == 4) {
				this->button4->Text = "O";
				this->button4->Enabled = false;
			}
			else if (button == 5) {
				this->button5->Text = "O";
				this->button5->Enabled = false;
			}
			else if (button == 6) {
				this->button6->Text = "O";
				this->button6->Enabled = false;
			}
			else if (button == 7) {
				this->button7->Text = "O";
				this->button7->Enabled = false;
			}
			else if (button == 8) {
				this->button8->Text = "O";
				this->button8->Enabled = false;
			}
			else if (button == 9) {
				this->button9->Text = "O";
				this->button9->Enabled = false;
			}
		}

		int check_game_result(int result) {
			if (result == 1) {
				this->label1->Text = "Player 1 win.";
				disable_buttons();
				return 1;
			}
			else if (result == 2) {
				this->label1->Text = "Player 2 win.";
				disable_buttons();
				return 2;
			}
			if (rules->is_finish()) {
				this->label1->Text = "Draw.";
				return 0;
			}
			return -1;
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(1) == 1) {
			this->button1->Text = L"X";
			this->button1->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button1->Text = L"O";
			this->button1->Enabled = false;
		}
		check_game_result(rules->check_game_result());
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(2) == 1) {
			this->button2->Text = L"X";
			this->button2->Enabled = false;
	
			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button2->Text = L"O";
			this->button2->Enabled = false;
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(3) == 1) {
			this->button3->Text = L"X";
			this->button3->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button3->Text = L"O";
			this->button3->Enabled = false;
		
			if (rules->check_game_result() == 2) {
				this->label1->Text = "Player 2 win.";
				disable_buttons();
			}
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(4) == 1) {
			this->button4->Text = L"X";
			this->button4->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button4->Text = L"O";
			this->button4->Enabled = false;
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(5) == 1) {
			this->button5->Text = L"X";
			this->button5->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button5->Text = L"O";
			this->button5->Enabled = false;
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(6) == 1) {
			this->button6->Text = L"X";
			this->button6->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button6->Text = L"O";
			this->button6->Enabled = false;
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(7) == 1) {
			this->button7->Text = L"X";
			this->button7->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button7->Text = L"O";
			this->button7->Enabled = false;
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(8) == 1) {
			this->button8->Text = L"X";
			this->button8->Enabled = false;
			
			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button8->Text = L"O";
			this->button8->Enabled = false;
		}

		check_game_result(rules->check_game_result());
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rules->move_turn(9) == 1) {
			this->button9->Text = L"X";
			this->button9->Enabled = false;

			if (player2->get_is_computer() && check_game_result(rules->check_game_result()) == -1) {
				int button = rules->computer_move();
				rules->move_turn(button);
				disable_button_for_computer(button);
			}
		}
		else {
			this->button9->Text = L"O";
			this->button9->Enabled = false;
		}
		
		check_game_result(rules->check_game_result());
	}
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = L"";
		
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button9->Enabled = true;

		player1 = new Player("X", 1, player1->get_is_computer());
		player2 = new Player("O", 0, player2->get_is_computer());
		board = new Board(player1,player2);
		rules = new Rules(board);

		this->button2->Text = L"";
		this->button3->Text = L"";
		this->button1->Text = L"";
		this->button4->Text = L"";
		this->button5->Text = L"";
		this->button6->Text = L"";
		this->button9->Text = L"";
		this->button7->Text = L"";
		this->button8->Text = L"";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = L"";

		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button9->Enabled = true;

		player1 = new Player("X", 1, 0);
		player2 = new Player("O", 0, 0);
		board = new Board(player1, player2);
		rules = new Rules(board);

		this->button2->Text = L"";
		this->button3->Text = L"";
		this->button1->Text = L"";
		this->button4->Text = L"";
		this->button5->Text = L"";
		this->button6->Text = L"";
		this->button9->Text = L"";
		this->button7->Text = L"";
		this->button8->Text = L"";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = L"";

		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button9->Enabled = true;

		player1 = new Player("X", 1, 0);
		player2 = new Player("O", 0, 1);
		board = new Board(player1, player2);
		rules = new Rules(board);

		this->button2->Text = L"";
		this->button3->Text = L"";
		this->button1->Text = L"";
		this->button4->Text = L"";
		this->button5->Text = L"";
		this->button6->Text = L"";
		this->button9->Text = L"";
		this->button7->Text = L"";
		this->button8->Text = L"";
	}
};

