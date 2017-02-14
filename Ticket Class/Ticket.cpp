#include "Ticket.h"
#include <iostream>
#include <string>



Ticket::Ticket(string Show_Name, string Venue_Name, When when_, Seat seat_, bool sold_)
{
	name = Show_Name;
	venue = Venue_Name;
	when = when_;
	seat = seat_;
	sold = sold_;
}

void Ticket::Sell() 
{
	sold = true;
}

void Ticket::Display() const
{
	cout << "Ticket: " << "\n" ;
	cout << "Show Name: " << name << "\n";
	cout << "Venue Name: " << venue << "\n";
	cout << "Date: "
		<< when.Month << "/"
		<< when.Day << "/"
		<< when.Year << "\n";
	cout << "Time: "
		<< when.hour << ":"
		<< when.min << "\n";
	cout << "Seat: "
		<< seat.row 
		<< seat.number << "\n";
	if (sold == false)
		cout << "Not Sold\n\n";
	else
		cout <<"Sold\n\n";


}


Ticket::~Ticket()
{
}
