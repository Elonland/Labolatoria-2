#include <stdio.h>

int nwd(int a, int b)
{
int temp;
if(b > a)
{
b = a + b;
a = b - a;
b -= a;
}

while(b != 0)
  {
  temp = b;
  b = a % b; // Nowy b
  a = temp; // a jest równe staremu b
  }
return a;
}


int main(void)
{
int licznik = 0;
int a = 1;
int b = 1;

  //while(b != n || b >= a)
    //{
  for(int n = 1; n <= 1000; n++)
    {
    while(a <= n && b <= n)
      {
     // printf("Para {%d,%d}\n",a,b);
      if(nwd(a,b) == 1)
        {
       // printf("nwd(%d,%d) równa się %d\n",a,b,nwd(a,b));
        ++licznik;
        if(a != b) // powtarzajace sie pary 1,2; 2,1
          {
          ++licznik;
          }
        }
      
      ++b;
      if(b == n + 1)
      {
      ++a;
      b = a;
      }


      }
printf("%d;%f\n",n,(1.0*licznik)/(n*n));
licznik = 0;
a = 1;
b = 1;
    }
  
//printf("Liczba par względnie pierwszych %d\n",licznik);
return 0;
}
