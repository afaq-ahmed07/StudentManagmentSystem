#pragma once
#include "Projectcode.h"
#include "Teacher.h"

static std::string toStandardString(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);
	return returnString;
}
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Addstudent;
	private: System::Windows::Forms::Button^ Addteacher;
	private: System::Windows::Forms::Button^ Exit;

	private: System::Windows::Forms::Label^ FirstName;
	protected:
	private: System::Windows::Forms::Label^ LastName;

	private: System::Windows::Forms::Label^ register_date;
	private: System::Windows::Forms::Label^ Gender;
	private: System::Windows::Forms::Label^ contact;
	private: System::Windows::Forms::Label^ b_group;
	private: System::Windows::Forms::Label^ address;
	private: System::Windows::Forms::Label^ fee_status;
	private: System::Windows::Forms::TextBox^ textfirst;
	private: System::Windows::Forms::TextBox^ textlast;



	private: System::Windows::Forms::TextBox^ textregister;
	private: System::Windows::Forms::TextBox^ textgender;
	private: System::Windows::Forms::TextBox^ textcontact;




	private: System::Windows::Forms::TextBox^ textbgroup;
	private: System::Windows::Forms::TextBox^ textaddress;


	private: System::Windows::Forms::ComboBox^ combofee;
	private: System::Windows::Forms::Panel^ studentpanel;

	private: System::Windows::Forms::Button^ ret;
	private: System::Windows::Forms::Button^ save;









	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ First_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Last_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Registration;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Blood_group;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contact_;
	private: System::Windows::Forms::Button^ databack;


























































	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::Label());
			this->register_date = (gcnew System::Windows::Forms::Label());
			this->Gender = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->b_group = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::Label());
			this->fee_status = (gcnew System::Windows::Forms::Label());
			this->textfirst = (gcnew System::Windows::Forms::TextBox());
			this->textlast = (gcnew System::Windows::Forms::TextBox());
			this->textregister = (gcnew System::Windows::Forms::TextBox());
			this->textgender = (gcnew System::Windows::Forms::TextBox());
			this->textcontact = (gcnew System::Windows::Forms::TextBox());
			this->textbgroup = (gcnew System::Windows::Forms::TextBox());
			this->textaddress = (gcnew System::Windows::Forms::TextBox());
			this->combofee = (gcnew System::Windows::Forms::ComboBox());
			this->studentpanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->First_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Last_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Registration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Blood_group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contact_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ret = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->Addstudent = (gcnew System::Windows::Forms::Button());
			this->Addteacher = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->databack = (gcnew System::Windows::Forms::Button());
			this->studentpanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// FirstName
			// 
			this->FirstName->AutoSize = true;
			this->FirstName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->Location = System::Drawing::Point(8, 24);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(84, 19);
			this->FirstName->TabIndex = 0;
			this->FirstName->Text = L"First Name";
			// 
			// LastName
			// 
			this->LastName->AutoSize = true;
			this->LastName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastName->Location = System::Drawing::Point(5, 76);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(87, 19);
			this->LastName->TabIndex = 1;
			this->LastName->Text = L"Last Name ";
			// 
			// register_date
			// 
			this->register_date->AutoSize = true;
			this->register_date->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_date->Location = System::Drawing::Point(4, 123);
			this->register_date->Name = L"register_date";
			this->register_date->Size = System::Drawing::Size(92, 19);
			this->register_date->TabIndex = 3;
			this->register_date->Text = L"Registration";
			// 
			// Gender
			// 
			this->Gender->AutoSize = true;
			this->Gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Gender->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gender->Location = System::Drawing::Point(339, 76);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(59, 19);
			this->Gender->TabIndex = 4;
			this->Gender->Text = L"Gender";
			// 
			// contact
			// 
			this->contact->AutoSize = true;
			this->contact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->contact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(323, 24);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(89, 19);
			this->contact->TabIndex = 5;
			this->contact->Text = L"Contact No.";
			// 
			// b_group
			// 
			this->b_group->AutoSize = true;
			this->b_group->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_group->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_group->Location = System::Drawing::Point(323, 123);
			this->b_group->Name = L"b_group";
			this->b_group->Size = System::Drawing::Size(94, 19);
			this->b_group->TabIndex = 6;
			this->b_group->Text = L"Blood Group";
			// 
			// address
			// 
			this->address->AutoSize = true;
			this->address->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->address->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(339, 174);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(64, 19);
			this->address->TabIndex = 7;
			this->address->Text = L"Address";
			// 
			// fee_status
			// 
			this->fee_status->AutoSize = true;
			this->fee_status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fee_status->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fee_status->Location = System::Drawing::Point(5, 174);
			this->fee_status->Name = L"fee_status";
			this->fee_status->Size = System::Drawing::Size(80, 19);
			this->fee_status->TabIndex = 8;
			this->fee_status->Text = L"Fee Status";
			// 
			// textfirst
			// 
			this->textfirst->BackColor = System::Drawing::SystemColors::Menu;
			this->textfirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textfirst->Location = System::Drawing::Point(102, 23);
			this->textfirst->Name = L"textfirst";
			this->textfirst->Size = System::Drawing::Size(169, 22);
			this->textfirst->TabIndex = 9;
			// 
			// textlast
			// 
			this->textlast->BackColor = System::Drawing::SystemColors::Menu;
			this->textlast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textlast->Location = System::Drawing::Point(102, 75);
			this->textlast->Name = L"textlast";
			this->textlast->Size = System::Drawing::Size(170, 22);
			this->textlast->TabIndex = 10;
			// 
			// textregister
			// 
			this->textregister->BackColor = System::Drawing::SystemColors::Menu;
			this->textregister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textregister->Location = System::Drawing::Point(102, 120);
			this->textregister->Name = L"textregister";
			this->textregister->Size = System::Drawing::Size(170, 22);
			this->textregister->TabIndex = 12;
			// 
			// textgender
			// 
			this->textgender->BackColor = System::Drawing::SystemColors::Menu;
			this->textgender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textgender->Location = System::Drawing::Point(431, 76);
			this->textgender->Name = L"textgender";
			this->textgender->Size = System::Drawing::Size(171, 22);
			this->textgender->TabIndex = 13;
			// 
			// textcontact
			// 
			this->textcontact->BackColor = System::Drawing::SystemColors::Menu;
			this->textcontact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textcontact->Location = System::Drawing::Point(431, 24);
			this->textcontact->Name = L"textcontact";
			this->textcontact->Size = System::Drawing::Size(171, 22);
			this->textcontact->TabIndex = 14;
			// 
			// textbgroup
			// 
			this->textbgroup->BackColor = System::Drawing::SystemColors::Menu;
			this->textbgroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbgroup->Location = System::Drawing::Point(431, 123);
			this->textbgroup->Name = L"textbgroup";
			this->textbgroup->Size = System::Drawing::Size(171, 22);
			this->textbgroup->TabIndex = 15;
			// 
			// textaddress
			// 
			this->textaddress->BackColor = System::Drawing::SystemColors::Menu;
			this->textaddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textaddress->Location = System::Drawing::Point(431, 174);
			this->textaddress->Name = L"textaddress";
			this->textaddress->Size = System::Drawing::Size(171, 22);
			this->textaddress->TabIndex = 16;
			// 
			// combofee
			// 
			this->combofee->BackColor = System::Drawing::SystemColors::Menu;
			this->combofee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combofee->FormattingEnabled = true;
			this->combofee->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
			this->combofee->Location = System::Drawing::Point(102, 172);
			this->combofee->Name = L"combofee";
			this->combofee->Size = System::Drawing::Size(170, 24);
			this->combofee->TabIndex = 19;
			// 
			// studentpanel
			// 
			this->studentpanel->BackColor = System::Drawing::Color::Transparent;
			this->studentpanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"studentpanel.BackgroundImage")));
			this->studentpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->studentpanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->studentpanel->Controls->Add(this->panel1);
			this->studentpanel->Controls->Add(this->textgender);
			this->studentpanel->Controls->Add(this->ret);
			this->studentpanel->Controls->Add(this->save);
			this->studentpanel->Controls->Add(this->FirstName);
			this->studentpanel->Controls->Add(this->textfirst);
			this->studentpanel->Controls->Add(this->combofee);
			this->studentpanel->Controls->Add(this->textaddress);
			this->studentpanel->Controls->Add(this->address);
			this->studentpanel->Controls->Add(this->textlast);
			this->studentpanel->Controls->Add(this->textcontact);
			this->studentpanel->Controls->Add(this->LastName);
			this->studentpanel->Controls->Add(this->contact);
			this->studentpanel->Controls->Add(this->textbgroup);
			this->studentpanel->Controls->Add(this->textregister);
			this->studentpanel->Controls->Add(this->Gender);
			this->studentpanel->Controls->Add(this->fee_status);
			this->studentpanel->Controls->Add(this->register_date);
			this->studentpanel->Controls->Add(this->b_group);
			this->studentpanel->Controls->Add(this->back);
			this->studentpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentpanel->ForeColor = System::Drawing::Color::Black;
			this->studentpanel->Location = System::Drawing::Point(0, 0);
			this->studentpanel->Name = L"studentpanel";
			this->studentpanel->Size = System::Drawing::Size(616, 347);
			this->studentpanel->TabIndex = 21;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->databack);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(612, 343);
			this->panel1->TabIndex = 25;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->First_Name,
					this->ID_, this->Last_Name, this->Registration, this->Gender_, this->Address_, this->Blood_group, this->Contact_
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(612, 343);
			this->dataGridView1->TabIndex = 0;
			// 
			// First_Name
			// 
			this->First_Name->HeaderText = L"First_Name";
			this->First_Name->Name = L"First_Name";
			this->First_Name->ReadOnly = true;
			// 
			// ID_
			// 
			this->ID_->HeaderText = L"ID_";
			this->ID_->Name = L"ID_";
			this->ID_->ReadOnly = true;
			// 
			// Last_Name
			// 
			this->Last_Name->HeaderText = L"Last_Name";
			this->Last_Name->Name = L"Last_Name";
			this->Last_Name->ReadOnly = true;
			// 
			// Registration
			// 
			this->Registration->HeaderText = L"Registration";
			this->Registration->Name = L"Registration";
			this->Registration->ReadOnly = true;
			// 
			// Gender_
			// 
			this->Gender_->HeaderText = L"Gender_";
			this->Gender_->Name = L"Gender_";
			this->Gender_->ReadOnly = true;
			// 
			// Address_
			// 
			this->Address_->HeaderText = L"Address_";
			this->Address_->Name = L"Address_";
			this->Address_->ReadOnly = true;
			// 
			// Blood_group
			// 
			this->Blood_group->HeaderText = L"Blood_group";
			this->Blood_group->Name = L"Blood_group";
			this->Blood_group->ReadOnly = true;
			// 
			// Contact_
			// 
			this->Contact_->HeaderText = L"Contact_";
			this->Contact_->Name = L"Contact_";
			this->Contact_->ReadOnly = true;
			// 
			// ret
			// 
			this->ret->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ret->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ret->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ret->Location = System::Drawing::Point(372, 228);
			this->ret->Name = L"ret";
			this->ret->Size = System::Drawing::Size(75, 30);
			this->ret->TabIndex = 21;
			this->ret->Text = L"Display";
			this->ret->UseVisualStyleBackColor = false;
			this->ret->Click += gcnew System::EventHandler(this, &MyForm::ret_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::WhiteSmoke;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->Location = System::Drawing::Point(453, 228);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 30);
			this->save->TabIndex = 20;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::WhiteSmoke;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Location = System::Drawing::Point(534, 228);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(75, 30);
			this->back->TabIndex = 24;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
			// 
			// Addstudent
			// 
			this->Addstudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Addstudent->BackColor = System::Drawing::Color::Transparent;
			this->Addstudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Addstudent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addstudent->Location = System::Drawing::Point(41, 119);
			this->Addstudent->Name = L"Addstudent";
			this->Addstudent->Size = System::Drawing::Size(113, 31);
			this->Addstudent->TabIndex = 0;
			this->Addstudent->Text = L"Add Student";
			this->Addstudent->UseVisualStyleBackColor = false;
			this->Addstudent->Click += gcnew System::EventHandler(this, &MyForm::Addstudent_Click);
			// 
			// Addteacher
			// 
			this->Addteacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Addteacher->BackColor = System::Drawing::Color::Transparent;
			this->Addteacher->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Addteacher->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addteacher->Location = System::Drawing::Point(41, 162);
			this->Addteacher->Name = L"Addteacher";
			this->Addteacher->Size = System::Drawing::Size(113, 30);
			this->Addteacher->TabIndex = 1;
			this->Addteacher->Text = L"Add Teacher";
			this->Addteacher->UseVisualStyleBackColor = false;
			this->Addteacher->Click += gcnew System::EventHandler(this, &MyForm::Addteacher_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Exit->BackColor = System::Drawing::Color::Transparent;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(41, 212);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(113, 30);
			this->Exit->TabIndex = 2;
			this->Exit->Text = L"Close";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// databack
			// 
			this->databack->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->databack->Location = System::Drawing::Point(527, 287);
			this->databack->Name = L"databack";
			this->databack->Size = System::Drawing::Size(75, 31);
			this->databack->TabIndex = 1;
			this->databack->Text = L"Back";
			this->databack->UseVisualStyleBackColor = true;
			this->databack->Click += gcnew System::EventHandler(this, &MyForm::databack_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(616, 347);
			this->Controls->Add(this->studentpanel);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Addteacher);
			this->Controls->Add(this->Addstudent);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"SMS";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->studentpanel->ResumeLayout(false);
			this->studentpanel->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Addstudent_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Visible = false;
		this->studentpanel->Show();


	}
	private: System::Void Addteacher_Click(System::Object^ sender, System::EventArgs^ e) {
		Teacher obj1;
		obj1.ShowDialog();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->studentpanel->Hide();
		this->dataGridView1->Visible = false;
		this->panel1->Visible = false;
	}
	private: System::Void textstudent_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
	LL_student obj;
	bool temp = false;
	if (combofee->SelectedItem == "Yes")
	{
		temp = true;
	}
	else
	{
		temp = false;
	}
	obj.add_student(toStandardString(textfirst->Text), toStandardString(textlast->Text), toStandardString(textregister->Text), toStandardString(textgender->Text), toStandardString(textbgroup->Text), toStandardString(textcontact->Text), toStandardString(textaddress->Text), temp);
	obj.save_student(obj);
	this->textaddress->Clear();
	this->textbgroup->Clear();
	this->textcontact->Clear();
	this->textfirst->Clear();
	this->textgender->Clear();
	this->textlast->Clear();
	this->textregister->Clear();
	MessageBox::Show("Data Saved");
	MessageBoxButtons::OK;

     }
	private: System::Void ret_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this ->panel1->Visible = true;
		dataGridView1->Visible = true;
		int id = 1;
		string str;
		LL_student obj;
		node_s* temp1;
		 obj.load(obj);
		temp1 = obj.get_head();
		while (temp1 != NULL)
		{
			System::String^ f_name =gcnew String(temp1->f_name.c_str());
			System::String^ l_name = gcnew String(temp1->l_name.c_str());
			System::String^ r_date = gcnew String(temp1->r_date.c_str());
			System::String^ gen = gcnew String(temp1->gender.c_str());
			System::String^ add = gcnew String(temp1->address.c_str());
			System::String^ bgr = gcnew String(temp1->b_group.c_str());
			System::String^ co = gcnew String(temp1->contact.c_str());
			str = to_string(id);
			String^ t_id = gcnew String(str.c_str());
			dataGridView1->Rows->Add(f_name,t_id, l_name, r_date,gen,add,bgr,co);
			temp1 = temp1->next;
			id++;
		}

	}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->studentpanel->Visible = false;
}
private: System::Void databack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = false;
	this->studentpanel->Visible = true;
}
};
}
