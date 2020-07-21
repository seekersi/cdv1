lista_prod = { #lista produktów zapisana w słowniku, opis produktu to klucz, cena to wartość
    'Piwo': 2.99,
    'Chleb': 1.69,
    'Baton': 2.39,
    'Lizak': 0.99,
    'Bułka': 0.69,
    'Klej': 2.39,
    'Mleko': 2.99,
    'Jogurt': 3.69,
    'Kiełbasa': 5.39,
    'Guma': 1.99
}

print("Oferowana lista produktów:")
for k, v in lista_prod.items(): #Podajemy liste produktów z cena
    print(k,str(v) + "zł")

sum = 0 #sumujemy wartość koszyka od zera
k =1 #ustawiamy flage odpowiedzialną za kontynuowanie zakupów

print("Aby zakończyć zakupy w polu \"Co chcesz kupić?\" wpisz \"Koniec\"")

while k > 0:
    x = input("Co chcesz kupić? ")
    if x == 'Koniec':
        zaplata = float(input("Podaj kwotę, którą płacisz: "))
        reszta = zaplata - sum
        if reszta < 0:
            print("Podana kwota nie wystarczy na opłacenie należności")
        else:
            print("Dziękujemy za zakupy. Oto Twoja reszta: " + str(reszta))
        break
    n = float(input("Ile " + str(x) + " chcesz kupić: "))
    if n >= 0:
        sum += float(lista_prod.get(x)) * n #dodanie do ogólnej sumy wartości produkto pomnożonej przez jego ilość
        print("Zakupy będą kosztowały " + str(sum))
    else:
        print("Nie możesz kupić ujemnej liczby produktu")
