#include <stdio.h>

int main(){
  int c, prev;
  while ((c = getchar()) != EOF)
    if (c == ' ' && prev == ' ')
      continue;
    else 
      putchar(prev = c);
  return 0;
}
