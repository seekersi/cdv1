tablica = []
n = int(input("Wprowadź liczbę danych: "))
for i in range(n):
    x = input("Wpisz liczbę: ")
    tablica.append(float(x))

print("Wprowadzone liczby:" + str(tablica))

# a) sumowanie
print("Suma podanych liczb: " + str(sum(tablica)))

# b) sumowanie warunkowe

par = 0
npar = 0

for i in range(len(tablica)):
    if (tablica[i]% 2 ==0):
        par += tablica[i]
    else:
        npar += tablica[i]

print("Suma liczb parzystych :" + str(par))
print("Suma liczb nieparzystych :" + str(npar))

# c) sortowanie
def sortowanie_mal(tablica):
    dlugoscTablicy = len(tablica) - 1 #iteracja przebiega od 0 do n-1, dlatego dajemy -1
    for i in range(dlugoscTablicy):
        for j in range(dlugoscTablicy - i): # złożoność n^2
            if tablica[j] < tablica[j + 1]:
                tablica[j], tablica[j + 1] = tablica[j + 1], tablica[j] #jeśli element jest mniejszy od następcy następuje ich zamiana
    return tablica

def sortowanie_ros(tablica):
    dlugoscTablicy = len(tablica) - 1 #iteracja przebiega od 0 do n-1, dlatego dajemy -1
    for i in range(dlugoscTablicy):
        for j in range(dlugoscTablicy - i): # złożoność n^2
            if tablica[j] > tablica[j + 1]:
                tablica[j], tablica[j + 1] = tablica[j + 1], tablica[j] #jeśli element jest mniejszy od następcy następuje ich zamiana
    return tablica

print("Tablica posortowana malejąco: " + str(sortowanie_mal(tablica)))
print("Tablica posortowana rosnąco: " + str(sortowanie_ros(tablica)))

# d) średnia

srednia = sum(tablica)/len(tablica)
print("Średnia podanych liczb: " + str(srednia))
