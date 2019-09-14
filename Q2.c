// pattern 2
#include <stdio.h>

int main()
{
  for(int i=0; i<10; i++)
  {
    for (int j=0; j<20; j++)
    {
      if (((i < 3)&&(j > 6))||(i > 2 && i < 7)||((i > 6)&&(j < 12)))
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
