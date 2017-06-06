using System;
using System.Collections.Generic;
using System.Text;

namespace VenueSort
{
    class Address
    {
        public string streetAddress { get; set; }
        public string city { get; set; }
        public string state { get; set; }
        public int zipCode { get; set; }

        //Constructor
        public Address(string Street, string City, string State, int Zip)
        {
            this.streetAddress = Street;
            this.city = City;
            this.state = State;
            this.zipCode = Zip;
        }

        public void Display()
        {
            Console.WriteLine(this.streetAddress);
            Console.WriteLine(this.city + ", " + this.state);
            Console.WriteLine(this.zipCode);
        }
    }
}
