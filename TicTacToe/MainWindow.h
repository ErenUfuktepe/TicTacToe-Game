#pragma once
#include "Referee.h"
#include <iostream>
#include <string>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class MainWindow : public System::Windows::Forms::Form
{
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

	private: Referee* referee = new Referee(0);

	public:
		MainWindow(void)
		{
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

	private: System::ComponentModel::Container ^components;

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
		this->button10 = (gcnew System::Windows::Forms::Button());
		this->button11 = (gcnew System::Windows::Forms::Button());
		this->button12 = (gcnew System::Windows::Forms::Button());

		this->label1 = (gcnew System::Windows::Forms::Label());
		this->SuspendLayout();
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(168, 89);
		this->button1->Margin = System::Windows::Forms::Padding(4);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(100, 87);
		this->button1->TabIndex = 0;
		this->button10->Text = L"  ";
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
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(321, 428);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(0, 17);
		this->label1->TabIndex = 9;
		this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(703, 500);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button4);
		this->Controls->Add(this->button5);
		this->Controls->Add(this->button6);
		this->Controls->Add(this->button7);
		this->Controls->Add(this->button8);
		this->Controls->Add(this->button9);
		this->Controls->Add(this->button10);
		this->Controls->Add(this->button11);
		this->Controls->Add(this->button12);

		this->Controls->Add(this->label1);
		this->Margin = System::Windows::Forms::Padding(4);
		this->Name = L"MainWindow";
		this->Text = L"Tic Tac Toe";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
	#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button1->Text = button_clik_action(0,0);
		this->button1->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button2->Text = button_clik_action(0,1);
		this->button2->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button3->Text = button_clik_action(0,2);
		this->button3->Enabled = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button4->Text = button_clik_action(1,0);
		this->button4->Enabled = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button5->Text = button_clik_action(1,1);
		this->button5->Enabled = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button6->Text = button_clik_action(1,2);
		this->button6->Enabled = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button7->Text = button_clik_action(2,0);
		this->button7->Enabled = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button8->Text = button_clik_action(2,1);
		this->button8->Enabled = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->button9->Text = button_clik_action(2,2);
		this->button9->Enabled = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->referee->reset_board();
		reset_game();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->referee->reset_board();
		this->referee = new Referee(0);
		reset_game();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->referee->reset_board();
		this->referee = new Referee(1);
		reset_game();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}

	private: void reset_game()
	{
		this->button1->Text = L"";
		this->button2->Text = L"";
		this->button3->Text = L"";
		this->button4->Text = L"";
		this->button5->Text = L"";
		this->button6->Text = L"";
		this->button7->Text = L"";
		this->button8->Text = L"";
		this->button9->Text = L"";

		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->button3->Enabled = true;
		this->button4->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button9->Enabled = true;

		this->label1->Text = L"";
	}

	private: String^ button_clik_action(int row, int column)
	{
		string *result = this->referee->make_move(row, column);
		String^ button_symbol = gcnew String(result[0].c_str());
		if(result[1].find("Win") != string::npos || result[1].find("Draw!") != string::npos)
		{
			String^ label = gcnew String(result[1].c_str());
			this->label1->Text = label;
			finish_game();
		}
		if (!result[2].empty())
		{
			string x ,y; 
			x = result[2][0];
			y = result[2][1];
			int row = std::stoi(x);
			int column = std::stoi(y);
			string* check = this->referee->make_move(row, column);
			if (check[1].find("Win") != string::npos || check[1].find("Draw!") != string::npos)
			{
				String^ label = gcnew String(check[1].c_str());
				this->label1->Text = label;
				finish_game();
			}
			AI_button_action(result[2]);
		}
		return button_symbol;
	}

	private: void finish_game()
	{
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

	private: void AI_button_action(string move)
	{
		if (move == "00") 
		{
			this->button1->Text = L"O";
			this->button1->Enabled = false;
		}
		if (move == "01")
		{
			this->button2->Text = L"O";
			this->button2->Enabled = false;
		}
		if (move == "02")
		{
			this->button3->Text = L"O";
			this->button3->Enabled = false;
		}
		if (move == "10")
		{
			this->button4->Text = L"O";
			this->button4->Enabled = false;
		}
		if (move == "11")
		{
			this->button5->Text = L"O";
			this->button5->Enabled = false;
		}
		if (move == "12")
		{
			this->button6->Text = L"O";
			this->button6->Enabled = false;
		}
		if (move == "20")
		{
			this->button7->Text = L"O";
			this->button7->Enabled = false;
		}
		if (move == "21")
		{
			this->button8->Text = L"O";
			this->button8->Enabled = false;
		}
		if (move == "22")
		{
			this->button9->Text = L"O";
			this->button9->Enabled = false;
		}
	}

};

