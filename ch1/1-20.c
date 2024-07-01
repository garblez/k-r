#include <stdio.h>

#define TABSTOP 4

void
detab(int spaces)
{
  for (int i = 0; i < spaces; i++)
    putchar(' ');
}

main(){
  int c;
  while ((c = getchar()) != EOF) 
    if (c == '\t')
      detab(TABSTOP);
    else 
      putchar(c);
  

  return 0;
}
