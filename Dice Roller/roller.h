#pragma once

namespace DiceRoller {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for roller
	/// </summary>
	public ref class Roller : public System::Windows::Forms::Form
	{
	public:
		Roller(void)
		{
			InitializeComponent();
			this->rand = gcnew System::Random();
			this->d4result->Text = "0";
			this->d4number->Text = "1";
			this->d6result->Text = "0";
			this->d6number->Text = "1";
			this->d8result->Text = "0";
			this->d8number->Text = "1";
			this->d10result->Text = "0";
			this->d10number->Text = "1";
			this->d12result->Text = "0";
			this->d12number->Text = "1";
			this->d20result->Text = "0";
			this->d20number->Text = "1";
			this->d100result->Text = "0";
			this->d100number->Text = "1";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Roller()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  d4result;
	private: System::Windows::Forms::NumericUpDown^  d4number;
	private: System::Windows::Forms::Button^  d4roll;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  d6roll;
	private: System::Windows::Forms::NumericUpDown^  d6number;
	private: System::Windows::Forms::TextBox^  d6result;
	private: System::Windows::Forms::Button^  d8roll;
	private: System::Windows::Forms::NumericUpDown^  d8number;
	private: System::Windows::Forms::TextBox^  d8result;
	private: System::Windows::Forms::Label^  d4label;
	private: System::Windows::Forms::Label^  d6label;
	private: System::Windows::Forms::Label^  d8label;
	private: System::Windows::Forms::Label^  d10label;
	private: System::Windows::Forms::Button^  d10roller;
	private: System::Windows::Forms::NumericUpDown^  d10number;
	private: System::Windows::Forms::TextBox^  d10result;
	private: System::Windows::Forms::Label^  d12label;
	private: System::Windows::Forms::Button^  d12roll;
	private: System::Windows::Forms::NumericUpDown^  d12number;
	private: System::Windows::Forms::TextBox^  d12result;
	private: System::Windows::Forms::Label^  d20label;
	private: System::Windows::Forms::Button^  d20roll;
	private: System::Windows::Forms::NumericUpDown^  d20number;
	private: System::Windows::Forms::TextBox^  d20result;
	private: System::Windows::Forms::Label^  d100label;
	private: System::Windows::Forms::Button^  d100roll;
	private: System::Windows::Forms::NumericUpDown^  d100number;
	private: System::Windows::Forms::TextBox^  d100result;
	private: System::Random^ rand;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// <summary>
			 /// <summary>
			 /// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->d4result = (gcnew System::Windows::Forms::TextBox());
			this->d4number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d4roll = (gcnew System::Windows::Forms::Button());
			this->d6roll = (gcnew System::Windows::Forms::Button());
			this->d6number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d6result = (gcnew System::Windows::Forms::TextBox());
			this->d8roll = (gcnew System::Windows::Forms::Button());
			this->d8number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d8result = (gcnew System::Windows::Forms::TextBox());
			this->d4label = (gcnew System::Windows::Forms::Label());
			this->d6label = (gcnew System::Windows::Forms::Label());
			this->d8label = (gcnew System::Windows::Forms::Label());
			this->d10label = (gcnew System::Windows::Forms::Label());
			this->d10roller = (gcnew System::Windows::Forms::Button());
			this->d10number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d10result = (gcnew System::Windows::Forms::TextBox());
			this->d12label = (gcnew System::Windows::Forms::Label());
			this->d12roll = (gcnew System::Windows::Forms::Button());
			this->d12number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d12result = (gcnew System::Windows::Forms::TextBox());
			this->d20label = (gcnew System::Windows::Forms::Label());
			this->d20roll = (gcnew System::Windows::Forms::Button());
			this->d20number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d20result = (gcnew System::Windows::Forms::TextBox());
			this->d100label = (gcnew System::Windows::Forms::Label());
			this->d100roll = (gcnew System::Windows::Forms::Button());
			this->d100number = (gcnew System::Windows::Forms::NumericUpDown());
			this->d100result = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d4number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d6number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d8number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d10number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d12number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d20number))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d100number))->BeginInit();
			this->SuspendLayout();
			// 
			// d4result
			// 
			this->d4result->Location = System::Drawing::Point(37, 6);
			this->d4result->Name = L"d4result";
			this->d4result->ReadOnly = true;
			this->d4result->Size = System::Drawing::Size(46, 20);
			this->d4result->TabIndex = 0;
			// 
			// d4number
			// 
			this->d4number->Location = System::Drawing::Point(89, 6);
			this->d4number->Name = L"d4number";
			this->d4number->Size = System::Drawing::Size(31, 20);
			this->d4number->TabIndex = 1;
			// 
			// d4roll
			// 
			this->d4roll->Location = System::Drawing::Point(126, 4);
			this->d4roll->Name = L"d4roll";
			this->d4roll->Size = System::Drawing::Size(75, 23);
			this->d4roll->TabIndex = 2;
			this->d4roll->Text = L"Roll";
			this->d4roll->UseVisualStyleBackColor = true;
			this->d4roll->Click += gcnew System::EventHandler(this, &Roller::d4roll_Click);
			// 
			// d6roll
			// 
			this->d6roll->Location = System::Drawing::Point(126, 30);
			this->d6roll->Name = L"d6roll";
			this->d6roll->Size = System::Drawing::Size(75, 23);
			this->d6roll->TabIndex = 5;
			this->d6roll->Text = L"Roll";
			this->d6roll->UseVisualStyleBackColor = true;
			this->d6roll->Click += gcnew System::EventHandler(this, &Roller::d6roll_Click);
			// 
			// d6number
			// 
			this->d6number->Location = System::Drawing::Point(89, 32);
			this->d6number->Name = L"d6number";
			this->d6number->Size = System::Drawing::Size(31, 20);
			this->d6number->TabIndex = 4;
			// 
			// d6result
			// 
			this->d6result->Location = System::Drawing::Point(37, 32);
			this->d6result->Name = L"d6result";
			this->d6result->ReadOnly = true;
			this->d6result->Size = System::Drawing::Size(46, 20);
			this->d6result->TabIndex = 3;
			// 
			// d8roll
			// 
			this->d8roll->Location = System::Drawing::Point(126, 59);
			this->d8roll->Name = L"d8roll";
			this->d8roll->Size = System::Drawing::Size(75, 23);
			this->d8roll->TabIndex = 8;
			this->d8roll->Text = L"Roll";
			this->d8roll->UseVisualStyleBackColor = true;
			this->d8roll->Click += gcnew System::EventHandler(this, &Roller::d8roll_Click);
			// 
			// d8number
			// 
			this->d8number->Location = System::Drawing::Point(89, 61);
			this->d8number->Name = L"d8number";
			this->d8number->Size = System::Drawing::Size(31, 20);
			this->d8number->TabIndex = 7;
			// 
			// d8result
			// 
			this->d8result->Location = System::Drawing::Point(37, 61);
			this->d8result->Name = L"d8result";
			this->d8result->ReadOnly = true;
			this->d8result->Size = System::Drawing::Size(46, 20);
			this->d8result->TabIndex = 6;
			// 
			// d4label
			// 
			this->d4label->AutoSize = true;
			this->d4label->Location = System::Drawing::Point(12, 9);
			this->d4label->Name = L"d4label";
			this->d4label->Size = System::Drawing::Size(19, 13);
			this->d4label->TabIndex = 9;
			this->d4label->Text = L"d4";
			// 
			// d6label
			// 
			this->d6label->AutoSize = true;
			this->d6label->Location = System::Drawing::Point(12, 35);
			this->d6label->Name = L"d6label";
			this->d6label->Size = System::Drawing::Size(19, 13);
			this->d6label->TabIndex = 10;
			this->d6label->Text = L"d6";
			// 
			// d8label
			// 
			this->d8label->AutoSize = true;
			this->d8label->Location = System::Drawing::Point(12, 64);
			this->d8label->Name = L"d8label";
			this->d8label->Size = System::Drawing::Size(19, 13);
			this->d8label->TabIndex = 11;
			this->d8label->Text = L"d8";
			// 
			// d10label
			// 
			this->d10label->AutoSize = true;
			this->d10label->Location = System::Drawing::Point(12, 93);
			this->d10label->Name = L"d10label";
			this->d10label->Size = System::Drawing::Size(25, 13);
			this->d10label->TabIndex = 15;
			this->d10label->Text = L"d10";
			// 
			// d10roller
			// 
			this->d10roller->Location = System::Drawing::Point(126, 88);
			this->d10roller->Name = L"d10roller";
			this->d10roller->Size = System::Drawing::Size(75, 23);
			this->d10roller->TabIndex = 14;
			this->d10roller->Text = L"Roll";
			this->d10roller->UseVisualStyleBackColor = true;
			this->d10roller->Click += gcnew System::EventHandler(this, &Roller::d10roller_Click);
			// 
			// d10number
			// 
			this->d10number->Location = System::Drawing::Point(89, 90);
			this->d10number->Name = L"d10number";
			this->d10number->Size = System::Drawing::Size(31, 20);
			this->d10number->TabIndex = 13;
			// 
			// d10result
			// 
			this->d10result->Location = System::Drawing::Point(37, 90);
			this->d10result->Name = L"d10result";
			this->d10result->ReadOnly = true;
			this->d10result->Size = System::Drawing::Size(46, 20);
			this->d10result->TabIndex = 12;
			// 
			// d12label
			// 
			this->d12label->AutoSize = true;
			this->d12label->Location = System::Drawing::Point(12, 122);
			this->d12label->Name = L"d12label";
			this->d12label->Size = System::Drawing::Size(25, 13);
			this->d12label->TabIndex = 19;
			this->d12label->Text = L"d12";
			// 
			// d12roll
			// 
			this->d12roll->Location = System::Drawing::Point(126, 117);
			this->d12roll->Name = L"d12roll";
			this->d12roll->Size = System::Drawing::Size(75, 23);
			this->d12roll->TabIndex = 18;
			this->d12roll->Text = L"Roll";
			this->d12roll->UseVisualStyleBackColor = true;
			this->d12roll->Click += gcnew System::EventHandler(this, &Roller::d12roll_Click);
			// 
			// d12number
			// 
			this->d12number->Location = System::Drawing::Point(89, 119);
			this->d12number->Name = L"d12number";
			this->d12number->Size = System::Drawing::Size(31, 20);
			this->d12number->TabIndex = 17;
			// 
			// d12result
			// 
			this->d12result->Location = System::Drawing::Point(37, 119);
			this->d12result->Name = L"d12result";
			this->d12result->ReadOnly = true;
			this->d12result->Size = System::Drawing::Size(46, 20);
			this->d12result->TabIndex = 16;
			// 
			// d20label
			// 
			this->d20label->AutoSize = true;
			this->d20label->Location = System::Drawing::Point(12, 150);
			this->d20label->Name = L"d20label";
			this->d20label->Size = System::Drawing::Size(25, 13);
			this->d20label->TabIndex = 23;
			this->d20label->Text = L"d20";
			// 
			// d20roll
			// 
			this->d20roll->Location = System::Drawing::Point(126, 145);
			this->d20roll->Name = L"d20roll";
			this->d20roll->Size = System::Drawing::Size(75, 23);
			this->d20roll->TabIndex = 22;
			this->d20roll->Text = L"Roll";
			this->d20roll->UseVisualStyleBackColor = true;
			this->d20roll->Click += gcnew System::EventHandler(this, &Roller::d20roll_Click);
			// 
			// d20number
			// 
			this->d20number->Location = System::Drawing::Point(89, 147);
			this->d20number->Name = L"d20number";
			this->d20number->Size = System::Drawing::Size(31, 20);
			this->d20number->TabIndex = 21;
			// 
			// d20result
			// 
			this->d20result->Location = System::Drawing::Point(37, 147);
			this->d20result->Name = L"d20result";
			this->d20result->ReadOnly = true;
			this->d20result->Size = System::Drawing::Size(46, 20);
			this->d20result->TabIndex = 20;
			// 
			// d100label
			// 
			this->d100label->AutoSize = true;
			this->d100label->Location = System::Drawing::Point(6, 178);
			this->d100label->Name = L"d100label";
			this->d100label->Size = System::Drawing::Size(31, 13);
			this->d100label->TabIndex = 27;
			this->d100label->Text = L"d100";
			// 
			// d100roll
			// 
			this->d100roll->Location = System::Drawing::Point(126, 173);
			this->d100roll->Name = L"d100roll";
			this->d100roll->Size = System::Drawing::Size(75, 23);
			this->d100roll->TabIndex = 26;
			this->d100roll->Text = L"Roll";
			this->d100roll->UseVisualStyleBackColor = true;
			this->d100roll->Click += gcnew System::EventHandler(this, &Roller::d100roll_Click);
			// 
			// d100number
			// 
			this->d100number->Location = System::Drawing::Point(89, 175);
			this->d100number->Name = L"d100number";
			this->d100number->Size = System::Drawing::Size(31, 20);
			this->d100number->TabIndex = 25;
			// 
			// d100result
			// 
			this->d100result->Location = System::Drawing::Point(37, 175);
			this->d100result->Name = L"d100result";
			this->d100result->ReadOnly = true;
			this->d100result->Size = System::Drawing::Size(46, 20);
			this->d100result->TabIndex = 24;
			// 
			// Roller
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(215, 208);
			this->Controls->Add(this->d100label);
			this->Controls->Add(this->d100roll);
			this->Controls->Add(this->d100number);
			this->Controls->Add(this->d100result);
			this->Controls->Add(this->d20label);
			this->Controls->Add(this->d20roll);
			this->Controls->Add(this->d20number);
			this->Controls->Add(this->d20result);
			this->Controls->Add(this->d12label);
			this->Controls->Add(this->d12roll);
			this->Controls->Add(this->d12number);
			this->Controls->Add(this->d12result);
			this->Controls->Add(this->d10label);
			this->Controls->Add(this->d10roller);
			this->Controls->Add(this->d10number);
			this->Controls->Add(this->d10result);
			this->Controls->Add(this->d8label);
			this->Controls->Add(this->d6label);
			this->Controls->Add(this->d4label);
			this->Controls->Add(this->d8roll);
			this->Controls->Add(this->d8number);
			this->Controls->Add(this->d8result);
			this->Controls->Add(this->d6roll);
			this->Controls->Add(this->d6number);
			this->Controls->Add(this->d6result);
			this->Controls->Add(this->d4roll);
			this->Controls->Add(this->d4number);
			this->Controls->Add(this->d4result);
			this->Name = L"Roller";
			this->Text = L"roller";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d4number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d6number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d8number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d10number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d12number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d20number))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->d100number))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::String^ roll(UInt32 d, UInt32 numroll) {
		UInt32 result, i;
		result = 0;
		for (i = 0; i < numroll; i++) {
			result += rand->Next(1, d+1);
		}
		return Convert::ToString(result);
	}

	private: System::Void d4roll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d4result->Text = this->roll(4, Convert::ToInt32(this->d4number->Text));
	}
	private: System::Void d6roll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d6result->Text = this->roll(6, Convert::ToInt32(this->d6number->Text));
	}
	private: System::Void d8roll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d8result->Text = this->roll(8, Convert::ToInt32(this->d8number->Text));
	}
	private: System::Void d10roller_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d10result->Text = this->roll(10, Convert::ToInt32(this->d10number->Text));
	}
	private: System::Void d12roll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d12result->Text = this->roll(12, Convert::ToInt32(this->d12number->Text));
	}
	private: System::Void d20roll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d20result->Text = this->roll(20, Convert::ToInt32(this->d20number->Text));
	}
	private: System::Void d100roll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->d100result->Text = this->roll(100, Convert::ToInt32(this->d100number->Text));
	}
};
}
