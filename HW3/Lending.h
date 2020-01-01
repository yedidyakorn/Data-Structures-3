#include<string>
#include<iostream>

using namespace std;
#pragma once
class Lending
{
	int _id;
	string _name;
	string _date;
	int _code;

public:
	Lending();
	~Lending();
	bool set_date(string date);
	string getName() { return _name; }


	bool operator == (Lending& a);
	bool operator != (Lending& a) { return !(a == *this); }
	bool operator < (Lending& a);
	bool operator <= (Lending& a) { return (a == *this || *this < a); }
	bool operator > (Lending& a) { return !(*this <= a); }
	bool operator >= (Lending& a) { return !(*this < a); }


	friend istream& operator >>(istream& is, Lending& l)
	{
		cout << "enter id name date item ";
		is >> l._id >> l._name >> l._date >> l._code;
		return is;
	}


	friend ostream& operator <<(ostream& os, Lending& l)
	{
		os << endl << "Lending details: id: " << l._id << " name: " << l._name << " date: " << l._date << " item: " << l._code << endl;
		return os;
	}

};