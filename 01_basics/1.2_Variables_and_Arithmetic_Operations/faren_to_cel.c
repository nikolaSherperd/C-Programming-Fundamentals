#include <stdio.h>
/*.c -o build/basics
 * Types_Operators_Expression:
 * $(CC)  $(CFLAGS) 02_Types_Operators_Expression
 * The program converts Fahrenheit to 
 * celsius and prints thier equal 
 * equivalent in tabular format
 *
 *
 * Fahrenheit      Celsius
 *  0  -17.8
 *  20   -6.7
 *  40    4.4
 *  60   15.6
 *  80   26.7
 * 100   37.8
 * 120   48.9
 * 140   60.0
 * 160   71.1
 * 180   82.2
 * 200   93.3
 * 220  104.4
 * 240  115.6
 * 260  126.7
 * 280  137.8
 * 300  148.9*/


int main()
{
  
  char* Title = "Temperature";

  float fahr, celsius;                                   // Use of Float aritmetic for 
			                                // better precision.
  float lower, upper, step;
  lower = 0;                                           //Lower limit on Temperature scale
  upper = 300;                                        //Upper limit on Temperature scale
  step  = 20;                                        //step Size
  

  printf("===================================\n");
  printf("   TEMPERATURE CONVERSIOM TABLE\n");
  printf("===================================\n");
  printf("\n");

  fahr = lower;
  while (fahr <= upper) {

	  celsius = 5.0 / 9.0 * (fahr-32.0);
	  printf("%3.0f %6.1f\n", fahr, celsius); // (%3d %6) Prints the 
					         // first number of each
					        // line in a field, three
					       // digits wide and the second 
					      // six digits wide.
	  fahr = fahr + step;
  }

}
