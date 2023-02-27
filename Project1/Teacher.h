#pragma once
#include "Projectcode.h"
static std::string toStandard_String(System::String^ string)
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
	/// Summary for Teacher
	/// </summary>
	public ref class Teacher : public System::Windows::Forms::Form
	{
	public:
		Teacher(void)
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
		~Teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ fname;
	protected:
	private: System::Windows::Forms::Label^ lname;
	private: System::Windows::Forms::Label^ rdate;
	private: System::Windows::Forms::Label^ Contact;
	private: System::Windows::Forms::Label^ email;
	private: System::Windows::Forms::Label^ gender;
	private: System::Windows::Forms::Label^ bgroup;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::TextBox^ textfname;
	private: System::Windows::Forms::TextBox^ textlast;
	private: System::Windows::Forms::TextBox^ textrdate;
	private: System::Windows::Forms::TextBox^ textcontact;
	private: System::Windows::Forms::TextBox^ textemail;
	private: System::Windows::Forms::TextBox^ textgender;
	private: System::Windows::Forms::TextBox^ textbgroup;
	private: System::Windows::Forms::TextBox^ textuser;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ back;

	private: System::Windows::Forms::Panel^ editpanel;
	private: System::Windows::Forms::Button^ backedit;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::TextBox^ textBoxc;
	private: System::Windows::Forms::TextBox^ textBoxl;
	private: System::Windows::Forms::TextBox^ textBoxu;
	private: System::Windows::Forms::TextBox^ textBoxe;
	private: System::Windows::Forms::TextBox^ textBoxf;
	private: System::Windows::Forms::Label^ editlastname;
	private: System::Windows::Forms::Label^ editcontact;
	private: System::Windows::Forms::Label^ edituser;
	private: System::Windows::Forms::Label^ editemail;
	private: System::Windows::Forms::Label^ editfname;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ id;
	private: System::Windows::Forms::Button^ edit;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ display;








	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ First_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Last_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Registration;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Blood_group;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contact_;









































	protected:













	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teacher::typeid));
			this->fname = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->rdate = (gcnew System::Windows::Forms::Label());
			this->Contact = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->bgroup = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->textfname = (gcnew System::Windows::Forms::TextBox());
			this->textlast = (gcnew System::Windows::Forms::TextBox());
			this->textrdate = (gcnew System::Windows::Forms::TextBox());
			this->textcontact = (gcnew System::Windows::Forms::TextBox());
			this->textemail = (gcnew System::Windows::Forms::TextBox());
			this->textgender = (gcnew System::Windows::Forms::TextBox());
			this->textbgroup = (gcnew System::Windows::Forms::TextBox());
			this->textuser = (gcnew System::Windows::Forms::TextBox());
			this->save = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->editpanel = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->First_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Username_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Last_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Registration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Blood_group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contact_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->backedit = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->textBoxc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxl = (gcnew System::Windows::Forms::TextBox());
			this->textBoxu = (gcnew System::Windows::Forms::TextBox());
			this->textBoxe = (gcnew System::Windows::Forms::TextBox());
			this->textBoxf = (gcnew System::Windows::Forms::TextBox());
			this->editlastname = (gcnew System::Windows::Forms::Label());
			this->editcontact = (gcnew System::Windows::Forms::Label());
			this->edituser = (gcnew System::Windows::Forms::Label());
			this->editemail = (gcnew System::Windows::Forms::Label());
			this->editfname = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->editpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// fname
			// 
			this->fname->AutoSize = true;
			this->fname->BackColor = System::Drawing::Color::Transparent;
			this->fname->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->fname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname->Location = System::Drawing::Point(12, 31);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(86, 21);
			this->fname->TabIndex = 0;
			this->fname->Text = L"First Name";
			// 
			// lname
			// 
			this->lname->AutoSize = true;
			this->lname->BackColor = System::Drawing::Color::Transparent;
			this->lname->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname->Location = System::Drawing::Point(13, 90);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(85, 21);
			this->lname->TabIndex = 1;
			this->lname->Text = L"Last Name";
			// 
			// rdate
			// 
			this->rdate->AutoSize = true;
			this->rdate->BackColor = System::Drawing::Color::Transparent;
			this->rdate->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->rdate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdate->Location = System::Drawing::Point(12, 158);
			this->rdate->Name = L"rdate";
			this->rdate->Size = System::Drawing::Size(94, 21);
			this->rdate->TabIndex = 2;
			this->rdate->Text = L"Registration";
			// 
			// Contact
			// 
			this->Contact->AutoSize = true;
			this->Contact->BackColor = System::Drawing::Color::Transparent;
			this->Contact->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Contact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contact->Location = System::Drawing::Point(13, 211);
			this->Contact->Name = L"Contact";
			this->Contact->Size = System::Drawing::Size(91, 21);
			this->Contact->TabIndex = 3;
			this->Contact->Text = L"Contact No.";
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->BackColor = System::Drawing::Color::Transparent;
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->email->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(356, 32);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(49, 21);
			this->email->TabIndex = 4;
			this->email->Text = L"Email";
			// 
			// gender
			// 
			this->gender->AutoSize = true;
			this->gender->BackColor = System::Drawing::Color::Transparent;
			this->gender->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->gender->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->Location = System::Drawing::Point(344, 93);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(61, 21);
			this->gender->TabIndex = 5;
			this->gender->Text = L"Gender";
			// 
			// bgroup
			// 
			this->bgroup->AutoSize = true;
			this->bgroup->BackColor = System::Drawing::Color::Transparent;
			this->bgroup->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->bgroup->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bgroup->Location = System::Drawing::Point(309, 158);
			this->bgroup->Name = L"bgroup";
			this->bgroup->Size = System::Drawing::Size(96, 21);
			this->bgroup->TabIndex = 6;
			this->bgroup->Text = L"Blood Group";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->username->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(326, 211);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(79, 21);
			this->username->TabIndex = 7;
			this->username->Text = L"Username";
			// 
			// textfname
			// 
			this->textfname->Location = System::Drawing::Point(113, 32);
			this->textfname->Name = L"textfname";
			this->textfname->Size = System::Drawing::Size(162, 20);
			this->textfname->TabIndex = 8;
			// 
			// textlast
			// 
			this->textlast->Location = System::Drawing::Point(113, 90);
			this->textlast->Name = L"textlast";
			this->textlast->Size = System::Drawing::Size(162, 20);
			this->textlast->TabIndex = 9;
			// 
			// textrdate
			// 
			this->textrdate->Location = System::Drawing::Point(113, 157);
			this->textrdate->Name = L"textrdate";
			this->textrdate->Size = System::Drawing::Size(162, 20);
			this->textrdate->TabIndex = 10;
			// 
			// textcontact
			// 
			this->textcontact->Location = System::Drawing::Point(113, 209);
			this->textcontact->Name = L"textcontact";
			this->textcontact->Size = System::Drawing::Size(162, 20);
			this->textcontact->TabIndex = 11;
			// 
			// textemail
			// 
			this->textemail->Location = System::Drawing::Point(423, 29);
			this->textemail->Name = L"textemail";
			this->textemail->Size = System::Drawing::Size(155, 20);
			this->textemail->TabIndex = 12;
			// 
			// textgender
			// 
			this->textgender->Location = System::Drawing::Point(423, 92);
			this->textgender->Name = L"textgender";
			this->textgender->Size = System::Drawing::Size(155, 20);
			this->textgender->TabIndex = 13;
			// 
			// textbgroup
			// 
			this->textbgroup->Location = System::Drawing::Point(423, 158);
			this->textbgroup->Name = L"textbgroup";
			this->textbgroup->Size = System::Drawing::Size(155, 20);
			this->textbgroup->TabIndex = 14;
			// 
			// textuser
			// 
			this->textuser->Location = System::Drawing::Point(423, 212);
			this->textuser->Name = L"textuser";
			this->textuser->Size = System::Drawing::Size(155, 20);
			this->textuser->TabIndex = 15;
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::WhiteSmoke;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->Location = System::Drawing::Point(503, 266);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 30);
			this->save->TabIndex = 16;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &Teacher::save_Click);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::WhiteSmoke;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->Location = System::Drawing::Point(21, 257);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(75, 30);
			this->back->TabIndex = 17;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &Teacher::back_Click);
			// 
			// editpanel
			// 
			this->editpanel->BackColor = System::Drawing::Color::DimGray;
			this->editpanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editpanel.BackgroundImage")));
			this->editpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->editpanel->Controls->Add(this->backedit);
			this->editpanel->Controls->Add(this->update);
			this->editpanel->Controls->Add(this->textBoxc);
			this->editpanel->Controls->Add(this->textBoxl);
			this->editpanel->Controls->Add(this->textBoxu);
			this->editpanel->Controls->Add(this->textBoxe);
			this->editpanel->Controls->Add(this->textBoxf);
			this->editpanel->Controls->Add(this->editlastname);
			this->editpanel->Controls->Add(this->editcontact);
			this->editpanel->Controls->Add(this->edituser);
			this->editpanel->Controls->Add(this->editemail);
			this->editpanel->Controls->Add(this->editfname);
			this->editpanel->Controls->Add(this->textBox1);
			this->editpanel->Controls->Add(this->id);
			this->editpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editpanel->Location = System::Drawing::Point(0, 0);
			this->editpanel->Name = L"editpanel";
			this->editpanel->Size = System::Drawing::Size(599, 308);
			this->editpanel->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->First_Name,
					this->ID_, this->Username_, this->Last_Name, this->Registration, this->Email_, this->Gender_, this->Blood_group, this->Contact_
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(599, 308);
			this->dataGridView1->TabIndex = 3;
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
			// Username_
			// 
			this->Username_->HeaderText = L"Username_";
			this->Username_->Name = L"Username_";
			this->Username_->ReadOnly = true;
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
			// Email_
			// 
			this->Email_->HeaderText = L"Email_";
			this->Email_->Name = L"Email_";
			this->Email_->ReadOnly = true;
			// 
			// Gender_
			// 
			this->Gender_->HeaderText = L"Gender_";
			this->Gender_->Name = L"Gender_";
			this->Gender_->ReadOnly = true;
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
			// backedit
			// 
			this->backedit->BackColor = System::Drawing::Color::WhiteSmoke;
			this->backedit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backedit->Location = System::Drawing::Point(423, 254);
			this->backedit->Name = L"backedit";
			this->backedit->Size = System::Drawing::Size(75, 27);
			this->backedit->TabIndex = 13;
			this->backedit->Text = L"Back";
			this->backedit->UseVisualStyleBackColor = false;
			this->backedit->Click += gcnew System::EventHandler(this, &Teacher::backedit_Click);
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::WhiteSmoke;
			this->update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->Location = System::Drawing::Point(503, 254);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(75, 27);
			this->update->TabIndex = 12;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &Teacher::update_Click);
			// 
			// textBoxc
			// 
			this->textBoxc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxc->Location = System::Drawing::Point(445, 152);
			this->textBoxc->Name = L"textBoxc";
			this->textBoxc->Size = System::Drawing::Size(133, 20);
			this->textBoxc->TabIndex = 11;
			// 
			// textBoxl
			// 
			this->textBoxl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxl->Location = System::Drawing::Point(445, 87);
			this->textBoxl->Name = L"textBoxl";
			this->textBoxl->Size = System::Drawing::Size(133, 20);
			this->textBoxl->TabIndex = 10;
			// 
			// textBoxu
			// 
			this->textBoxu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxu->Location = System::Drawing::Point(143, 206);
			this->textBoxu->Name = L"textBoxu";
			this->textBoxu->Size = System::Drawing::Size(132, 20);
			this->textBoxu->TabIndex = 9;
			// 
			// textBoxe
			// 
			this->textBoxe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxe->Location = System::Drawing::Point(143, 152);
			this->textBoxe->Name = L"textBoxe";
			this->textBoxe->Size = System::Drawing::Size(132, 20);
			this->textBoxe->TabIndex = 8;
			// 
			// textBoxf
			// 
			this->textBoxf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxf->Location = System::Drawing::Point(143, 87);
			this->textBoxf->Name = L"textBoxf";
			this->textBoxf->Size = System::Drawing::Size(132, 20);
			this->textBoxf->TabIndex = 7;
			// 
			// editlastname
			// 
			this->editlastname->AutoSize = true;
			this->editlastname->BackColor = System::Drawing::Color::Transparent;
			this->editlastname->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->editlastname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editlastname->Location = System::Drawing::Point(293, 90);
			this->editlastname->Name = L"editlastname";
			this->editlastname->Size = System::Drawing::Size(126, 21);
			this->editlastname->TabIndex = 6;
			this->editlastname->Text = L"Enter Last Name";
			// 
			// editcontact
			// 
			this->editcontact->AutoSize = true;
			this->editcontact->BackColor = System::Drawing::Color::Transparent;
			this->editcontact->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->editcontact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editcontact->Location = System::Drawing::Point(309, 156);
			this->editcontact->Name = L"editcontact";
			this->editcontact->Size = System::Drawing::Size(104, 21);
			this->editcontact->TabIndex = 5;
			this->editcontact->Text = L"Enter Contact";
			// 
			// edituser
			// 
			this->edituser->AutoSize = true;
			this->edituser->BackColor = System::Drawing::Color::Transparent;
			this->edituser->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->edituser->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edituser->Location = System::Drawing::Point(12, 205);
			this->edituser->Name = L"edituser";
			this->edituser->Size = System::Drawing::Size(120, 21);
			this->edituser->TabIndex = 4;
			this->edituser->Text = L"Enter Username";
			// 
			// editemail
			// 
			this->editemail->AutoSize = true;
			this->editemail->BackColor = System::Drawing::Color::Transparent;
			this->editemail->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->editemail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editemail->Location = System::Drawing::Point(13, 153);
			this->editemail->Name = L"editemail";
			this->editemail->Size = System::Drawing::Size(90, 21);
			this->editemail->TabIndex = 3;
			this->editemail->Text = L"Enter Email";
			// 
			// editfname
			// 
			this->editfname->AutoSize = true;
			this->editfname->BackColor = System::Drawing::Color::Transparent;
			this->editfname->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->editfname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editfname->Location = System::Drawing::Point(12, 90);
			this->editfname->Name = L"editfname";
			this->editfname->Size = System::Drawing::Size(127, 21);
			this->editfname->TabIndex = 2;
			this->editfname->Text = L"Enter First Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(161, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 20);
			this->textBox1->TabIndex = 1;
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::Transparent;
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(17, 30);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(128, 21);
			this->id->TabIndex = 0;
			this->id->Text = L"Enter Teacher ID";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::WhiteSmoke;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->edit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->Location = System::Drawing::Point(402, 266);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(75, 30);
			this->edit->TabIndex = 1;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &Teacher::edit_Click);
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::Color::WhiteSmoke;
			this->display->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->display->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(313, 266);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(75, 30);
			this->display->TabIndex = 19;
			this->display->Text = L"Display";
			this->display->UseVisualStyleBackColor = false;
			this->display->Click += gcnew System::EventHandler(this, &Teacher::display_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(599, 308);
			this->panel1->TabIndex = 20;
			// 
			// Teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(599, 308);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->editpanel);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->back);
			this->Controls->Add(this->save);
			this->Controls->Add(this->textuser);
			this->Controls->Add(this->textbgroup);
			this->Controls->Add(this->textgender);
			this->Controls->Add(this->textemail);
			this->Controls->Add(this->textcontact);
			this->Controls->Add(this->textrdate);
			this->Controls->Add(this->textlast);
			this->Controls->Add(this->textfname);
			this->Controls->Add(this->username);
			this->Controls->Add(this->bgroup);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->email);
			this->Controls->Add(this->Contact);
			this->Controls->Add(this->rdate);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->display);
			this->Name = L"Teacher";
			this->Text = L"Teacher";
			this->Load += gcnew System::EventHandler(this, &Teacher::Teacher_Load);
			this->editpanel->ResumeLayout(false);
			this->editpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		LL_teacher obj,temp_obj;
		obj.add_teacher(toStandard_String(textfname->Text), toStandard_String(textlast->Text), toStandard_String(textuser->Text), toStandard_String(textemail->Text), toStandard_String(textrdate->Text), toStandard_String(textgender->Text), toStandard_String(textbgroup->Text), toStandard_String(textcontact->Text));
        
		obj.save_teacher(obj);
		this->textbgroup->Clear();
		this->textcontact->Clear();
		this->textemail->Clear();
		this->textfname->Clear();
		this->textgender->Clear();
		this->textlast->Clear();
		this->textrdate->Clear();
		this->textuser->Clear();
		MessageBox::Show("Data Saved");
		MessageBoxButtons::OK;

	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Teacher_Load(System::Object^ sender, System::EventArgs^ e) {
		this->editpanel->Visible = false;
		this->panel1->Visible = false;
	}
	private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->editpanel->Visible = true;
	}
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		LL_teacher obj,temp_obj;
		string str=toStandard_String(this->textBox1->Text);
		node* temp1;
		obj.load(obj);
		obj.pointhead(temp1);
		int id = stoi(str);
		int count = 1;
		while (temp1 != NULL)
		{
			if (count==id)
			{
				temp1->f_name = toStandard_String(this->textBoxf->Text);
				temp1->l_name = toStandard_String(this->textBoxl->Text);
				temp1->email = toStandard_String(this->textBoxe->Text);
				temp1->u_name = toStandard_String(this->textBoxu->Text);
				temp1->contact = toStandard_String(this->textBoxc->Text);
			}
			temp_obj.add_teacher(temp1->f_name,temp1->l_name,temp1->u_name,temp1->email,temp1->r_date,temp1->gender,temp1->b_group,temp1->contact);
				temp1 = temp1->next;
				count++;
		}
			temp_obj.save_teacher(temp_obj);
			this->textBoxf->Clear();
			this->textBoxc->Clear();
			this->textBoxe->Clear();
			this->textBoxl->Clear();
			this->textBoxu->Clear();
			this->textBox1->Clear();
			MessageBox::Show("Data Upadated");
			MessageBoxButtons::OKCancel;

	}
	private: System::Void backedit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->editpanel->Visible = false;
	}
private: System::Void display_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = true;
	int id = 1;
	string str;
	LL_teacher obj;
	node* temp1;
	obj.load(obj);
	temp1 = obj.get_head();
	while (temp1 != NULL)
	{
		System::String^ f_name = gcnew String(temp1->f_name.c_str());
		System::String^ u_name = gcnew String(temp1->u_name.c_str());
		System::String^ email = gcnew String(temp1->email.c_str());
		System::String^ l_name = gcnew String(temp1->l_name.c_str());
		System::String^ r_date = gcnew String(temp1->r_date.c_str());
		System::String^ gen = gcnew String(temp1->gender.c_str());
		System::String^ bgr = gcnew String(temp1->b_group.c_str());
		System::String^ co = gcnew String(temp1->contact.c_str());
		str = to_string(id);
		String^ t_id = gcnew String(str.c_str());
		dataGridView1->Rows->Add(f_name,t_id, u_name, l_name, r_date, email, gen, bgr, co);
		id++;
		temp1 = temp1->next;
	}
}
};
}
