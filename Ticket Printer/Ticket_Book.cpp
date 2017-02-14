#include "Ticket_Book.h"
#include "Performance.h"
#include "Venue.h"
#include "Seat.h"
#include "Ticket.h"
#include <iostream>
#include "Seat_Row.h"

using namespace std;



Ticket_Book::Ticket_Book(const Performance& perf ) :
	performance(&perf), num_tix(0)
{
	int num_rows = performance->Num_Rows();
	for (int i = 0; i < num_rows; i++)
	{
		const Seat_Row* rows = performance->Get_Rows(i);
		int num_seats = rows->nr_of_seats();
		for (int x = 0; x < num_seats; ++x)
		{
			const Seat* seat = rows->Get_Seat(x);
			ticket[num_tix++] = new Ticket(*performance, *seat);
		}
	}
}

void Ticket_Book::PrintTicket()const
{
	for (int i = 0; i < num_tix; ++i)
	{
		ticket[i]->Display();
	}
}

