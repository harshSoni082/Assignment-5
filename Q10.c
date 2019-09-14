// pattern 4
#include <stdio.h>

int main()
{
  for(int i=0; i<10; i++)
  {
    for (int j=0; j<20; j++)
    {
      if (((i+j < 8)||(i+j > 5+2*i)||(i < 2))&&(i < 8))
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
