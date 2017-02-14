#pragma once
#include<string>
#include "Venue.h"
#include<iostream>
#include "Address.h"
#include "Seat.h"
#include "Seat_Row.h"

using namespace std;

struct When
{
	int Month;
	int Day;
	int Year;
	int hour;
	int min;
};
class Performance
{
private:
	string show;
	When when;
	const Venue* venue;
public:
	Performance(const string& show_, When when_, const Venue& venue_);
	
	void Display() const;

	int Num_Rows()const;

	const Seat_Row* Get_Rows(int i)const;
};

