#include <stdio.h>

int main()
{
  int c, countCarriageReturns;
  
  countCarriageReturns = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++countCarriageReturns;
    }
  }
  printf("%d", countCarriageReturns);

}
