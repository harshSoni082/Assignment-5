// pattern 3
#include <stdio.h>

int main()
{
  for(int i=0; i<4; i++)
  {
    for (int j=0; j<10; j++)
    {
      if ((i+j) & 1)
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
