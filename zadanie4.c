#include <math.h>
#include <stdio.h>

int main(void)
{
  double sum = 1;


  for(int i = 1; i <= 1000; i++)
  {
    sum *= pow(i,0.001);
  }
  printf("%f\n",sum);

}
