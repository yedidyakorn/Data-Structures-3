#include "Lending.h"



Lending::Lending()
{
}


Lending::~Lending()
{
}

void Lending::set_date(string date)
{
	if (date.length() > 11)
	{
		cout << "error ";
		return;
		if ((date.substr(0, 4)) < (char*)1900 || date.substr(0, 4) > (char*)2100 || date.substr(5, 2) < (char*)1 || date.substr(5, 2) > (char*)12)
		{
			cout << "error ";
			return;
		}
	}
	_date = date;
	
}

bool Lending::operator == (Lending & a)
{
	return (_code == a._code&& _date == a._date && _id == a._id && _name == a._name);
}

bool Lending::operator < (Lending & a)
{
	string year, month, day, ayear, amonth, aday;
	year = _date.substr(0, 4);
	month = _date.substr(5, 2);
	day = _date.substr(8, _date.length() - 7);
	ayear = a._date.substr(0, 4);
	amonth = a._date.substr(5, 2);
	aday = a._date.substr(8, _date.length() - 7);
	if (_date != a._date)
	{
		if (year == ayear)
		{
			if (month == amonth)
			{
				if (day != aday)
				{
					return (day < aday);
				}
			}
			else
			{
				return (month < amonth);
			}
		}
		else
		{
			return (year < ayear);
		}
	}

	if (_id != a._id)
		return _id < a._id;
	return _code < a._code;
}