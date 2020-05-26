
#include <iostream>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float wiek, wzrost, waga, kalorie, tluszcze, bialko, weglowodany;
	double bmi;
	char plec;
	char k,m;





	cout << "Prosze, podaj swoja plec (K/M)";
	cin >> plec;


	if (plec == 'k' || plec == 'K')


	{



		cout << "Podaj swoja wage." << endl;
		cin >> waga; cout << endl;
		cout << "Podaj swoj wiek." << endl;
		cin >> wiek; cout << endl;
		cout << "Podaj swoj wzrost." << endl;
		cin >> wzrost; cout << endl;
		cout << "Podaj swoja plec (K/M)";
		bmi = waga / (wzrost * wzrost / 10000);
		cout << "Twoje bmi wynosi: " << bmi << endl;


		kalorie = ((9.99 * waga) + (6.25 * wzrost) - (4.92 * wiek)) - 161;
		cout << "Zapotrzebowanie kaloryczne wynosi: " << kalorie << endl;




		bialko = waga * 2;
		tluszcze = kalorie * 0.11;
		weglowodany = (kalorie - tluszcze) * 0.5;

		cout << "bialko: " << ceil(bialko);
		cout << "g" << endl;
		cout << "tluszcze: " << ceil(tluszcze);
		cout << "g" << endl;
		cout << "weglowodany: " << ceil(weglowodany);
		cout << "g" << endl;




		if (bmi <= 18.5)
			cout << "masz za mala wage, zacznij jesc!";
		if (bmi > 18.5 && bmi <= 23.5)
			cout << "masz idealna wage!";
		if (bmi > 23.5)
			cout << "niestety ale masz nadwage, zrob cos z tym!" << endl;



	}



	else if(plec=='m' || plec=='M')


	{


		cout << "Prosze, podaj swoja wage." << endl;
		cin >> waga; cout << endl;
		cout << "Prosze, podaj swoj wiek." << endl;
		cin >> wiek; cout << endl;
		cout << "Prosze, podaj swoj wzrost." << endl;
		cin >> wzrost; cout << endl;
		cout << "Prosze, podaj swoja plec (K/M)";
		bmi = waga / (wzrost * wzrost / 10000);
		cout << "Twoje bmi wynosi: " << bmi << endl;


		kalorie = ((9.99 * waga) + (6.25 * wzrost) - (4.92 * wiek)) + 5;
		cout << "Zapotrzebowanie kaloryczne wynosi: " << kalorie << endl;




		bialko = waga * 2, 2;
		tluszcze = kalorie * 0.15;
		weglowodany = (kalorie - tluszcze) * 0.6;

		cout << "bialko: " << ceil(bialko);
		cout << "g" << endl;
		cout << "tluszcze: " << ceil(tluszcze);
		cout << "g" << endl;
		cout << "weglowodany: " << ceil(weglowodany);
		cout << "g" << endl;




		if (bmi <= 18.5)
			cout << "masz za mala wage, zacznij jesc!";
		if (bmi > 18.5 && bmi <= 23.5)
			cout << "masz idealna wage!";
		if (bmi > 23.5)
			cout << "niestety ale masz nadwage, zrob cos z tym!";





	}







	return 0;
}
