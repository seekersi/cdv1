using System;
using System.Text.RegularExpressions;

namespace bmi
{
    class Program
    {

        static void Main(string[] args)

        {
        
        start:
            static char sexCheck(char arg)
            {
                string plec = arg.ToString();
                if (char.IsLetter(arg) && Regex.IsMatch(plec, "A") || Regex.IsMatch(plec, "a") || Regex.IsMatch(plec, "B") || Regex.IsMatch(plec, "b"))
                {
                    return arg;
                }
                else
                {
                    Console.WriteLine("\nDokonany przez ciebie wybor jest nieprawidlowy. Wybierz ponownie: ");
                    arg = Console.ReadKey().KeyChar;
                    return sexCheck(arg);
                }
            }
            static double numberCheck(string arg2)
            {
                if (double.TryParse(arg2, out double result))
                {
                    return result;
                }
                else
                {
                    Console.WriteLine("\nWybrana liczba jest nieprawidlowa. Wpisz ponownie: ");
                    arg2 = Console.ReadLine();
                    return numberCheck(arg2);
                }
            }
            static void BMIcalc(double arg)
            {
                if (arg <= 8.5)
                {
                    Console.WriteLine("\nMasz niedowage");
                }
                else if (arg >= 8.6 && arg <= 25)
                {
                    Console.WriteLine("\nTwoja waga jest prawidłowa!");
                }
                else if (arg > 30)
                {
                    Console.WriteLine("\nMasz otylosc");
                }
                else if (arg > 35)
                {
                    Console.WriteLine("\nMasz otylosc I stopnia");
                }
                else if (arg > 40)
                {
                    Console.WriteLine("\nMasz otylosc II stopnia");
                }
            }
            static double BialkoMezczyzna(double arg)
            {
                double bialko = arg * 0.9;
                string dobreBialko = String.Format("{0:0.00}", bialko);
                Console.WriteLine("\nTwoje dzienne zapotrzebowanie na bialka wynosi: " + dobreBialko + "g");
                return bialko;
            }
            static double BialkoKobieta(double arg)
            {
                double bialko = arg * 0.8;
                string dobreBialko = String.Format("{0:0.00}", bialko);
                Console.WriteLine("\nTwoje dzienne zapotrzebowanie na bialka wynosi: " + dobreBialko + "g");
                return bialko;
            }
            static double WeglowodanyMezczyzna(double arg)
            {
                double weglowodany = arg * 3.5;
                string dobreWeglowodany = String.Format("{0:0.00}", weglowodany);
                Console.WriteLine("\nTwoje dzienne zapotrzebowanie na weglowodany wynosi: " + dobreWeglowodany + "g");
                return weglowodany;
            }
            static double WeglowodanyKobieta(double arg)
            {
                double weglowodany = arg * 3;
                string dobreWeglowodany = String.Format("{0:0.00}", weglowodany);
                Console.WriteLine("\nTwoje dzienne zapotrzebowanie na weglowodany wynosi: " + dobreWeglowodany + "g");
                return weglowodany;
            }
            static double TluszczMezczyzna(double arg)
            {
                double tluszcze = arg * 5;
                string dobreTluszcze = String.Format("{0:0.00}", tluszcze);
                Console.WriteLine("\nTwoje dzienne zapotrzebowanie na tluszcze wynosi: " + dobreTluszcze + "g");
                return tluszcze;
            }
            static double TluszczKobieta(double arg)
            {
                double tluszcze = arg * 4.5;
                string dobreTluszcze = String.Format("{0:0.00}", tluszcze);
                Console.WriteLine("\nTwoje dzienne zapotrzebowanie na tluszcze wynosi: " + dobreTluszcze + "g");
                return tluszcze;
            }

            char plec;
            Console.WriteLine("Wybierz plec: \na)mezczyzna \nb)kobieta");
            plec = Console.ReadKey().KeyChar;
            sexCheck(plec);
            Console.WriteLine("\nPodaj swoj wzrost: ");
            string wzrost;
            wzrost = Console.ReadLine();
            double heightCheck = numberCheck(wzrost);
            Console.WriteLine("\nPodaj swoja wage: ");
            string waga;
            waga = Console.ReadLine();
            double weightCheck = numberCheck(waga);
           
            //BMI CALC

            double bmi = weightCheck / Math.Pow(heightCheck, 2) * 10000;
            string dobreBMI = String.Format("{0:0.00}", bmi);
            Console.WriteLine("\nTwoje BMI wynosi: " + dobreBMI);
            double bialko;
            double tluszcze;
            double weglowodany;
            double kcal;


            switch (plec)
            {
                case 'a':
                case 'A':
                    BMIcalc(bmi);
                    bialko = BialkoMezczyzna(weightCheck);
                    weglowodany = WeglowodanyMezczyzna(weightCheck);
                    tluszcze = TluszczMezczyzna(weightCheck);
                    kcal = bialko * 4 + weglowodany * 4 + tluszcze * 4;
                    Console.WriteLine(kcal);
                    break;

                case 'b':
                case 'B':
                    BMIcalc(bmi);
                    bialko = BialkoKobieta(weightCheck);
                    weglowodany = WeglowodanyKobieta(weightCheck);
                    tluszcze = TluszczKobieta(weightCheck);
                    kcal = bialko * 4 + weglowodany * 4 + tluszcze * 4;
                    Console.WriteLine(kcal);
                    break;
            }
            goto start;
        }
    }
}
