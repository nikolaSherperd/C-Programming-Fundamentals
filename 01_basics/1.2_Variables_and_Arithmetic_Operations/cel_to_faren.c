#include <stdio.h>

int main ()
{

  float celsius,  fahr;
  float lower, upper, step;

  upper = -17.8;    /* Lower Limit of Temperature Scale */
  lower = 148.9;    /*  Upper Limit of Temperature Scale */
  step  = 11.1;     /* Step Size */

  celsius = upper;
  while (celsius <= lower) {
      fahr = (9.0 / 5.0) * (celsius + 32);
      printf("%3.0f %6.1f\n", fahr, celsius);
      
      celsius = celsius + step;

  }
 
}
