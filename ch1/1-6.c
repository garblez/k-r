#include <stdio.h>

/* is `getchar() != EOF` boolean? 
 * this can be checked against any filestream.
 * however, the only case where it's 0 is on /dev/null or EOF input */ 
int main() {
  int c = getchar() != EOF;
  printf("`getchar() != EOF` is %d\n", c);
  return 0;
}
