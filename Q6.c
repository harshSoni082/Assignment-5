// pattern 6
#include <stdio.h>

int main()
{
  for(int i=0; i<5; i++)
  {
    for (int j=0; j<30; j++)
    {
      if (((i % 2 == 0) && !(j % 5 == 0))||(!(i % 2 == 0) && (j % 5 == 0)))
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
