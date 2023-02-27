#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct node
{
	string f_name, l_name, u_name, email, r_date, b_group, contact, gender;
	node* next;
};
class LL_teacher
{
	node* head = nullptr;
	node* curr = nullptr;
	int count = 0;
public:
	LL_teacher()
	{
		head = nullptr;
		curr = nullptr;
	}
	bool isempty()
	{
		if (head == NULL)
		{
			return true;
		}
		else
			return false;

	}
	node* create_node(string fi, string la, string us, string em, string re, string ge, string bl, string co)
	{
		node* temp = new node;
		temp->f_name = fi;
		temp->l_name = la;
		temp->u_name = us;
		temp->email = em;
		temp->r_date = re;
		temp->gender = ge;
		temp->b_group = bl;
		temp->contact = co;
		temp->next = NULL;
		count++;
		return temp;
	}
	void add_teacher(string fi, string la, string us, string em, string re, string ge, string bl, string co)
	{
		if (isempty())
		{
			head = create_node(fi, la, us, em, re, ge, bl, co);
			curr = head;
		}
		else
		{
			node* temp = create_node(fi, la, us, em, re, ge, bl, co);
			curr->next = temp;
			curr = curr->next;
		}
	}
	node* get_head()
	{
		return head;
	}
	node* get_curr()
	{
		return curr;
	}
	int get_count()
	{
		return count;
	}
	void set_head()
	{
		head = NULL;
	}
	void set_count()
	{
		count = 0;
	}

	void save_teacher(LL_teacher& obj)
	{
		ofstream outfile;
		outfile.open("teacher.txt",ios::app);
		if (!outfile.is_open())
		{
			cout << "File not Opened" << endl;
		}
		else
		{
			node* temp = obj.get_head();
			while (temp != NULL)
			{
				outfile << temp->f_name;
				outfile << endl;
				outfile << temp->l_name;
				outfile << endl;
				outfile << temp->u_name;
				outfile << endl;
				outfile << temp->r_date;
				outfile << endl;
				outfile << temp->gender;
				outfile << endl;
				outfile << temp->b_group;
				outfile << endl;
				outfile << temp->email;
				outfile << endl;
				outfile << temp->contact;
				outfile << endl;
				temp = temp->next;
			}
			outfile.close();
		}
	}

	void load(LL_teacher& obj)
	{
		ifstream infile;
		infile.open("teacher.txt");
		if (!infile.is_open())
		{
			cout << "File not Opened" << endl;
		}
		else
		{
			node* temp = new node;
			int id1;
			while (infile >> temp->f_name)
			{
				infile >> temp->l_name;
				infile >> temp->u_name;
				infile >> temp->r_date;
				infile >> temp->gender;
				infile >> temp->b_group;
				infile >> temp->email;
				infile >> temp->contact;
				obj.add_teacher(temp->f_name, temp->l_name, temp->u_name, temp->email, temp->r_date, temp->gender, temp->b_group, temp->contact);
			}
			infile.close();
		}
	}
	void pointhead(node*& temp)
	{
		temp = this->head;
	}
};

struct node_s
{
	string f_name, l_name, r_date, b_group, contact, gender, address;
	bool fee_status;
	node_s* next;
};

class LL_student
{
	node_s* head = NULL;
	node_s* curr = nullptr;
	int count = 0;
public:
	LL_student()
	{
		head = nullptr;
		curr = nullptr;
	}
	bool isempty()
	{
		if (head == NULL)
		{
			return true;
		}
		else
			return false;

	}
	node_s* create_node(string fi, string la, string re, string ge, string bl, string co, string ad, bool fe)
	{
		node_s* temp = new node_s;
		temp->f_name = fi;
		temp->l_name = la;
		temp->fee_status = fe;
		temp->r_date = re;
		temp->gender = ge;
		temp->b_group = bl;
		temp->contact = co;
		temp->address = ad;
		temp->next = NULL;
		count++;
		return temp;
	}
	void add_student(string fi, string la, string re, string ge, string bl, string co, string ad, bool fe)
	{
		if (isempty())
		{
			head = create_node(fi, la, re, ge, bl, co, ad, fe);
			curr = head;
		}
		else
		{
			node_s* temp = create_node(fi, la, re, ge, bl, co, ad, fe);
			curr->next = temp;
			curr = curr->next;
		}
	}
	node_s* get_head()
	{
		return head;
	}
	node_s* get_curr()
	{
		return curr;
	}
	int get_count()
	{
		return count;
	}
	void set_head()
	{
		head = NULL;
	}
	void set_count()
	{
		count = 0;
	}

	void save_student(LL_student& obj)
	{
		ofstream outfile;
		LL_student temp_obj;
		outfile.open("student.txt",ios::app);
		if (!outfile.is_open())
		{
			cout << "File not Opened" << endl;
		}
		else
		{
			node_s* temp = obj.get_head();
			while (temp != NULL)
			{
				outfile << temp->f_name;
				outfile << endl;
				outfile << temp->l_name;
				outfile << endl;
				outfile << temp->r_date;
				outfile << endl;
				outfile << temp->gender;
				outfile << endl;
				outfile << temp->b_group;
				outfile << endl;
				outfile << temp->fee_status;
				outfile << endl;
				outfile << temp->contact;
				outfile << endl;
				outfile << temp->address << endl;
				temp = temp->next;
			}
			outfile.close();
		}
	}

	void load(LL_student& obj)
	{
		ifstream infile;
		infile.open("student.txt");
		if (!infile.is_open())
		{
			cout << "File not Opened" << endl;
		}
		else
		{
			node_s* temp = new node_s;
			int id1;
			while (infile >> temp->f_name)
			{
				infile >> temp->l_name;
				infile >> temp->r_date;
				infile >> temp->gender;
				infile >> temp->b_group;
				infile >> temp->fee_status;
				infile >> temp->contact;
				infile >> temp->address;
				obj.add_student(temp->f_name, temp->l_name, temp->r_date, temp->gender, temp->b_group, temp->contact, temp->address, temp->fee_status);
			}
			infile.close();
		}
	}
};
