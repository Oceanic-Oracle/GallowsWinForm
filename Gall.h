#pragma once

namespace GallowsWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Gall
	/// </summary>
	public ref class Gall : public System::Windows::Forms::Form
	{
	private: array<String^>^ words;
	private: Random^ rand = gcnew Random();
	private: String^ answer_word;
	private: String^ secret_word;
	private: int HP = 7;


	public:
		Gall(void)
		{
			InitializeComponent();
			words = gcnew array<String^>{ "машина", "банан", "радуга", "книга", "зонтик",
				"яблоко", "фонарь", "крокодил", "солнце", "гитара" };
			int randIndex = rand->Next(0, words->Length);
			answer_word = words[randIndex];
			secret_word = gcnew String('*', answer_word->Length);
			this->word->Text = secret_word;
			this->word->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Gall()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ health;
	protected:

	private: System::Windows::Forms::Label^ word;

	private: System::Windows::Forms::Label^ label4;
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
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->health = (gcnew System::Windows::Forms::Label());
			this->word = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Health x";
			// 
			// health
			// 
			this->health->AutoSize = true;
			this->health->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->health->Location = System::Drawing::Point(172, 47);
			this->health->Name = L"health";
			this->health->Size = System::Drawing::Size(42, 46);
			this->health->TabIndex = 1;
			this->health->Text = L"7";
			// 
			// word
			// 
			this->word->AutoSize = true;
			this->word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->word->Location = System::Drawing::Point(57, 106);
			this->word->Name = L"word";
			this->word->Size = System::Drawing::Size(305, 63);
			this->word->TabIndex = 2;
			this->word->Text = L"secret word";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Gallow";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GrayText;
			this->button1->Location = System::Drawing::Point(12, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 4;
			this->button1->Text = L"А";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GrayText;
			this->button2->Location = System::Drawing::Point(68, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Б";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Location = System::Drawing::Point(124, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 6;
			this->button3->Text = L"В";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GrayText;
			this->button4->Location = System::Drawing::Point(180, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Г";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GrayText;
			this->button5->Location = System::Drawing::Point(236, 186);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Д";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GrayText;
			this->button6->Location = System::Drawing::Point(292, 186);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Е";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GrayText;
			this->button7->Location = System::Drawing::Point(348, 186);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Ё";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GrayText;
			this->button8->Location = System::Drawing::Point(12, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Ж";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GrayText;
			this->button9->Location = System::Drawing::Point(68, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 12;
			this->button9->Text = L"З";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GrayText;
			this->button10->Location = System::Drawing::Point(124, 242);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 13;
			this->button10->Text = L"И";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GrayText;
			this->button11->Location = System::Drawing::Point(180, 242);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Й";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GrayText;
			this->button12->Location = System::Drawing::Point(236, 242);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 15;
			this->button12->Text = L"К";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::GrayText;
			this->button13->Location = System::Drawing::Point(292, 242);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Л";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::GrayText;
			this->button14->Location = System::Drawing::Point(348, 242);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 17;
			this->button14->Text = L"М";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GrayText;
			this->button15->Location = System::Drawing::Point(12, 298);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Н";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::GrayText;
			this->button16->Location = System::Drawing::Point(68, 298);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 19;
			this->button16->Text = L"О";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::GrayText;
			this->button17->Location = System::Drawing::Point(124, 298);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 20;
			this->button17->Text = L"П";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::GrayText;
			this->button18->Location = System::Drawing::Point(180, 298);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 50);
			this->button18->TabIndex = 21;
			this->button18->Text = L"Р";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::GrayText;
			this->button19->Location = System::Drawing::Point(236, 298);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 50);
			this->button19->TabIndex = 22;
			this->button19->Text = L"С";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::GrayText;
			this->button20->Location = System::Drawing::Point(292, 298);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 50);
			this->button20->TabIndex = 23;
			this->button20->Text = L"Т";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::GrayText;
			this->button21->Location = System::Drawing::Point(348, 298);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 50);
			this->button21->TabIndex = 24;
			this->button21->Text = L"У";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::GrayText;
			this->button22->Location = System::Drawing::Point(12, 354);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(50, 50);
			this->button22->TabIndex = 25;
			this->button22->Text = L"Ф";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::GrayText;
			this->button23->Location = System::Drawing::Point(68, 354);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 50);
			this->button23->TabIndex = 26;
			this->button23->Text = L"Х";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::GrayText;
			this->button24->Location = System::Drawing::Point(124, 354);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(50, 50);
			this->button24->TabIndex = 27;
			this->button24->Text = L"Ц";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::GrayText;
			this->button25->Location = System::Drawing::Point(180, 354);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(50, 50);
			this->button25->TabIndex = 28;
			this->button25->Text = L"Ч";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::GrayText;
			this->button26->Location = System::Drawing::Point(236, 354);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(50, 50);
			this->button26->TabIndex = 29;
			this->button26->Text = L"Ш";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::GrayText;
			this->button27->Location = System::Drawing::Point(292, 354);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(50, 50);
			this->button27->TabIndex = 30;
			this->button27->Text = L"Щ";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::GrayText;
			this->button28->Location = System::Drawing::Point(348, 354);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 50);
			this->button28->TabIndex = 31;
			this->button28->Text = L"Ъ";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::GrayText;
			this->button29->Location = System::Drawing::Point(12, 410);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(106, 50);
			this->button29->TabIndex = 32;
			this->button29->Text = L"Ы";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::GrayText;
			this->button30->Location = System::Drawing::Point(124, 410);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(50, 50);
			this->button30->TabIndex = 33;
			this->button30->Text = L"Ь";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::GrayText;
			this->button31->Location = System::Drawing::Point(180, 410);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 50);
			this->button31->TabIndex = 34;
			this->button31->Text = L"Э";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::GrayText;
			this->button32->Location = System::Drawing::Point(236, 410);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 50);
			this->button32->TabIndex = 35;
			this->button32->Text = L"Ю";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::GrayText;
			this->button33->Location = System::Drawing::Point(292, 410);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(106, 50);
			this->button33->TabIndex = 36;
			this->button33->Text = L"Я";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Gall::button_symbol_Click);
			// 
			// Gall
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ClientSize = System::Drawing::Size(416, 472);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->word);
			this->Controls->Add(this->health);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Gall";
			this->ShowIcon = false;
			this->Text = L"Gallow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_symbol_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		String^ buttonText = button->Text;
		String^ lowerButton = buttonText->ToLower();

		bool guessedCorrectly = false;

		for (int i = 0; i < answer_word->Length; i++) {
			if (answer_word[i] == lowerButton[0]) {
				if (i > 0) {
					secret_word = secret_word->Remove(i, 1)->Insert(i, buttonText->ToLower());
				}
				else {
					secret_word = secret_word->Remove(i, 1)->Insert(i, buttonText);
				}
				guessedCorrectly = true;
			}
		}

		if (guessedCorrectly) {
			word->Text = secret_word;
			if (secret_word->ToLower() == answer_word) {
				MessageBox::Show("You win!");
				Close();
			}
		}
		else {
			HP--;
			health->Text = System::Convert::ToString(HP);

			if (HP == 0) {
				MessageBox::Show("Game Over!");
				Close();
			}
		}
		button->Visible = false;
	}
};
}
