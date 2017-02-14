#include "Performance.h"
#include<string>
#include "Venue.h"
#include<iostream>
#include "Address.h"
#include "Seat.h"
#include "Seat_Row.h"




Performance::Performance(const string& show_, When when_, const Venue& venue_) :
	show(show_), when(when_),venue(&venue_)
	{}

void Performance::Display()const
{
	cout << "Performance: " << show << "\n"
		<< when.Month << "/" << when.Day
		<< "/" << when.Year << " at ";
		cout.width(2);
		cout << when.hour << ":";
		cout.width(2);
		cout << when.min	<< endl;
	venue->Display();
}

int Performance::Num_Rows()const
{
	int num_rows = venue->Num_Rows();
	return num_rows;
}

const Seat_Row* Performance::Get_Rows(int i) const
{
	const Seat_Row* row = venue->Get_Rows(i);
	return row;
}