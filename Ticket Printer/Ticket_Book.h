#pragma once
#include "Performance.h"
#include "Venue.h"
#include "Seat.h"
#include "Ticket.h"
#include "Seat_Row.h"
class Ticket_Book
{
public:
	static const int MAX_TIX = 1000;
private:
	const Ticket* ticket[MAX_TIX];
	const Performance* performance;
	int num_tix;
public:
	Ticket_Book(const Performance& perf);
	
	void PrintTicket() const;
	
};

