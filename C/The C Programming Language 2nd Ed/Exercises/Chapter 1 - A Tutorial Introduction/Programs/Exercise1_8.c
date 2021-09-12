#include <stdio.h>
/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
/* count blanks, tabks, lines in input */
int main()
{
  int c, nl, blk, tb;
  nl = 0;
  blk = 0;
  tb = 0;
  while ((c = getchar()) != EOF){
    if (c == '\n'){
      ++nl;
    }
    else if (c == '\t'){
      ++tb;
    }
    else if (c == ' '){
      ++blk;
    }
  }

  printf("%d blanks,\n %d new lines,\n %d tabs.\n", blk, nl, tb);
}
