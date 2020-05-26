#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;
void okrag(float promien){
	system("CLS");
	float obwod = 2*promien * 3.14;
	float pole = 3.14 * (promien * promien);
	cout << "Te kolo o promieniu " << promien << ". \n Ma obwod rowny " << obwod << ". \n Ma Pole Rowne " << pole<<"\n\n\n\n\n";
	system("Pause");
}
void kwadrat(float dl_boku) {
	system("CLS");
	float pole, obwod;
	pole = (dl_boku * dl_boku);
	obwod = dl_boku * 4;
	cout << "Ten Kwadrat o boku " << dl_boku << ". \n Ma pole rowne " << pole << ". \n Ma obwod rowny " << obwod << ". \n";
	system("Pause");
}
void prostokat(float bok_1, float bok_2) {
	system("CLS");
	float pole, obwod;
	pole = (bok_1 * bok_2);
	obwod = (bok_1*2)+(bok_2*2);
	cout << "Ten Prostokat o bokach " << bok_1<<" Oraz "<<bok_2 << ". \n Ma pole rowne " << pole << ". \n Ma obwod rowny " << obwod << ". \n";
	system("Pause");
}
void trojkat(float bok_1, float bok_2) {
	float pole, obwod;
	pole = (bok_1 * bok_2)/2;
	obwod = bok_1+ 2*(sqrt(pow(bok_1/2,2)+pow(bok_2,2)));
	system("CLS");
	cout << "Ten Trojkat o podstawie " << bok_1 << " Oraz wysokosci " << bok_2 << ". \n Ma pole rowne " << pole << ". \n Ma obwod rowny " << obwod << ". \n";
	system("Pause");
}
void trapez(float bok_1, float bok_2,float wysokosc) {
	float pole=0,obwod=0;
	pole = (bok_1+ bok_2)*wysokosc / 2;
	cout << "To trapez :\n1)Rownorammieny \n2)porostokatny \n";
	char type;
	cin >> type;
	switch (type) {
	case '1':if (bok_1 > bok_2)
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_1 - bok_2) / 2), 2) + pow(wysokosc, 2))) * 2;
		  else
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_2 - bok_1) / 2), 2) + pow(wysokosc, 2))) * 2; break;
	case '2':if (bok_1 > bok_2)
		obwod = bok_1 + bok_2 + (sqrt(pow(((bok_1 - bok_2) / 2), 2) + pow(wysokosc, 2)))+wysokosc ;
		  else
		 obwod = bok_1 + bok_2 + (sqrt(pow(((bok_2 - bok_1) / 2), 2) + pow(wysokosc, 2)))+wysokosc; break;
	default:cout << "Podaj prawidlowy numer ! "; system("CLS"); break;
	}
	obwod = obwod;
	system("CLS");
	cout << "Ten Trapez o podstawie " << bok_1 <<" Oraz "<<bok_2<< " Oraz wysokosci " << wysokosc<< ". \nMa pole rowne " << pole << ". \nMa obwod rowny "<< obwod << ". \n";
	system("Pause");
}
void romb(float podstawa, float wysokosc) {
	float pole = podstawa * wysokosc;
	float obwod = 4 * podstawa;
	cout << "Ten Romb o boku " << podstawa << " i wysokosci " << wysokosc << "\nma pole powierzchni rowne " << pole << "\nma obwod rowny " << obwod << endl;
	system("Pause");
}
void czworoscian(float bok) {
	float podstawa = ((bok * bok) * sqrt(3) / 4);
	float pole = 4 * podstawa;
	float objetosc = ((bok * bok * bok) * sqrt(2) / 12);
	cout << "Ten czworoscian o boku " << bok<< "\nma pole podstawy rowne " << podstawa  << "\nma pole powierzchni rowne " << pole << "\nma objetosc rowna " << objetosc << endl;
	system("Pause");
}
void ostroslup(float bok_1,float wysokosc) {
	float podstawa = bok_1 * bok_1;
	float wys_boku_przyprostokatne = (bok_1 / 2) * (bok_1 / 2) + wysokosc * wysokosc;
	float wys_boku = sqrt(wys_boku_przyprostokatne);
	float pole_sciany = bok_1 * wys_boku;
	float pole_boczne = pole_sciany * 4;
	float pole_calkowite = pole_boczne + podstawa;
	float objetosc = podstawa / 3 * wysokosc;
	cout << "Ten Ostrsolup prawidlowy czworokatny o krawedzi podstawy " << bok_1 << "\noraz wysokosci " << wysokosc <<
		"\nma podstawe o polu " << podstawa << "\nJedna jego sciana ma pole " << pole_sciany << "\na pole wszystkich scian wynosi "
		<< pole_boczne << "\nPole calkowite to " << pole_calkowite << "\na objetosc to " << objetosc<<endl;
	system("Pause");
}
void szescian(float krawedz) {
	float pole = krawedz * krawedz;
	float pole_calkowite = pole * 6;
	float objetosc = krawedz * krawedz * krawedz;
	cout << "Ten szescian o krawedzi " << krawedz<<"\n polu podstawy "<<pole<< "\n ma pole calkowite rowne " << pole_calkowite << "\n i objetosc rowna " << objetosc<<endl;
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
	cout << "\n Graniastoslup trojkatny o podanych krawedziach podstawy oraz wysoskoci:\n Ma pole podstawy wynoszace : " << PODSTAWA;
	cout << "\n Pola scian wynosza kolejno :"<<sciana_1<<"," << sciana_2 << "," << sciana_3 << ".\n Czyli pole boczne wynosi :"<<Pole_Boczne<<"." ;
	cout << "\n Pole calkowite jest wiec rowne : "<<Pole_Calkowite<<".\n Objetosc jest rowna :"<<objetosc<<endl;
	system("pause");
}
void Walec(float promien, float wysokosc) {
	float obwod_podstawy = 2 * 3.14 * promien;
	float pole_podstawy = promien * promien * 3.14;
	float pole_boczne = obwod_podstawy * wysokosc;
	float pole_calkowite = pole_boczne + pole_podstawy;
	float objetosc = pole_podstawy * wysokosc;
	cout << "Walec o podanym promieniu podstawy oraz wysokosci ma: \nObwod podstawy: "<<obwod_podstawy<<"\nPole Podstawy: " << pole_podstawy;
	cout << "\nPole_Boczne: "<<pole_boczne<<endl<<"Pole calkowite: "<<pole_calkowite;
	cout << "\nObjetosc: "<<objetosc<<endl;
	system("pause");
}
void stozek(float promien, float wysokosc)
{	float obwod_podstawy = 2 * 3.14 * promien;
	float pole_podstawy = promien * promien * 3.14;
	float objetosc = (pole_podstawy / 3) * wysokosc;
	float tworzaca = sqrt(promien * promien + wysokosc * wysokosc);
	float Pole_Boczne = 3.14 * promien * tworzaca;
	cout << "Stozek o podanym promieniu i wysokosci ma:\nPole podstawy =" << pole_podstawy << endl;
	cout << "pole boczne rowne= " << Pole_Boczne << endl << "Pole Calkowite rowne= " << Pole_Boczne + pole_podstawy<<endl;
	cout << "Tworzaca dlugosci " << tworzaca << "\nObjetosc rowna:" << objetosc << endl;
	system("pause");
}
void kula(float promien)
{
	float Pole_Kuli = 4 * (promien * promien) * 3.14;
	float objetosc = 1.33 * 3.14 * pow(promien, 3);
	cout << "Ta kula ma Pole rowne :" << Pole_Kuli << "\nObjetosc rowna :" << objetosc<<"\nSrednice rowna:"<<promien*2;
	cout << endl; system("pause");
}
int main()
{
cout<<"Witam kalkulatorze!\n";
system("pause");
	int dimention_1, dimention_2, dimention_3, dimention_4, dimention_5, Class_Choose;


		while (true)
		{	system("CLS");
			cout << " Wybierz Figure! \n okrag (1) \n kwadrat(2) \n prostokat(3) \n trojkat(4) \n trapez(5) \n romb(6) \n czworoscian foremny(7) \n ostroslup czworokatny(8) \n szescian(9) \n graniastoslup trojkatny(10) \n walec(11) \n stozek(12) \n kula(13) \n Opusc program (420) \n";
			cin >> Class_Choose;
			if (!cin.fail())
				switch (Class_Choose)
				{
				case 1:system("CLS");//OKR¥G
					cout << "Wybrales Okrag! \n Podaj promien okregu! \n Promien = ";
						cin >> dimention_1;
					okrag(dimention_1);
					break;
				case 2:system("CLS");//KWADRAT
					cout << "Wybrales kwadrat \n Podaj dlugosc boku kwadratu! \n Dlugosc boku = ";
					cin >> dimention_1;
					kwadrat(dimention_1);
					break;
				case 3:system("CLS");//PROSTOKAT
					cout << "Wybrales Prostokat \n Podaj dlugosci boku prostokatu! \n Bok numer 1 = ";
					cin >> dimention_1;
					cout << "Podaj dlugosc drugiego boku prostokata \n Bok numer 2 = ";
					cin >> dimention_2;
					prostokat(dimention_1,dimention_2);
					break;
				case 4:system("CLS"); //TRÓJK¥T
					cout << "Wybrales Trojkat \n Podaj Dlugosc podstawy Trojkata! \n Dlugosc podstawy =";
					cin >> dimention_1;
					cout << "Podaj teraz wysokosc tego trojkata! \n Wysokosc =";
					cin >> dimention_2;
					trojkat(dimention_1, dimention_2);
					break;
				case 5:system("CLS"); //TRAPEZ
					cout << "Wybrales trapez! \n Podaj Dlugosc pierwszej podstawy trapezu! \n Podstawa numer 1 = ";
					cin >> dimention_1;
					cout << "Podaj dlugosc drugiej podstawy trapezu\n Podstawa numer 2 = ";
					cin >> dimention_2;
					cout << "Podaj wysokosc trapezu\n Wysokosc = ";
					cin >> dimention_3;
					trapez(dimention_1, dimention_2, dimention_3);
					break;
				case 6:system("CLS"); //ROMB
					cout << "Wybrales Romb! \n Podaj Dlugosc Podstawy Rombu! \n Podstawa = ";
					cin >> dimention_1;
					cout << "Podaj dlugosc wysokoœci\n Wysokosc =";
					cin >> dimention_2;
					romb(dimention_1, dimention_2);
					break;
				case 7:system("CLS"); //Czworoscian Foremny
					cout << "Podaj dlugosc krawedzi czworoscianu! \n Dlugosc Krawedzi = ";
					cin >> dimention_1;
					czworoscian(dimention_1);
					break;
				case 8:system("CLS"); //Ostros³up Czworok¹tny
					cout << "podaj dlugosc krawedzi podstawy Ostroslupa! \n Krawedz Podstawy = ";
					cin >> dimention_1;
					cout << "podaj dlugosc Wysokosci Ostroslupa! \n Wysokosc = ";
					cin >> dimention_5;
					ostroslup(dimention_1, dimention_5);
					break;
				case 9:system("CLS");  //Szeœcian
					cout << "podaj dlugosc krawedzi tego szescianu\n Dlugosc Krawedzi = ";
					cin >> dimention_1;
					szescian(dimention_1);
					break;
				case 10:system("CLS"); //Graniastos³up trójk¹tny
					cout << "\nPodaj dlugosc Pierwszej krawedzi podstawy tego graniastoslupa \n Krawedz numer 1 = ";
					cin >> dimention_1;
					cout << "\nPodaj dlugosc Drugiej krawedzi podstawy tego graniastoslupa \n Krawedz numer 2 = ";
					cin >> dimention_2;
					cout << "\nPodaj dlugosc Trzeciej krawedzi podstawy tego graniastoslupa \n Krawedz numer 3 =";
					cin >> dimention_3;
					cout << "\nPodaj Wysokosc tego graniastoslupa \n Wysokosc = ";
					cin >> dimention_4;
					graniastoslup(dimention_1, dimention_2, dimention_3, dimention_4);
					break;
				case 11:system("CLS");//Walec
					cout << "Podaj Promien tego walca!\n Promien= ";
					cin >> dimention_1;
					cout << "Podaj Wysokosc tego walca!\n Wysokosc= ";
					cin >> dimention_2;
					Walec(dimention_1, dimention_2);
					break;
				case 12:system("CLS");
					cout << "podaj Promien podstawy stozka!\nPromien=";
					cin >> dimention_1;
					cout << "podaj Wysokosc stozka!\nWysokosc=";
					cin >> dimention_2;
					stozek(dimention_1, dimention_2);
					break;//Sto¿ek
				case 13:system("CLS");
					cout << "Podaj Promien Kuli!\nPromien=";
						cin >> dimention_1;
						kula(dimention_1);
					break;//Kula
				case 420:system("CLS"); cout << "Dziekujemy! \n\n";return 0; //DAJE FULA :DD
				default:
					system("CLS");
					cout << "Podaj prawidlowy numrer figury! \n";
					break;
				}
			else {
				cin.clear(); cin.ignore();

			};
		}


	return 0;
}
