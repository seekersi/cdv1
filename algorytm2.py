x = []
for i in range(101):
    x.append(i)

print("Wygenerowana tablica: " + str(x))
liczba_szukana = int(input("Podaj liczbę, której szukasz w tablicy (możliwe wartości 0-100): "))

def wyszukiwanie_binarne(arr, x): #funkcja wyszukiwania binarnego
    low = 0 #indeks pierwszego elementu listy
    high = len(arr) - 1 #indeks ostatniego elementu listy
    mid = 0 #zmienna

    while low <= high:
        mid = (high + low) // 2

        if arr[mid] < x: #ignorujemy prawą stronę
            low = mid + 1

        elif arr[mid] > x: #jeśli x większy ignorujemy lewą stronę
            high = mid - 1

        else: #sprawdzenie czy x znajduje się pod indeksem mid
            return "Podana liczba znajduje się w tablicy pod indeksem " + str(mid)

    return "Podana liczba nie znajduje się w tablicy" #wypisuje, gdy element nie znajduje się w tablicy


print(wyszukiwanie_binarne(x, liczba_szukana)) #wywołanie funkcji
