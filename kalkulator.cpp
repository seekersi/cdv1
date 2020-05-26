// kalkulek.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
#include <time.h>
#include <Windows.h>



using namespace std;
void dodawanie()
{
	cout << "Wybierz ilosc liczb: ";
	int a;
	cin >> a;
	if (a <= 1)
	{
		cout << "Conajmniej 2 liczby" << endl;
		dodawanie();
	}
	else
	{
		double tab[20];
		double suma;
		cout << "Liczba nr 1: ";
		cin >> suma;
		for (int i = 1; i < a; i++)
		{
			cout << "Liczba nr: " << i + 1 << " : ";
			cin >> tab[i];
			suma += tab[i];
		}
		cout << "suma tych liczb wynosi " << suma << endl;
	}

}

void odejmowanie()
{
	cout << "Wybierz ilosc liczb ";
	int a;
	cin >> a;
	if (a <= 1)
	{
		cout << "Conajmniej 2 liczby" << endl;
		odejmowanie();
	}
	else
	{
		double tab[20];
		double roznica;
		cout << "Liczba nr 1: ";
		cin >> roznica;
		for (int i = 1; i < a; i++)
		{
			cout << "Liczbe nr: " << i + 1 << " : ";
			cin >> tab[i];
			roznica -= tab[i];
		}
		cout << "roznica tych liczb wynosi " << roznica << endl;
	}
}

void mnozenie()
{
	cout << "Wybierz ilosc liczb ";
	int a;
	cin >> a;
	if (a <= 1)
	{
		cout << " Conajmniej 2 liczby" << endl;
		mnozenie();
	}
	else
	{
		double tab[20];
		double iloczyn;
		cout << "Liczba nr 1: ";
		cin >> iloczyn;
		for (int i = 1; i < a; i++)
		{
			cout << "Liczba nr: " << i + 1 << " : ";
			cin >> tab[i];
			iloczyn *= tab[i];
		}
		cout << "iloczyn tych liczb wynosi " << iloczyn << endl;
	}
}

void dzielenie()
{
	cout << "Wybierz ilosc liczb ";
	int a;
	cin >> a;
	if (a <= 1)
	{
		cout << "Conajmniej 2 liczby" << endl;
		dzielenie();
	}
	else
	{
		double tab[20];
		double iloraz;
		cout << "Liczba nr 1  ";
		cin >> iloraz;

		for (int i = 1; i < a; i++)
		{
			cout << "Liczba nr: " << i + 1 << " : ";
			cin >> tab[i];
			if (tab[i] == 0)
			{
				cout << "Nie mozesz wybrac 0" << endl;
				cout << "Liczba nr " << i + 1 << " : " << endl;
				cin >> tab[i];
			}
			iloraz /= tab[i];
		}
		cout << "iloraz tych liczb wynosi " << iloraz << endl;
	}
}

void potega()
{
	cout << "Wybierz ilosc liczb ";
	int a;
	cin >> a;
	if (a <= 1)
	{
		cout << "Conajmniej 2 liczby" << endl;
		potega();
	}
	int tab[20];
	for (int i = 1; i <= a; i++)
	{
		cout << "Liczba nr: " << i << " : ";
		cin >> tab[i];
		double wykladnik;
		double potega;
		cout << "Do ktorej potegi chcesz podniesc ta liczbe ?  ";
		cin >> wykladnik;
		potega = pow(tab[i], wykladnik);
		cout << "potega tych liczb wynosi " << potega << endl;
	}
}

void silnia()
{
	cout << "Wybierz ilosc liczb ";
	int a;
	int silniaB = 1;
	cin >> a;
	if (a <= 0)
	{
		cout << "Conajmniej 2 liczby" << endl;
		silnia();
	}
	else
	{
		int tab[20];
		for (int i = 1; i <= a; i++)
		{
			cout << "Liczba nr: " << i << " : ";
			cin >> tab[i];
			if (tab[i] == 0)
				cout << "Silnia liczby " << 0 << " wynosi " << 1 << endl;
			else
			{
				for (silniaB = tab[i]; tab[i] > 1; )
				{
					tab[i]--;
					silniaB *= tab[i];
				}
				cout << "Silnia liczby " << i << " wynosi " << silniaB << endl;
			}

		}
	}

}

void srednia_arytmetyczna()
{
	cout << "Wybierz ilosc liczb ";
	int a;
	cin >> a;
	if (a <= 1)
	{
		cout << "Conajmniej 2 liczby" << endl;
		srednia_arytmetyczna();
	}

	else {
		double tab[20];
		double suma;
		cout << "Liczba nr 1: ";
		cin >> suma;
		int liczn = 0;
		for (int i = 1; i <= a; i++)
		{
			cout << "Liczba nr: " << i << " : ";
			cin >> tab[i];
			liczn++;
			suma += tab[i];
		}
		cout << "srednia arytmetyczna tych liczb wynosi " << suma / liczn << endl;
	}

}


int main()
{
	int Funkcja;
	do
	{

		cout << "Wybierz funkcje: " << endl;
		cout << "1. Dodawanie " << endl;
		cout << "2. Odejmowanie " << endl;
		cout << "3. Mnozenie " << endl;
		cout << "4. Dzielenie " << endl;
		cout << "5. Potega " << endl;
		cout << "6. Silnia " << endl;
		cout << "7. Srednia arytmetyczna " << endl;
		cout << endl;
		cout << ": ";
		cin >> Funkcja;

		switch (Funkcja)
		{
		case 1: cout << " dodawanie " << endl;
			dodawanie();
			break;
		case 2: cout << " odejmowanie " << endl;
			odejmowanie();
			break;
		case 3: cout << " mnozenie " << endl;
			mnozenie();
			break;
		case 4: cout << " dzielenie " << endl;
			dzielenie();
			break;
		case 5: cout << "potegowanie " << endl;
			potega();
			break;
		case 6: cout << "silnia " << endl;
			silnia();
			break;
		case 7: cout << "srednia_arytmetyczna " << endl;
			srednia_arytmetyczna();
			break;
		default: cout << "Nie wybrales zadnego dzialania" << endl;
			break;
		}
		Sleep(3000);
		system("cls");
	} while (true);
	return 0;
}
