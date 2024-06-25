#include <stdio.h>

/* Count blanks, tabs and newlines */ 
int main() {
  long int nb, nt, nl;
  nb = nt = nl = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  }
  printf("tabs: %ld\tblanks: %ld\tlines: %ld\n", nt, nb, nl);
  return 0;
}
