#include <stdio.h>
/* The program converts Fahrenheit to 
 * celsius and prints thier equal 
 * equivalent in tabular format
 *
 *
 * Fahrenheit      Celsius
 * 1               -17
 * 20              -6
 * 40              4
 * 60              15 
 * 100             26
 * 120             37 
 * 140             48
 * 160		   60
 * 180		   71
 * 200		   82
 * 210             93
 * 220             104
 * 240             115
 * 260             126
 * 280             137
 * 300             148*/

int main()
{

  int fahr, celsius;
  int lower, upper, step;

  lower = 0;    //Lower limit on Temperature scale
  upper = 300; //Upper limit on Temperature scale
  step  = 20; //step Size
  
  fahr = lower;
  while (fahr <= upper) {

	  celsius = 5 * (fahr-32) / 9;
	  printf("%d\t%d\n", fahr, celsius);
	  fahr = fahr + step;
  }

}
