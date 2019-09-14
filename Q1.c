// patter 1
#include<stdio.h>

int main()
{
  for(int i=0; i<5; i++)
  {
    for (int j=0; j<20; j++)
    {
      if ((i%2 == 0) || (j%2 == 0))
      {
        printf("*");
      }
      else
      {
        printf("O");
      }
    }
    printf("\n");
  }
  return 0;
}
