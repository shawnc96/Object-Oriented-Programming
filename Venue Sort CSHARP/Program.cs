using System;

namespace VenueSort
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Address add1 = new Address("13506 Avalon Blvd", "Tampa", "FL", 33613);
            Address add2 = new Address("4020 E Fowler Ave", "Tampa", "FL", 33620);
            Address add3 = new Address("4050 Rocky Circle", "Tampa", "FL", 33613);
            Address add4 = new Address("Raymond Centre", "Clearwater", "FL", 33760);
            Address add5 = new Address("Fulton St", "New York", "NY", 10007);

            Address[] addresses = new Address[] { add1, add2, add3, add4, add5 };
            string[] names = new string[] { "Avalon", "USF", "The Lofts", "Tech Data", "WTC" };
            Venue[] venues = new Venue[addresses.Length];

            CreateVenues(addresses, names, venues);
            Venue[] sortedVenues = VenueSort(venues);
            for (int i = 0; i < venues.Length; i++)
            {
                Console.WriteLine("Venue #" + (i+1));
                sortedVenues[i].Display();
                Console.WriteLine("");
            }
            
            

            Console.ReadLine();
        }

        //Method to Create new venues
        public static void CreateVenues(Address[] addresses, string[] names, Venue[] venues)
        {
            int n = addresses.Length;
           
            for (int i = 0; i < n; i++)
            {
                Venue v = new Venue(names[i], addresses[i]);
                venues[i] = v;
            }
        }


        //Method to sort the venues
        public static Venue[] VenueSort(Venue[] venues)
        {
            for (int i = 0; i < venues.Length-1; i++)
            {
                int minPos = i;
                for (int j = i; j < venues.Length; j++)
                {
                    if (venues[j] < venues[minPos])
                        minPos = j;
                }

                Venue temp = venues[i];
                venues[i] = venues[minPos];
                venues[minPos] = temp;
            }

            return venues;

        }

    }

    
}