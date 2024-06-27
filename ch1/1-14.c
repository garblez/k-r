#include <stdio.h>

#define IN 1
#define OUT 0

#define LIMIT 256 // For all characters in 7-bit ASCII

int main() {
  int count[LIMIT+1];
  int c, status, freq, max;

  status = OUT;
  freq = max = 0;

  for (int i = 0; i <= LIMIT; i++)
    count[i] = 0;

  while ((c = getchar()) != EOF) {
    freq = ++count[c];
    if (freq > max)
      max = freq;
  }

  for (int i = 32; i <= LIMIT; i++) {
    if (count[i] == 0)
      continue;
    printf("%c ", i);
    for (int j = 0; j < count[i]; j++)
      printf("\033[7m" " " "\033[0m");
    putchar('\n');
  }

  putchar('\n');

  for (int cnt = max+2; cnt > 0; cnt--) {
    for (int i = 32; i <= LIMIT; i++) {
      if (count[i] == 0)
        continue;
      if (count[i] >= cnt) 
        printf("\033[7m" " " "\033[0m");
      else 
        printf(" ");
    }
    putchar('\n');
  }

  for (int i = 32; i <= LIMIT; i++) 
    if (count[i] != 0)
      printf("%c", i);
  putchar('\n');

  

  return 0;
}
