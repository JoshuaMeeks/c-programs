#include <stdio.h>

#define EOF (-1)

int main() 
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
