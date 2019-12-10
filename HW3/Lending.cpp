#include "Lending.h"



Lending::Lending()
{
}


Lending::~Lending()
{
}

bool Lending::operator==( Lending & a)
{
	if (_code == a._code&& _date == a._date && _id == a._id && _name == a._name)
		return true;
	return false;
}

bool Lending::operator<(Lending & a)
{
	if (_date != a._date)
		return _date < a._date;
	if (_id != a._id)
		return _id < a._id;
	return _code < a._code;
}



