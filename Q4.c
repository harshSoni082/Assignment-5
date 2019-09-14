// pattern 4
#include <stdio.h>

int main()
{
  for(int i=0; i<6; i++)
  {
    for (int j=0; j<30; j++)
    {
      if ((j % 3 == 0) || (j % 5 == 0) || !(i & 1))
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
