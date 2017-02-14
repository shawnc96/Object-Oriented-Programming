#pragma once
#include <string>

using namespace std;

class Address
{
private:
	string street_address;
	string city;
	string state;
	int zip_code;

public:
	Address(string Street_Address,
		string City,
		string State,
		int Zip_Code);

	string Street() const { return street_address; };
	string City_() const { return city; };
	string State_()const { return state; };
	int Zip() const { return zip_code; };

	void Display() const;
};
