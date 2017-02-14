#pragma once
#include <string>
#include <iostream>
#include<fstream>
using namespace std;

struct Date
{
	int Day;
	int Month;
	int Year;
};

class Cat
{

private:
	string name;
	Date date_of_birth;
	double weight;

public:
	Cat(string name_, Date dob_, double weight_);

	string Name() const { return name; };
	Date Date_of_Birth() const { return date_of_birth; };
	double Weight() const { return weight; };
	//void Display() const;

	bool Is_Greater_Than(const Cat& other) const;
	bool operator>(const Cat& other) const;

	friend ostream& operator<<(ostream& os, const Cat& c);

	//~Cat(void);
};
