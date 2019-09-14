// pattern 12
#include <stdio.h>

int main()
{
  for(int i=0; i<9; i++)
  {
    for (int j=0; j<20; j++)
    {
      if (((i < 5)&&(i % 2 == 0))||(((i > 4)&&(i % 2 != 0))&&((j > 4)&&(j < 14))))
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
