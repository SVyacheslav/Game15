#pragma once
#include "Game.h"

namespace Game15CLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormGame15
	/// </summary>
	public ref class FormGame15 : public System::Windows::Forms::Form
	{
	public:
		Game game;
		//Game^ game = gcnew Game();
		FormGame15(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormGame15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button0 = (gcnew System::Windows::Forms::Button());
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
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->startToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->startToolStripMenuItem->Text = L"Start";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormGame15::startToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->button0, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button8, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button9, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button10, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button11, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button12, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button13, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button14, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button15, 3, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(7, 29);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(267, 262);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// button0
			// 
			this->button0->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button0->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(3, 3);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(60, 59);
			this->button0->TabIndex = 0;
			this->button0->Tag = L"0";
			this->button0->Text = L"-";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(69, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 59);
			this->button1->TabIndex = 1;
			this->button1->Tag = L"1";
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(135, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 59);
			this->button2->TabIndex = 2;
			this->button2->Tag = L"2";
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(201, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 59);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"3";
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(3, 68);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 59);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"4";
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(69, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 59);
			this->button5->TabIndex = 5;
			this->button5->Tag = L"5";
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(135, 68);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 59);
			this->button6->TabIndex = 6;
			this->button6->Tag = L"6";
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(201, 68);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 59);
			this->button7->TabIndex = 7;
			this->button7->Tag = L"7";
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(3, 133);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 59);
			this->button8->TabIndex = 8;
			this->button8->Tag = L"8";
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(69, 133);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 59);
			this->button9->TabIndex = 9;
			this->button9->Tag = L"9";
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(135, 133);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 59);
			this->button10->TabIndex = 10;
			this->button10->Tag = L"10";
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(201, 133);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 59);
			this->button11->TabIndex = 11;
			this->button11->Tag = L"11";
			this->button11->Text = L"-";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(3, 198);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 61);
			this->button12->TabIndex = 12;
			this->button12->Tag = L"12";
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button13
			// 
			this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(69, 198);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 61);
			this->button13->TabIndex = 13;
			this->button13->Tag = L"13";
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button14
			// 
			this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(135, 198);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 61);
			this->button14->TabIndex = 14;
			this->button14->Tag = L"14";
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// button15
			// 
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(201, 198);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(63, 61);
			this->button15->TabIndex = 15;
			this->button15->Tag = L"15";
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &FormGame15::button0_Click);
			// 
			// FormGame15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 296);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"FormGame15";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game15";
			this->Load += gcnew System::EventHandler(this, &FormGame15::FormGame15_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
		// Определяем по клику какаякнопк была нажата

		//int position = Convert.ToInt16(((Button^)sender).Tag);
		//MessageBox.Show(position.ToString());

		Button^ temp = (Button^)sender;
		int position = Convert::ToInt16(temp->Tag); // Необходимо сконвертировать номер кнопки (текст в поле Tag) в целое число 
													//MessageBox.Show(position)
													//button1->Click = Convert::ToInt16(Tag);
		game.Shift(position);
		refresh();

		//button(position)->Text = position.ToString();
		//MessageBox::Show(position.ToString());
		if (game.CheckMap()) {
			MessageBox::Show(("You have WIN!"));
			StartGame();
		}

	}


	private: Button ^ button(int position) {		//Функция которая выводит (возвращает) цифры на кнопки при клике
		switch (position)
		{

		case 0: return button0; //break;
		case 1: return button1; //break;
		case 2: return button2; //break;
		case 3: return button3; //break;
		case 4: return button4; //break;
		case 5: return button5; //break;
		case 6: return button6; //break;
		case 7: return button7; //break;
		case 8: return button8; //break;
		case 9: return button9; //break;
		case 10: return button10; //break;
		case 11: return button11; //break;
		case 12: return button12; //break;
		case 13: return button13; //break;
		case 14: return button14; //break;
		case 15: return button15; //break;

		default: return nullptr; //break;

		}

	}

	private: void StartGame() {
		game.Start();
		game.CreateGameMap();
		refresh();
	};

	private: System::Void startToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		StartGame();
	}


	private: void refresh() {

		vector<Button^> buttons;
		buttons.push_back(button0);
		buttons.push_back(button1);
		buttons.push_back(button2);
		buttons.push_back(button3);
		buttons.push_back(button4);
		buttons.push_back(button5);
		buttons.push_back(button6);
		buttons.push_back(button7);
		buttons.push_back(button8);
		buttons.push_back(button9);
		buttons.push_back(button10);
		buttons.push_back(button11);
		buttons.push_back(button12);
		buttons.push_back(button13);
		buttons.push_back(button14);
		buttons.push_back(button15);

		for (int position = 0; position < 16; position++)
		{
			button(position)->Text = game.GetNumber(position).ToString();	//Присваиваим номер кнопки позиции
			buttons[position]->Visible = (game.GetNumber(position) > 0);
			button(position)->Visible = (game.GetNumber(position) > 0);

		}

	}

	private: System::Void FormGame15_Load(System::Object^  sender, System::EventArgs^  e) {
		StartGame();
	}
	};
}
