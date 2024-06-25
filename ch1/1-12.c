#include <stdio.h>

#define IN 1
#define OUT 0 

/* Print the input one word per line */
int main(){
  int c, state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN)
        putchar('\n'); // Just ended a word
      state = OUT;
      continue;
    } 
    state = IN;
    putchar(c);
  }
  return 0;
} 
