// pattern 8
#include <stdio.h>

int main()
{
  for(int i=0; i<10; i++)
  {
    for (int j=0; j<20; j++)
    {
      if ((j > 7-i)&&(j < 12))
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
