#include<string>
#include<iostream>

using namespace std;

struct When
{
	int Month;
	int Day;
	int Year;
	int hour;
	int min;
};


struct Seat
{
	string row;
	int number;
};
class Ticket
{
private:
	string name;
	string venue;
	When when;
	Seat seat;
	bool sold;

public:
	Ticket(string Show_Name, string Venue_Name, When when_, Seat seat_, bool sold_);

	string Name() const { return name; };
	string Venue() const { return venue; };
	When Date() const { return when; };
	Seat seats() const { return seat; };
	void Sell() /*const { return sold; }*/;
	void Display() const;
	~Ticket(void);
};

