using System;
using System.Collections.Generic;
using System.Text;

namespace VenueSort
{
    class Venue
    {
        public string name { get; set; }
        public Address address { get; set; }

        //Constructor
        public  Venue(string Name, Address Address)
        {
            this.name = Name;
            this.address = Address;
        }

        public void Display()
        {
            Console.WriteLine(this.name);
            this.address.Display();
        }


        //Operator overloading to compare venues
        public static bool operator<(Venue a, Venue b)
        {
            if (a.address.zipCode == b.address.zipCode)
            {
                return (String.Compare(a.name, b.name, true) == 0);
                Console.WriteLine("wsgfnkgn");
            }
            Console.WriteLine("Hi");
            return a.address.zipCode < b.address.zipCode;

        }

        public static bool operator >(Venue a, Venue b)
        {
            if (a.address.zipCode == b.address.zipCode)
            {
               
                return (String.Compare(b.name, a.name, true) == 0);

            }

            return a.address.zipCode > b.address.zipCode;

        }
    }
}
