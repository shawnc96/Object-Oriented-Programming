#include "Ticket.h"
#include "Performance.h"
#include "Venue.h"
#include "Seat.h"



Ticket::Ticket(const Performance& perf,  const Seat& seat_) :
	performance(&perf),  seat(&seat_)
{
}

void Ticket::Sell()
{
	sold = true;
}

void Ticket::Display()const
{
	
	performance->Display();
	seat->Display();

}