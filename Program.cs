using System;

namespace Cat
{
    class Program
    {
        static void Main(string[] args)
        {
            Date dob1 = new Date (05, 12, 2009);
            Date dob2 = new Date (19, 02, 2006);

            Cat cat1 = new Cat("Fluffy", dob1, 33);
            Cat cat2 = new Cat("Rain", dob2, 29);

            if (cat1 > cat2)
                Console.WriteLine(cat1.name + " weighhs more than " + cat2.name);
            else
                Console.WriteLine(cat2.name + " weighhs more than " + cat1.name);

            if(cat1.dob > cat2.dob)
                Console.WriteLine(cat1.name + " is younger than " + cat2.name);
            else
                Console.WriteLine(cat2.name + " is younger than " + cat1.name);

            Cat.display(cat1);
            Cat.display(cat2);
            Console.ReadLine();
        }
    }

    public struct Date
    {
        int day;
        int month;
        int year;

        //Constructor for the Date struct
        public Date(int Day, int Month, int Year)
        {
            day = Day;
            month = Month;
            year = Year;
        }

        //Overloaded greater than operator for the date struct
        public static bool operator >(Date date1, Date date2)
        {
            if (date1.year != date2.year)
                return (date1.year > date2.year);
            else
            {
                if (date1.month != date2.month)
                    return (date1.month > date2.month);
                else
                    return (date1.day > date2.day);
            }
               
        }

        //Overloaded lesser than operator for the date struct
        public static bool operator <(Date date1, Date date2)
        {
            if (date1.year != date2.year)
                return (date1.year < date2.year);
            else
            {
                if (date1.month != date2.month)
                    return (date1.month < date2.month);
                else
                    return (date1.day < date2.day);
            }
        }

        public void Display(Date date)
        {
            Console.WriteLine(date.month + "/" +
                date.day + "/" + date.year);
        }
    }

    class Cat
    {
        public string name { get; set; }
        public Date dob { get; set; }
        public double weight { get; set; }

        //Constructor for the Cat class
        public Cat(string Name, Date DOB, double Weight)
        {
            this.name = Name;
            this.dob = DOB;
            this.weight = Weight;
        }

        //Overloaded boolean operator '>' for the weight
        public static bool operator>(Cat a, Cat b)
        {
            return a.weight > b.weight;
        }

        //Overloaded boolean operator '<' for the weight
        public static bool operator <(Cat a, Cat b)
        {
            return a.weight < b.weight;
        }

        public static void display(Cat cat)
        {
            Date catDOB = cat.dob;
            Console.Write(cat.name + " " + cat.weight + " ");
            catDOB.Display(cat.dob);

        }

    }
   
}