// pattern 9
#include <stdio.h>

int main()
{
  for(int i=0; i<9; i++)
  {
    for (int j=0; j<20; j++)
    {
      if ((i+j < 8)||(i+j > 3+2*i)||(i < 3))
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
