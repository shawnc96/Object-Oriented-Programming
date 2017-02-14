#pragma once
#include "Performance.h"
#include "Venue.h"
#include "Seat.h"
#include "Seat_Row.h"
class Ticket
{
private:
	const Performance* performance;
	const Seat* seat;
	bool sold;

public:
	Ticket(const Performance& perf, const Seat& seat_);

	void Sell();
	
	void Display() const;
};

