#pragma once

namespace L6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exponent
	/// </summary>
	public ref class Exponent : public System::Windows::Forms::Form
	{
	public:
		Exponent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Exponent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ static1;
	private: System::Windows::Forms::GroupBox^ static2;
	private: System::Windows::Forms::Label^ static3;
	private: System::Windows::Forms::TextBox^ inputTB;
	private: System::Windows::Forms::GroupBox^ static4;

	private: System::Windows::Forms::RadioButton^ acc1RB;
	private: System::Windows::Forms::RadioButton^ acc6RB;
	private: System::Windows::Forms::RadioButton^ acc5RB;
	private: System::Windows::Forms::RadioButton^ acc4RB;
	private: System::Windows::Forms::RadioButton^ acc3RB;
	private: System::Windows::Forms::RadioButton^ acc2RB;
	private: System::Windows::Forms::Label^ static5;

	private: System::Windows::Forms::Button^ startBtn;
	private: System::Windows::Forms::Label^ static6;
	private: System::Windows::Forms::Label^ static7;
	private: System::Windows::Forms::Label^ static8;
	private: System::Windows::Forms::Label^ static9;
	private: System::Windows::Forms::Label^ static10;
	private: System::Windows::Forms::Label^ expLbl;

	private: System::Windows::Forms::Label^ itersLbl;

	private: System::Windows::Forms::Label^ accExpLbl;
	private: System::Windows::Forms::Label^ accLbl;
	private: System::Windows::Forms::Label^ originalLbl;
	private: System::Windows::Forms::Button^ closeBtn;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->static1 = (gcnew System::Windows::Forms::Label());
			this->static2 = (gcnew System::Windows::Forms::GroupBox());
			this->inputTB = (gcnew System::Windows::Forms::TextBox());
			this->static3 = (gcnew System::Windows::Forms::Label());
			this->static4 = (gcnew System::Windows::Forms::GroupBox());
			this->acc6RB = (gcnew System::Windows::Forms::RadioButton());
			this->acc5RB = (gcnew System::Windows::Forms::RadioButton());
			this->acc4RB = (gcnew System::Windows::Forms::RadioButton());
			this->acc3RB = (gcnew System::Windows::Forms::RadioButton());
			this->acc2RB = (gcnew System::Windows::Forms::RadioButton());
			this->acc1RB = (gcnew System::Windows::Forms::RadioButton());
			this->static5 = (gcnew System::Windows::Forms::Label());
			this->startBtn = (gcnew System::Windows::Forms::Button());
			this->static6 = (gcnew System::Windows::Forms::Label());
			this->static7 = (gcnew System::Windows::Forms::Label());
			this->static8 = (gcnew System::Windows::Forms::Label());
			this->static9 = (gcnew System::Windows::Forms::Label());
			this->static10 = (gcnew System::Windows::Forms::Label());
			this->expLbl = (gcnew System::Windows::Forms::Label());
			this->itersLbl = (gcnew System::Windows::Forms::Label());
			this->accExpLbl = (gcnew System::Windows::Forms::Label());
			this->accLbl = (gcnew System::Windows::Forms::Label());
			this->originalLbl = (gcnew System::Windows::Forms::Label());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->static2->SuspendLayout();
			this->static4->SuspendLayout();
			this->SuspendLayout();
			// 
			// static1
			// 
			this->static1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static1->Location = System::Drawing::Point(12, 9);
			this->static1->Name = L"static1";
			this->static1->Size = System::Drawing::Size(554, 61);
			this->static1->TabIndex = 0;
			this->static1->Text = L"exp(x) = 1 + x/1! + x^2/2! + x^3/3! + ...";
			this->static1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// static2
			// 
			this->static2->Controls->Add(this->inputTB);
			this->static2->Controls->Add(this->static3);
			this->static2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->static2->Location = System::Drawing::Point(12, 73);
			this->static2->Name = L"static2";
			this->static2->Size = System::Drawing::Size(554, 81);
			this->static2->TabIndex = 1;
			this->static2->TabStop = false;
			this->static2->Text = L"Ввод значения X (-13 <= X <= 20)";
			// 
			// inputTB
			// 
			this->inputTB->Location = System::Drawing::Point(56, 31);
			this->inputTB->Name = L"inputTB";
			this->inputTB->Size = System::Drawing::Size(492, 35);
			this->inputTB->TabIndex = 1;
			this->inputTB->Text = L"1";
			this->inputTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputTB->TextChanged += gcnew System::EventHandler(this, &Exponent::inputTB_TextChanged);
			// 
			// static3
			// 
			this->static3->AutoSize = true;
			this->static3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->static3->Location = System::Drawing::Point(6, 37);
			this->static3->Name = L"static3";
			this->static3->Size = System::Drawing::Size(44, 29);
			this->static3->TabIndex = 0;
			this->static3->Text = L"x =";
			// 
			// static4
			// 
			this->static4->Controls->Add(this->acc6RB);
			this->static4->Controls->Add(this->acc5RB);
			this->static4->Controls->Add(this->acc4RB);
			this->static4->Controls->Add(this->acc3RB);
			this->static4->Controls->Add(this->acc2RB);
			this->static4->Controls->Add(this->acc1RB);
			this->static4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->static4->Location = System::Drawing::Point(12, 160);
			this->static4->Name = L"static4";
			this->static4->Size = System::Drawing::Size(554, 117);
			this->static4->TabIndex = 2;
			this->static4->TabStop = false;
			this->static4->Text = L"Выбор точности";
			// 
			// acc6RB
			// 
			this->acc6RB->AutoSize = true;
			this->acc6RB->Checked = true;
			this->acc6RB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->acc6RB->Location = System::Drawing::Point(399, 75);
			this->acc6RB->Name = L"acc6RB";
			this->acc6RB->Size = System::Drawing::Size(135, 33);
			this->acc6RB->TabIndex = 5;
			this->acc6RB->TabStop = true;
			this->acc6RB->Text = L"0,000001";
			this->acc6RB->UseVisualStyleBackColor = true;
			this->acc6RB->Click += gcnew System::EventHandler(this, &Exponent::radioButton_change);
			// 
			// acc5RB
			// 
			this->acc5RB->AutoSize = true;
			this->acc5RB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->acc5RB->Location = System::Drawing::Point(399, 35);
			this->acc5RB->Name = L"acc5RB";
			this->acc5RB->Size = System::Drawing::Size(122, 33);
			this->acc5RB->TabIndex = 4;
			this->acc5RB->Text = L"0,00001";
			this->acc5RB->UseVisualStyleBackColor = true;
			this->acc5RB->Click += gcnew System::EventHandler(this, &Exponent::radioButton_change);
			// 
			// acc4RB
			// 
			this->acc4RB->AutoSize = true;
			this->acc4RB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->acc4RB->Location = System::Drawing::Point(211, 73);
			this->acc4RB->Name = L"acc4RB";
			this->acc4RB->Size = System::Drawing::Size(109, 33);
			this->acc4RB->TabIndex = 3;
			this->acc4RB->Text = L"0,0001";
			this->acc4RB->UseVisualStyleBackColor = true;
			this->acc4RB->Click += gcnew System::EventHandler(this, &Exponent::radioButton_change);
			// 
			// acc3RB
			// 
			this->acc3RB->AutoSize = true;
			this->acc3RB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->acc3RB->Location = System::Drawing::Point(211, 34);
			this->acc3RB->Name = L"acc3RB";
			this->acc3RB->Size = System::Drawing::Size(96, 33);
			this->acc3RB->TabIndex = 2;
			this->acc3RB->Text = L"0,001";
			this->acc3RB->UseVisualStyleBackColor = true;
			this->acc3RB->Click += gcnew System::EventHandler(this, &Exponent::radioButton_change);
			// 
			// acc2RB
			// 
			this->acc2RB->AutoSize = true;
			this->acc2RB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->acc2RB->Location = System::Drawing::Point(11, 74);
			this->acc2RB->Name = L"acc2RB";
			this->acc2RB->Size = System::Drawing::Size(83, 33);
			this->acc2RB->TabIndex = 1;
			this->acc2RB->Text = L"0,01";
			this->acc2RB->UseVisualStyleBackColor = true;
			this->acc2RB->Click += gcnew System::EventHandler(this, &Exponent::radioButton_change);
			// 
			// acc1RB
			// 
			this->acc1RB->AutoSize = true;
			this->acc1RB->ForeColor = System::Drawing::SystemColors::ControlText;
			this->acc1RB->Location = System::Drawing::Point(11, 35);
			this->acc1RB->Name = L"acc1RB";
			this->acc1RB->Size = System::Drawing::Size(70, 33);
			this->acc1RB->TabIndex = 0;
			this->acc1RB->Text = L"0,1";
			this->acc1RB->UseVisualStyleBackColor = true;
			this->acc1RB->Click += gcnew System::EventHandler(this, &Exponent::radioButton_change);
			// 
			// static5
			// 
			this->static5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static5->Location = System::Drawing::Point(12, 348);
			this->static5->Name = L"static5";
			this->static5->Size = System::Drawing::Size(554, 29);
			this->static5->TabIndex = 3;
			this->static5->Text = L"Результаты расчёта:";
			this->static5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// startBtn
			// 
			this->startBtn->Location = System::Drawing::Point(12, 283);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(554, 40);
			this->startBtn->TabIndex = 4;
			this->startBtn->Text = L"Расчёт exp(x)";
			this->startBtn->UseVisualStyleBackColor = true;
			this->startBtn->Click += gcnew System::EventHandler(this, &Exponent::startBtn_Click);
			// 
			// static6
			// 
			this->static6->AutoSize = true;
			this->static6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static6->Location = System::Drawing::Point(12, 391);
			this->static6->Name = L"static6";
			this->static6->Size = System::Drawing::Size(211, 25);
			this->static6->TabIndex = 5;
			this->static6->Text = L"Исходное значение =";
			// 
			// static7
			// 
			this->static7->AutoSize = true;
			this->static7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static7->Location = System::Drawing::Point(12, 431);
			this->static7->Name = L"static7";
			this->static7->Size = System::Drawing::Size(117, 25);
			this->static7->TabIndex = 6;
			this->static7->Text = L"Точность =";
			// 
			// static8
			// 
			this->static8->AutoSize = true;
			this->static8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static8->Location = System::Drawing::Point(12, 471);
			this->static8->Name = L"static8";
			this->static8->Size = System::Drawing::Size(249, 25);
			this->static8->TabIndex = 7;
			this->static8->Text = L"Точное значение exp(x) =";
			// 
			// static9
			// 
			this->static9->AutoSize = true;
			this->static9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static9->Location = System::Drawing::Point(12, 511);
			this->static9->Name = L"static9";
			this->static9->Size = System::Drawing::Size(193, 25);
			this->static9->TabIndex = 8;
			this->static9->Text = L"Число слагаемых =";
			// 
			// static10
			// 
			this->static10->AutoSize = true;
			this->static10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->static10->Location = System::Drawing::Point(12, 551);
			this->static10->Name = L"static10";
			this->static10->Size = System::Drawing::Size(205, 25);
			this->static10->TabIndex = 9;
			this->static10->Text = L"Сумма ряда exp(x) =";
			// 
			// expLbl
			// 
			this->expLbl->AutoSize = true;
			this->expLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expLbl->Location = System::Drawing::Point(277, 551);
			this->expLbl->Name = L"expLbl";
			this->expLbl->Size = System::Drawing::Size(0, 25);
			this->expLbl->TabIndex = 14;
			// 
			// itersLbl
			// 
			this->itersLbl->AutoSize = true;
			this->itersLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itersLbl->Location = System::Drawing::Point(277, 511);
			this->itersLbl->Name = L"itersLbl";
			this->itersLbl->Size = System::Drawing::Size(0, 25);
			this->itersLbl->TabIndex = 13;
			// 
			// accExpLbl
			// 
			this->accExpLbl->AutoSize = true;
			this->accExpLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accExpLbl->Location = System::Drawing::Point(277, 471);
			this->accExpLbl->Name = L"accExpLbl";
			this->accExpLbl->Size = System::Drawing::Size(0, 25);
			this->accExpLbl->TabIndex = 12;
			// 
			// accLbl
			// 
			this->accLbl->AutoSize = true;
			this->accLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accLbl->Location = System::Drawing::Point(277, 431);
			this->accLbl->Name = L"accLbl";
			this->accLbl->Size = System::Drawing::Size(0, 25);
			this->accLbl->TabIndex = 11;
			// 
			// originalLbl
			// 
			this->originalLbl->AutoSize = true;
			this->originalLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->originalLbl->Location = System::Drawing::Point(277, 391);
			this->originalLbl->Name = L"originalLbl";
			this->originalLbl->Size = System::Drawing::Size(0, 25);
			this->originalLbl->TabIndex = 10;
			// 
			// closeBtn
			// 
			this->closeBtn->Location = System::Drawing::Point(12, 591);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(554, 54);
			this->closeBtn->TabIndex = 15;
			this->closeBtn->TabStop = false;
			this->closeBtn->Text = L"Закрыть";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &Exponent::closeBtn_Click);
			// 
			// Exponent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(578, 655);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->expLbl);
			this->Controls->Add(this->itersLbl);
			this->Controls->Add(this->accExpLbl);
			this->Controls->Add(this->accLbl);
			this->Controls->Add(this->originalLbl);
			this->Controls->Add(this->static10);
			this->Controls->Add(this->static9);
			this->Controls->Add(this->static8);
			this->Controls->Add(this->static7);
			this->Controls->Add(this->static6);
			this->Controls->Add(this->startBtn);
			this->Controls->Add(this->static5);
			this->Controls->Add(this->static4);
			this->Controls->Add(this->static2);
			this->Controls->Add(this->static1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximizeBox = false;
			this->Name = L"Exponent";
			this->ShowIcon = false;
			this->Text = L"Расчёт exp(x)";
			this->static2->ResumeLayout(false);
			this->static2->PerformLayout();
			this->static4->ResumeLayout(false);
			this->static4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ acc = L"0,000001";

		void clear()
		{
			originalLbl->Text = "";
			accLbl->Text = "";
			accExpLbl->Text = "";
			itersLbl->Text = "";
			expLbl->Text = "";
		}

		RadioButton^ getNextRB() {
			if (acc == L"0,1")
				return acc2RB;
			else if (acc == L"0,01")
				return acc3RB;
			else if (acc == L"0,001")
				return acc4RB;
			else if (acc == L"0,0001")
				return acc5RB;
			else
				return acc6RB;
		}

		void radioButton_change(System::Object^ sender, System::EventArgs^ e)
		{
			const auto RB = safe_cast<RadioButton^>(sender);
			acc = RB->Text;
			clear();
		}

		void inputTB_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			clear();
		}

		void startBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			double x;
			try
			{
				if(inputTB->Text[0] == '+')
					throw gcnew FormatException();
				x = Convert::ToDouble(inputTB->Text->Replace(L",", "."));
				if (x < -13)
					throw gcnew String(L"Число меньше нижней границы допустимого диапазона");
				if (x > 20)
					throw gcnew String(L"Число больше верхней границы допустимого диапазона");
			}
			catch (FormatException^)
			{
				MessageBox::Show(L"Число введено неверно", L"Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
				inputTB->Focus();
				return;
			}
			catch (String^ e)
			{
				MessageBox::Show(e, L"Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
				inputTB->Focus();
				return;
			}

			const double expAcc = Math::Exp(x);
			const double accDouble = Convert::ToDouble(acc->Replace(L",", L"."));

			double element = 1;
			int iters = 0;
			double expSum = 0;
			while(Math::Abs(element) > accDouble)
			{
				iters++;
				expSum += element;
				element = element * x / iters;
			}

			if (expSum < accDouble)
			{
				getNextRB()->PerformClick();
				startBtn->PerformClick();
				return;
			}

			const int accInt = acc->Split(',')[1]->Length + 1;
			const auto xStr = x.ToString()->Replace(L".", L",");
			inputTB->Text = xStr;
			originalLbl->Text = xStr;
			accLbl->Text = acc;
			accExpLbl->Text = Math::Exp(x).ToString(L"f" + accInt.ToString());
			itersLbl->Text = iters.ToString();
			expLbl->Text = expSum.ToString(L"f" + accInt.ToString());
		}

		void closeBtn_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Application::Exit();
		}
	};
}
