#include<iostream>
#include "Address.h"
#include "Venue.h"
#include <string.h>
#include <fstream>
#include <cstdlib>

using namespace std;

void Display_Ven(Venue** venues, int n_vens)
{
	cout << endl;
	for (int i = 0; i < n_vens; ++i)
	{
		venues[i]->Display();
	}
	cout << endl;
}

int Get_Venue(Venue** Venue_Array, int Max_Ven)
{
	int count = 0;
	ifstream infile;
	string filename;
	string ven;
	string street;
	string city;
	string state;

	

	
	cout << "Name of input file?\n";
	getline(cin, filename);

	cout << "Opening file " << filename << endl;
	infile.open(filename);

	if (!infile.is_open())
	{
		cout << "Failed to open file\n";
		return -1; //Error
	}

	//Input file is open
	while ((count < Max_Ven) && infile.good())
	{
		string ven;
		string street;
		string city;
		string state;
		string space;
		int zip;
		getline(infile, ven);
		getline(infile, street);
		getline(infile, city);
		getline(infile, state);
		infile >> zip;
		getline(infile, space);

		

		if (!infile.good())
		{
			break;
		}

		Address* address = new Address(street, city, state, zip);
		Venue_Array[count++] = new Venue(ven, *address);

	}//end while

	if (infile.eof())
	{
		cout << endl << "End of file \n";
	}
	else
	{
		cout << endl << "Error reading file\n";
		count = -1;
	}
	infile.close();
	return count;

}//end Get_Venue
void Swap_Ven(Venue*& v1, Venue*& v2)
{
	Venue* temp = v1;
	v1 = v2;
	v2 = temp;
}

void Sort_Ven(Venue** venues, int n_vens)
{
	bool swap_done = false;
	do
	{
		swap_done = false;
		for (int i = 0; i < n_vens - 1; ++i)
		{
			if (*venues[i+1] < *venues[i])
			{
				Swap_Ven(venues[i], venues[i + 1]);
				swap_done = true;
			}//end if
		}//end for
	} while (swap_done);// end do
}//end Sort_Cat

int main()
{
	cout << "This is Venue Sort\n\n";
	
	Venue* venues[100];

	int count = -1;

	count = Get_Venue(venues, 100);
	if (count < 1)
	{
		cout << "Failed to read file\n";
		cin.get();
		return -1;
	}

	cout << count << " venues read from file\n\n";
	cout << "Venues before sort:\n";
	Display_Ven(venues, count);
	Sort_Ven(venues, count);

	cout << "\nVenues after sort:\n";
	Display_Ven(venues, count);


	cout << "Program complete";
	cin.get(); // Hold the window open
	return 0;
}
