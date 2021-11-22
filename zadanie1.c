#include <stdio.h>

int main(void)
{

int x,y;
printf("Podaj liczbę złotych\n");
scanf("%d",&x);
printf("Podaj liczbę groszy\n");
scanf("%d",&y);

int licznik = 0;
int wartosc = 200;
printf("banknoty:\n");
  for(int i = 0; i < 8; i++)
  {
    if(x >= wartosc)      //sprawdza czy liczba jest mniejsza od danego banknotu
    {
      if(wartosc == 5)
         printf("monety:\n");

      while(x >= wartosc) //wylicza ile banknotów
      {
        x -= wartosc;
        licznik++;
      }
      printf("%d x %d zł\n", licznik, wartosc);
      licznik = 0;
    }
    wartosc /= 2;         //zmieniam banknot
    if(wartosc == 25)
    wartosc = 20;
  }

  wartosc = 50;

  for(int i = 0; i< 6; i++)
  {
    if(y >= wartosc)
    {
      while(y >= wartosc)
        {
          y -= wartosc;
          licznik++;
        }
        printf("%d x %d groszy\n", licznik, wartosc);
        licznik = 0;
    }
      wartosc /= 2;
    if(wartosc == 25)
        wartosc = 20;
   }
}

