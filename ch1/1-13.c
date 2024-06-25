#include <stdio.h>

#define IN 1
#define OUT 0

#define LIMIT 10

int main() {
  int lengths[LIMIT+1];
  int c, status, len, longest;

  status = OUT;
  len = 0;

  for (int i = 0; i <= LIMIT; i++)
    lengths[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (status == IN) 
        ++lengths[len];
      status = OUT;
      len = 0;
      continue;
    }  
    status = IN;
    ++len;
    if (len > longest)
      longest = len;
  }

  for (int i = 1; i <= LIMIT; i++) {
    printf("%2.0d ", i);
    for (int j = 0; j < lengths[i]; j++)
      putchar('#');
    putchar('\n');
  }

  putchar('\n');

  for (int i = 1; i <= LIMIT; i++) 
    printf("%3d", i);
  putchar('\n');

  for (int cnt = 1; cnt <= longest + 2; cnt++) {
    for (int i = 1; i <= LIMIT; i++) {
      if (lengths[i] >= cnt) 
        printf("  #");
      else 
        printf("   ");
    }
    putchar('\n');
  }

  printf("Longest: %d\n", longest);


  return 0;
}
