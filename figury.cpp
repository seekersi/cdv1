#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;
void okrag(float promien) {
	system("CLS");
	float obwod = 2 * promien * 3.14;
	float pole = 3.14 * (promien * promien);
	cout << "To kolo o promieniu: " << promien << ". \n ma obwod rowny: " << obwod << ". \n ma pole rowne: " << pole << "\n\n\n";
	system("Pause");
}
void kwadrat(float dlugosc_boku) {
	system("CLS");
	float pole, obwod;
	pole = (dlugosc_boku * dlugosc_boku);
	obwod = dlugosc_boku * 4;
	cout << "Ten kwadrat o boku: " << dlugosc_boku << ". \n ma pole rowne: " << pole << ". \n ma obwod rowny: " << obwod << ". \n";
	system("Pause");
}
void prostokat(float bok_1, float bok_2) {
	system("CLS");
	float pole, obwod;
	pole = (bok_1 * bok_2);
	obwod = (bok_1 * 2) + (bok_2 * 2);
	cout << "Ten prostokat o bokach: " << bok_1 << " oraz " << bok_2 << ". \n ma pole rowne: " << pole << ". \n ma obwod rowny: " << obwod << ". \n";
	system("Pause");
}
void trojkat(float bok_1, float bok_2) {
	float pole, obwod;
	pole = (bok_1 * bok_2) / 2;
	obwod = bok_1 + 2 * (sqrt(pow(bok_1 / 2, 2) + pow(bok_2, 2)));
	system("CLS");
	cout << "Ten trojkat o podstawie: " << bok_1 << " Oraz wysokosci: " << bok_2 << ". \n Ma pole rowne: " << pole << ". \n Ma obwod rowny: " << obwod << ". \n";
	system("Pause");
}
void trapez(float bok_1, float bok_2, float wysokosc) {
	float pole = 0, obwod = 0;
	pole = (bok_1 + bok_2) * wysokosc / 2;
	cout << "To trapez:\n1)rownorammieny \n2)prostokatny \n";
	char type;
	cin >> type;
	switch (type) {
	case '1':if (bok_1 > bok_2)
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_1 - bok_2) / 2), 2) + pow(wysokosc, 2))) * 2;
			else
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_2 - bok_1) / 2), 2) + pow(wysokosc, 2))) * 2; 
		break;
	case '2':if (bok_1 > bok_2)
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_1 - bok_2) / 2), 2) + pow(wysokosc, 2))) + wysokosc;
			else
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_2 - bok_1) / 2), 2) + pow(wysokosc, 2))) + wysokosc; 
		break;
	default:cout << "Podaj prawidlowa liczbe "; system("CLS");
		break;
	}

	obwod = obwod;
	system("CLS");
	cout << "Ten trapez o podstawie: " << bok_1 << " oraz " << bok_2 << " oraz wysokosci: " << wysokosc << ". \n,a pole rowne: " << pole << ". \nma obwod rowny: " << obwod << ". \n";
	system("Pause");
}
void romb(float podstawa, float wysokosc) {
	float pole = podstawa * wysokosc;
	float obwod = 4 * podstawa;
	cout << "Ten romb o boku " << podstawa << " i wysokosci " << wysokosc << "\nma pole powierzchni rowne " << pole << "\nma obwod rowny " << obwod << endl;
	system("Pause");
}
void czworoscian(float bok) {
	float podstawa = ((bok * bok) * sqrt(3) / 4);
	float pole = 4 * podstawa;
	float objetosc = ((bok * bok * bok) * sqrt(2) / 12);
	cout << "Ten czworoscian o boku " << bok << "\nma pole podstawy rowne " << podstawa << "\nma pole powierzchni rowne " << pole << "\nma objetosc rowna " << objetosc << endl;
	system("Pause");
}
void ostroslup(float bok_1, float wysokosc) {
	float podstawa = bok_1 * bok_1;
	float wys_boku_przyprostokatne = (bok_1 / 2) * (bok_1 / 2) + wysokosc * wysokosc;
	float wys_boku = sqrt(wys_boku_przyprostokatne);
	float pole_sciany = bok_1 * wys_boku;
	float pole_boczne = pole_sciany * 4;
	float pole_calkowite = pole_boczne + podstawa;
	float objetosc = podstawa / 3 * wysokosc;
	cout << "Ten ostrsolup prawidlowy czworokatny o krawedzi podstawy " << bok_1 << "\noraz wysokosci " << wysokosc <<
		"\nma podstawe o polu " << podstawa << "\nJedna jego sciana ma pole " << pole_sciany << "\na pole wszystkich scian wynosi "
		<< pole_boczne << "\nPole calkowite to " << pole_calkowite << "\na objetosc to " << objetosc << endl;
	system("Pause");
}
void szescian(float krawedz) {
	float pole = krawedz * krawedz;
	float pole_calkowite = pole * 6;
	float objetosc = krawedz * krawedz * krawedz;
	cout << "Ten szescian o krawedzi " << krawedz << "\n polu podstawy " << pole << "\n ma pole calkowite rowne " << pole_calkowite << "\n i objetosc rowna " << objetosc << endl;
	system("pause");
}
void graniastoslup(float bok_1, float bok_2, float bok_3, float wysokosc)
{
	float p = (bok_1 + bok_2 + bok_3) / 2;
	float PODSTAWA = sqrt(p * (p - bok_1) * (p - bok_2) * (p - bok_3));
	float objetosc = PODSTAWA * wysokosc;
	float sciana_1 = bok_1 * wysokosc;
	float sciana_2 = bok_2 * wysokosc;
	float sciana_3 = bok_3 * wysokosc;
	float Pole_Boczne = sciana_1 + sciana_2 + sciana_3;
	float Pole_Calkowite = Pole_Boczne + (PODSTAWA * 2);
	cout << "\n Graniastoslup trojkatny o podanych krawedziach podstawy oraz wysokosci:\n ma pole podstawy wynoszace : " << PODSTAWA;
	cout << "\n pola scian wynosza kolejno :" << sciana_1 << "," << sciana_2 << "," << sciana_3 << ".\n Czyli pole boczne wynosi :" << Pole_Boczne << ".";
	cout << "\n pole calkowite jest wiec rowne : " << Pole_Calkowite << ".\n objetosc jest rowna :" << objetosc << endl;
	system("pause");
}
void Walec(float promien, float wysokosc) {
	float obwod_podstawy = 2 * 3.14 * promien;
	float pole_podstawy = promien * promien * 3.14;
	float pole_boczne = obwod_podstawy * wysokosc;
	float pole_calkowite = pole_boczne + pole_podstawy;
	float objetosc = pole_podstawy * wysokosc;
	cout << "Walec o podanym promieniu podstawy oraz wysokosci ma: \nobwod podstawy: " << obwod_podstawy << "\npole podstawy: " << pole_podstawy;
	cout << "\npole boczne: " << pole_boczne << endl << "pole calkowite: " << pole_calkowite;
	cout << "\nobjetosc: " << objetosc << endl;
	system("pause");
}
void stozek(float promien, float wysokosc)
{
	float obwod_podstawy = 2 * 3.14 * promien;
	float pole_podstawy = promien * promien * 3.14;
	float objetosc = (pole_podstawy / 3) * wysokosc;
	float tworzaca = sqrt(promien * promien + wysokosc * wysokosc);
	float Pole_Boczne = 3.14 * promien * tworzaca;
	cout << "Stozek o podanym promieniu i wysokosci ma:\npole podstawy =" << pole_podstawy << endl;
	cout << "pole boczne rowne= " << Pole_Boczne << endl << "pole calkowite rowne= " << Pole_Boczne + pole_podstawy << endl;
	cout << "tworzaca dlugosci " << tworzaca << "\nobjetosc rowna:" << objetosc << endl;
	system("pause");
}
void kula(float promien)
{
	float Pole_Kuli = 4 * (promien * promien) * 3.14;
	float objetosc = 1.33 * 3.14 * pow(promien, 3);
	cout << "Ta kula ma pole rowne :" << Pole_Kuli << "\nobjetosc rowna :" << objetosc << "\nsrednice rowna:" << promien * 2;
	cout << endl; system("pause");
}
int main()
{
	cout << "Witam w kalkulatorze figur plaskich i przestrzennych!\n";
	system("pause");
	int dimention_1, dimention_2, dimention_3, dimention_4, dimention_5, Class_Choose;


	while (true)
	{
		system("CLS");
		cout << " Wybierz figure! \n okrag (1) \n kwadrat(2) \n prostokat(3) \n trojkat(4) \n trapez(5) \n romb(6) \n czworoscian foremny(7) \n ostroslup czworokatny(8) \n szescian(9) \n graniastoslup trojkatny(10) \n walec(11) \n stozek(12) \n kula(13) \n Wyjdz (420) \n";
		cin >> Class_Choose;
		if (!cin.fail())

			switch (Class_Choose)
			{
			case 1:system("CLS");//OKRAG
				cout << "Wybrales okrag! \n Podaj promien okregu! \n Promien = ";
				cin >> dimention_1;
				okrag(dimention_1);
				break;
			case 2:system("CLS");//KWADRAT
				cout << "Wybrales kwadrat \n Podaj dlugosc boku kwadratu! \n Dlugosc boku = ";
				cin >> dimention_1;
				kwadrat(dimention_1);
				break;
			case 3:system("CLS");//PROSTOKAT
				cout << "Wybrales prostokat \n Podaj dlugosci boku prostokatu! \n Bok numer 1 = ";
				cin >> dimention_1;
				cout << "Podaj dlugosc drugiego boku prostokata \n Bok numer 2 = ";
				cin >> dimention_2;
				prostokat(dimention_1, dimention_2);
				break;
			case 4:system("CLS"); //TROJKAT
				cout << "Wybrales trojkat \n Podaj dlugosc podstawy trojkata! \n Dlugosc podstawy =";
				cin >> dimention_1;
				cout << "Podaj teraz wysokosc tego trojkata! \n Wysokosc =";
				cin >> dimention_2;
				trojkat(dimention_1, dimention_2);
				break;
			case 5:system("CLS"); //TRAPEZ
				cout << "Wybrales trapez! \n Podaj dlugosc pierwszej podstawy trapezu! \n Podstawa numer 1 = ";
				cin >> dimention_1;
				cout << "Podaj dlugosc drugiej podstawy trapezu\n Podstawa numer 2 = ";
				cin >> dimention_2;
				cout << "Podaj wysokosc trapezu\n Wysokosc = ";
				cin >> dimention_3;
				trapez(dimention_1, dimention_2, dimention_3);
				break;
			case 6:system("CLS"); //ROMB
				cout << "Wybrales romb! \n Podaj dlugosc podstawy rombu! \n Podstawa = ";
				cin >> dimention_1;
				cout << "Podaj dlugosc wysokości\n Wysokosc =";
				cin >> dimention_2;
				romb(dimention_1, dimention_2);
				break;
			case 7:system("CLS"); //CZWOROSCIAN FOREMNY
				cout << "Podaj dlugosc krawedzi czworoscianu! \n Dlugosc krawedzi = ";
				cin >> dimention_1;
				czworoscian(dimention_1);
				break;
			case 8:system("CLS"); //OSTROSLUP CZWOROKATNY
				cout << "podaj dlugosc krawedzi podstawy ostroslupa! \n Krawedz podstawy = ";
				cin >> dimention_1;
				cout << "podaj dlugosc wysokosci ostroslupa! \n Wysokosc = ";
				cin >> dimention_5;
				ostroslup(dimention_1, dimention_5);
				break;
			case 9:system("CLS");  //SZESCIAN
				cout << "podaj dlugosc krawedzi tego szescianu\n Dlugosc krawedzi = ";
				cin >> dimention_1;
				szescian(dimention_1);
				break;
			case 10:system("CLS"); //GRANIASTOSLUP TROJKATNY
				cout << "\nPodaj dlugosc pierwszej krawedzi podstawy tego graniastoslupa \n Krawedz numer 1 = ";
				cin >> dimention_1;
				cout << "\nPodaj dlugosc drugiej krawedzi podstawy tego graniastoslupa \n Krawedz numer 2 = ";
				cin >> dimention_2;
				cout << "\nPodaj dlugosc trzeciej krawedzi podstawy tego graniastoslupa \n Krawedz numer 3 =";
				cin >> dimention_3;
				cout << "\nPodaj wysokosc tego graniastoslupa \n Wysokosc = ";
				cin >> dimention_4;
				graniastoslup(dimention_1, dimention_2, dimention_3, dimention_4);
				break;
			case 11:system("CLS");//WALEC
				cout << "Podaj promien tego walca!\n Promien= ";
				cin >> dimention_1;
				cout << "Podaj wysokosc tego walca!\n Wysokosc= ";
				cin >> dimention_2;
				Walec(dimention_1, dimention_2);
				break;
			case 12:system("CLS");//STOZEK
				cout << "Podaj promien podstawy stozka!\nPromien=";
				cin >> dimention_1;
				cout << "Podaj wysokosc stozka!\nWysokosc=";
				cin >> dimention_2;
				stozek(dimention_1, dimention_2);
				break;
			case 13:system("CLS");//KULA
				cout << "Podaj promien kuli!\nPromien=";
				cin >> dimention_1;
				kula(dimention_1);
				break;
			case 420:system("CLS"); cout << "Dziekujemy! \n\n"; 
			return 0;
			default:
				system("CLS");
				cout << "Podaj prawidlowy numer figury! \n";
				break;
			}

		else {
			cin.clear(); cin.ignore();

		};
	}


	return 0;
}
