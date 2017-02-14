#include <iostream>
#include<fstream>
#include<string>
#include "cat.h"
using namespace std;

void Display_Cats(Cat** cats, int n_cats)
{
    cout << endl;
	for (int i = 0; i < n_cats; ++i)
	{
		cout << *cats[i];
	}
	cout << endl;
}


int Get_Cats(Cat** Cat_Array, int Max_Cats)
{
	int count = 0;
	ifstream infile;
	string name;
	Date date_of_birth;
	double weight;
	infile.open("cats.txt");

		if (!infile.is_open())
		{
			cout << "Failed to open file\n";
			return -1; //Error
		}

	//Input file is open
	while ((count < Max_Cats) && infile.good())
	{
		string name;
		Date date_of_birth;
		double weight;
		infile >> name;
		infile >> date_of_birth.Month;
		infile >> date_of_birth.Day;
		infile >> date_of_birth.Year;
		infile >> weight;
		


		if (!infile.good())
		{
			break;
		}

		Cat_Array[count++] = new Cat(name, date_of_birth, weight);

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

}//end Get_Cat

void Swap_Cat(Cat*& c1, Cat*& c2)
{
	Cat* temp = c1;
	c1 = c2;
	c2 = temp;
}

void Sort_Cat(Cat** cats, int n_cats)
{
	bool swap_done = false;
	do
	{
		swap_done = false;
		for (int i = 0; i < n_cats - 1; ++i)
		{
			if (*cats[i] > *cats[i + 1])
			{
				Swap_Cat(cats[i], cats[i + 1]);
				swap_done = true;
			}//end if
		}//end for
	} while (swap_done);// end do
}//end Sort_Cat
	
int main()
{
	Cat* cats[20];
	cout << "This is Sort_Cats\n\n";
	int count = -1;

	count = Get_Cats(cats, 20);
	if (count < 1)
	{
		cout << "Failed to read Cats file\n";
		cin.get();
		return -1;
	}

	cout << count << "Cats read\n";

	
	Display_Cats(cats, count);
	Sort_Cat(cats, count);

	cout << "Sorted cats:\n";
	Display_Cats(cats, count);



	cout << "Normal completion\n";
	cin.get();

	return 0;
}
