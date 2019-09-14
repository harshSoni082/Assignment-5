// pattern 5
#include <stdio.h>

int main()
{
  for(int i=0; i<6; i++)
  {
    for (int j=0; j<20; j++)
    {
      if ((j % 5 == 0) || !(i & 1))
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
