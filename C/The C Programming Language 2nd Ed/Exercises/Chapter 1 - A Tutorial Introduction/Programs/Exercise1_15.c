#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
float temperature_converter(int fahr);
/* test temperature_converter function */
/*
Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use
a function for conversion.
print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, temperature_converter(fahr));
  return 0;
}

/* temperature_converter: converts from Fahrenheit to Celsius */
float temperature_converter(int fahr){
    return (5.0/9.0)*(fahr-32);
}
