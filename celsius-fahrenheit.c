/* print Celsius-Fahrenheit table
*   for f = 0, 20, ..., 300 */
#include <stdio.h>

int main()
{
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /*step size */

  fahr = lower;
  while (celsius <= upper) {
    fahr =  celsius * 1.8 + 32;
    printf("%4.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
