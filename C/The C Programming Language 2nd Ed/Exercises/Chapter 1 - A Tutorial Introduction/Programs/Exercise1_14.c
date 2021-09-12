#include <stdio.h>
/* Exercise 1-14. Write a program to print a histogram of the frequencies of
different characters in its input. */
int main()
{
  int c, i, nwhite, nother;
  int ndigit[10];
  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;
  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  //printf("digits =");
  for (i = 0; i < 10; ++i){
    putchar(i);
    putchar('\t');
    
    for (int j=0; j < ndigit[i]; ++j)
      putchar('0');
    putchar('\n');
  }

  putchar('w');
  putchar('\t');

  for (int j=0; j < nwhite; ++j)
      putchar('0');
  putchar('\n');

  putchar('o');
  putchar('\t');

  for (int j=0; j < nother; ++j)
      putchar('0');
  putchar('\n');
}
