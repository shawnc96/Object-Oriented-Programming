#include <iostream>
#include "Ticket.h"
#include <string>

using namespace std;

void Clear_Keyboard_Input_Buffer()
{
	while (cin.get() != '\n');
}

Ticket *Create()
{
	string show;
	string venue;
	When Date_Time;
	Seat seat;
	bool sold = false;

	cout << "Please enter parameters for the ticket\n";
	cout << "Show Name: ";
	getline(cin, show);
	cout << "Venue Name: ";
	getline(cin, venue);
	cout << "Day: ";
	cin >> Date_Time.Day;
	Clear_Keyboard_Input_Buffer();
	cout << "Month: ";
	cin >> Date_Time.Month;
	Clear_Keyboard_Input_Buffer();
	cout << "Year: ";
	cin >> Date_Time.Year;
	Clear_Keyboard_Input_Buffer();
	cout << "Hour: ";
	cin >> Date_Time.hour;
	Clear_Keyboard_Input_Buffer();
	cout << "Minute: ";
	cin >> Date_Time.min;
	Clear_Keyboard_Input_Buffer();
	cout << "Seat row: ";
	cin >> seat.row;
	Clear_Keyboard_Input_Buffer();
	cout << "Seat number: ";
	cin >> seat.number; 
	Clear_Keyboard_Input_Buffer();

	cout << "\n\n";
	Ticket* ticket = new Ticket(show, venue, Date_Time, seat, sold);
	return ticket;

}



int main()
{
	cout << "This is program for Test_Ticket\n";

		Ticket* tix = Create();

		tix->Display();
		cout << endl;

		cout << "Calling sell for ticket\n\n";

		tix->Sell();
		tix->Display();

		delete tix;
		tix = 0;


	cin.get();
	cin.get();
}