#include "cat.h"
#include <iostream>

using namespace std;



Cat::Cat(string name_, Date dob_, double weight_)
{
	name = name_;
	date_of_birth = dob_;
	weight = weight_;
}


bool Cat::Is_Greater_Than(const Cat& other) const
{
	return this->name > other.name;
}

bool Cat::operator>(const Cat& other) const
{
	return this->name > other.name;
}

ostream& operator<<(ostream& os, const Cat& c)
{
	os << "Cat " << c.name << " " << c.date_of_birth.Month
		<< "/" << c.date_of_birth.Day << "/"
		<< c.date_of_birth.Year << " " << c.weight << "\n";
	return os;
}


/*Cat::~Cat()
{
}*/
