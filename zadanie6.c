#include <stdio.h>

int sumaDzielnikow(int n)
{
int x =1;
int sum = 0;

  while(x < n)
    {
    if(n % x == 0)
      {
      sum += x;
      }
    ++x;
    }

return sum;
}

int main(void)
{
int suma[999];
printf("Liczby idealne\n");
for(int n = 1; n < 1000; n++)
  {
  suma[n-1] = sumaDzielnikow(n);
  if(suma[n-1] == n)
  printf("%d\n",suma[n-1]);
  }
int n = 1;
int m = 2;
printf("Liczby zaprzyjaźnione\n");
while(m < 1000)
{
  while(m < 1000)
    {
    if(suma[n] == m && suma[m] == n)
    printf("%d i %d są zaprzyjaźnione\n",n,m);
    ++m;
    }
m = n + 2;
++n;
}




return 0;
}
