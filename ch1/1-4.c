#include <stdio.h>

int main() {
  /* Celsius to Fahrenheit */
  printf("%3s %6.2s\n", "`C", "`F");

  for (int celsius = 0; celsius <= 300; celsius += 20)
    printf("%3d %6.1f\n", celsius, (9.0/5.0)*celsius + 32.0);
  
  return 0;
}
