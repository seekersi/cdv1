using System;
using System.Linq;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Text;


namespace lotto_cs
{
    class Program
    {
        static bool sectionCheck(int arg)
        {
            if (arg > 99 && arg <= 0)
            {
                return false;
            }
            else { return true; }
        }

        static int sectionCheck(string arg)
        {
            bool success = Int32.TryParse(arg, out int result);
            if (success && sectionCheck(result) == true)
            {
                return result;
            }
            else
            {
                Console.WriteLine("Liczba nieprawidłowa, spróbuj ponownie");
                arg = Console.ReadLine();
                return sectionCheck(arg);
            }

        }

        static void Main(string[] args)
        {
        start:

            List<int> numbers = new List<int>();


            int[] win = new int[5];


            Console.WriteLine("Podaj 5 liczb od 1 do 99 ");
            int choose;
            string choice;

            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine((i + 1) + " liczba: ");
                choice = Console.ReadLine();
                choose = sectionCheck(choice);


                numbers.Add(choose);
            }

            var rnd = new Random();
            var random = Enumerable.Range(1, 99).OrderBy(x => rnd.Next()).Take(5).ToList();
            int number = 0;
            for (int i = 0; i < 5; i++)

            {
                if (numbers[i] == random[i])
                {

                    number = number + 1;

                }
            }

            switch (number)
            {
                case 1:
                    Console.WriteLine("\nWylosowales prawidlowo jedna liczbe.");
                    break;
                case 2:
                    Console.WriteLine("\nWylosowales prawidlowo dwie liczby.");
                    break;
                case 3:
                    Console.WriteLine("\nWylosowales prawidlowo trzy liczby.");
                    break;
                case 4:
                    Console.WriteLine("\nWylosowales prawidlowo cztery liczby.");
                    break;
                case 5:
                    Console.WriteLine("\nWylosowales prawidlowo piec liczb.");
                    break;
                default:
                    Console.WriteLine("\nNie wylosowałeś żadnej prawidłowej liczby. Spróbuj ponownie! \n");
                    goto start;
            }
            Console.ReadKey();
        }
    }
}

