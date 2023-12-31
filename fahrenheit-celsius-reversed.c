/* print Fahrenheit-Celcius table
*   for f = 0, 20, ..., 300 */
#include <stdio.h>

int main()
{
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /*step size */

  fahr = upper;
  printf("Fahrenheit to Celsius conversion chart reversed\n");
  while (fahr >= lower) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%4.0f %6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
}
