#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int lotto(int Try_1, int Try_2, int Try_3, int Try_4, int Try_5, int Try_6)
{
    srand(time(NULL));
    int shots[6] = { Try_1, Try_2, Try_3, Try_4, Try_5, Try_6};
    int Victory = 0;
    system("CLS");
    int Winning[6];
    for (int i = 0; i < 6; i++)
    {
        Winning[i] = rand() % 48 + 1;
        for (int j = (i-1); j >=0 ; j--)
        {
            if(Winning[i]==Winning[j])
                Winning[i] = rand() % 48 + 1;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (Winning[i] == shots[j])
                Victory++;
        }
    }
    return Victory;
}
int main()
{
    cout<<"Witamy LOTTO!\n";
    system("pause");
    system("CLS");

    cout << "Czy napewno masz ukonczone 18 lat? \n Odpowiedz (T)/(N) \n";
    while (true)
    {
        string Decision;

        cin >> Decision;
        char reply = Decision[0];
        if((int)reply == 110 or (int)reply == 116)
        {
            reply = reply - 32;
        };
        switch (reply)
        {
        case 'T':
            system("CLS");
            cout << "Podaj Teraz 6 liczb od 1 do 49 kazda z nich oddziel enterem! \n";
            int Try_1, Try_2, Try_3, Try_4, Try_5, Try_6,score;
            cin>> Try_1>>Try_2>>Try_3>>Try_4>>Try_5>>Try_6;
            while (Try_1 > 49 or Try_2 > 49 or Try_3 > 49 or Try_4 > 49 or Try_5 > 49 or Try_6 > 49 or Try_1 < 0 or Try_2 < 0 or Try_3 < 0 or Try_4 < 0 or Try_5 < 0 or Try_6 < 0 )
            {
                cout << "Jedna z podanych liczb jest nieprawidlowa! \n Podaj 6 liczb w zakresie od 1 do 49! \n";
                cin >> Try_1 >> Try_2 >> Try_3 >> Try_4 >> Try_5 >> Try_6;
            }
            score = lotto(Try_1, Try_2, Try_3, Try_4, Try_5, Try_6);
            switch (score)
            {
            case 1 :
                cout << "Brawo! Trafiles Jedynke, zarobisz jakies 4 zl! \n";
                return 0;
            case 2 :
                cout << "Brawo! Trafiles Dwojke, zarobisz jakies 10 zl! \n";
                return 0;
            case 3 :
                cout << "Brawo! Trafiles Trojke, zarobisz jakies 40 zl! \n";
                return 0;
            case 4 :
                cout << "Brawo! Trafiles czworke, zarobisz jakies 260 zl! \n";
                return 0;
            case 5 :
                cout << "Brawo! Trafiles Piatke, zarobisz jakies 5000 zl! \n";
                return 0;
            case 6 :
                cout << "Brawo! Trafiles Szostke, zarobisz conajmniej 2 miliony zl! \n";
                return 0;
            default :
                cout << "Przykro nam ale nic nie wygrales! moze nastepnym razem!";
                return 0;

            };
            break;
        case 'N':
            system("CLS");
            cout << "Wiec nie powinienes w to grac! \n";
            return 0;
        default:
            system("CLS");
            cout << "Podaj prawidlowa odpowiedz! \n Czy skonczyles 18 lat? \n (T)/(N) \n ";
            break;
        };

    };
    return 0;
}
