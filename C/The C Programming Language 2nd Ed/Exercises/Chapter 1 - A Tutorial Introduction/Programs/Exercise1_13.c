#include <stdio.h>
#define IN 1
#define OUT 0
/* Exercise 1-13. Write a program to print a histogram of the lengths of words
in its input. It is easy to draw the histogram with the bars horizontal; a
vertical orientation is more challenging. */
int main()
{
  int c, state;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      putchar('\n');
    }
    if (state == IN) {
      putchar('0');
    }
  }
  putchar('\n');
}
