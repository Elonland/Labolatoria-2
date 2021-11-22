#include <stdio.h>

int main(void)
{
  int n;
  printf("Podaj ilość liczb\n");
  scanf("%d", &n);

  float sum;
  float temp;

  for(int i = 0; i < n; i++)
   {
     printf("%d liczba\n",i+1);
     scanf("%f",&temp);
     sum += temp;
   }

  printf("Średnia arytmetyczna z tych liczb: %f\n",sum/n);


}
