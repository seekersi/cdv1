#include<iostream>
#include<cstdlib>
#include <vector>


using namespace std;


void Sortowanie1(int* tab, int x)
{
    for (int i = 1; i < x; i++)
    {
        for (int j = x - 1; j >= 1; j--)
        {
            if (tab[j] < tab[j - 1])
            {
                int bufor;
                bufor = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = bufor;

            }
        }
    }
}

void Sortowanie2(int* tab, int x)
{
    for (int i = 1; i < x; i++)
    {
        for (int j = x - 1; j >= 1; j--)
        {
            if (tab[j] > tab[j - 1])
            {
                int bufor;
                bufor = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = bufor;

            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

float mediana(int arr[], int size)
{
    if (size % 2 == 0)
        return (arr[(size - 1) / 2] + arr[size / 2]) / 2;
    else
        return arr[(size) / 2];
}


void moda(int arr[], int size)

    {
        int* T, n, i, j, c, k, maxc, maxk;

        for (i = 0; i < size; i++)


        maxc = 0;

        for (i = 0; i < size; i++)
        {
            k = arr[i];
            c = 0;

            for (j = 0; j < size; j++) if (k == arr[j]) c++;

            if (c > maxc)
            {
                maxc = c;
                maxk = k;
            }
        }
        cout << "Liczba " << maxk << " wystepuje " << maxc << " razy.\n\n";
}



int main()
{


    int funkcja, ile;

    cout << "Ile liczb chcesz podac:  ";
    cin >> ile;
    int* tab;
    tab = new int[ile];
    for (int i = 0; i < ile; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> tab[i];
        cin.ignore();
    }
    cout << "Liczby od najmniejszej do najwiekszej \n";
    Sortowanie1(tab, ile);
    printArray(tab, ile);

    cout << "Liczby od najwiekszej do najmniejszej \n";
    Sortowanie2(tab, ile);
    printArray(tab, ile);

    cout << "Najwieksza liczba to: ";
    cout << tab[0] << endl;
    cout << "Najmniejsza liczba to: ";
    cout << tab[ile - 1] << endl;
    cout << "Mediana : " << mediana(tab, ile) << endl;

    moda(tab, ile);






    return 0;
}
