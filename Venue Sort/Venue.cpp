
#include <string.h>
#include <iostream>
#include <cassert>
#include "Venue.h"
//#include "Seat_Row.h"
	using namespace std;

	Venue::Venue(const string& name_,
		const Address& address_) :
		name(name_), address(&address_) //number_of_seat_rows(0)
	{}

	/*void Venue::Add_Seat_Row(const Seat_Row* seat_row)
	{
		assert(number_of_seat_rows < MAX_SEAT_ROWS - 1);
		seat_rows[number_of_seat_rows++] = seat_row;
	}*/

	void Venue::Display() const
	{
		cout << name << endl;
		address->Display();
		cout << "\n";
	}

	bool Venue::operator<(const Venue& other) const
	{
		if (address->Zip() == other.address->Zip())
		{
			return name < other.name;
		}

		return address->Zip() < other.address->Zip();
	}
