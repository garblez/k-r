#include <stdio.h>

float ftoc(float fahr);

/* print Fahrenheit-Celsius table */ 
int main(){
  float fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%3s %6.2s\n", "`F", "`C");
  while (fahr <= upper) {
    printf("%3.0f %6.1f\n", fahr, ftoc(fahr));
    fahr = fahr + step;
  }
  
  return 0;
}


float ftoc(float fahr) {
  return (5.0/9.0) * (fahr-32.0);
}
