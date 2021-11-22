#include <stdio.h>

int main(void)
{
  int liczba = 1;
  double suma = 1;

  while (suma <= 10)
  {
    ++liczba;
    suma += 1.0/liczba;
  }
  printf("dla n = %d suma jest większa od 10\n", liczba);

}
/*

P(suma,liczba) == suma >= 1 i liczba >= 1


1 Krok indukcyjny

P(suma, liczba) == P(1,1)

1 >= 1 oraz 1 >= 1


2 Krok indukcyjny

P(suma, liczba) i suma <= 10 --> P(suma', liczba')

suma >= 1
liczba >= 1
suma <= 10
suma' = suma + 1/liczba
liczba' = 1 + liczba

Teza

suma' >= 1
liczba' >= 1

suma + 1/liczba >= 1

z założenia wynika że suma >= 1 i liczba >= 1

więc suma + 1/liczba >= 1

1 + liczba >= 1

liczba >= 1 więc jest to zdanie prawdziwe


3 po wyjściu z pętli

liczba >= 1 i suma > 10


*/
