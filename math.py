#math

import math

print("Podaj liczbe a:")
a = float(input())
print("Podaj liczbe b")
b = float(input())
print("Podaj liczbe c")
c = float(input())
if (c > 0):
  {
    print("Wynik: " + str(pow(a,2)+b))
  }
elif (c<0):
  {
    print("Wynik wyrazenia "+ str(a-pow(b,2)))
  }
elif((a-b)==0):
  {
  print("Próba dzielenia przez 0!")
  }
elif (c==0):
  {
    print("Wynik wyrazenia " + str((1)/(a-b)))
  }