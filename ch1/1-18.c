#include <stdio.h>
#define MAXLINE 10

int krgetline(char line[], int lim);
void copy(char to[], char from[]);
void trimr(char s[], int len);

int main(){
  int len;
  int c;
  char line[MAXLINE];

  while ((len = krgetline(line, MAXLINE)) > 0) {
    if (line[len-1] != '\n')
      while ((c=getchar()) != EOF && c != '\n')
        ++len;

    if (len >= MAXLINE) 
      trimr(line, MAXLINE);
    else 
      trimr(line, len);

    printf("%s\n", line);
  }

  return 0;
}

int
krgetline(char s[], int lim)
{
  int c, i;

  for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void
trimr(char s[], int len)
{
  int i = len-2;
  while (i > 0 && (s[i-1] == '\t' || s[i-1] == ' '))
    i--;
  s[i] = '\0';
}

void
copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
