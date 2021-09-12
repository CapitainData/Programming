#include <stdio.h>
/*Exercise 1-9. Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank.*/
int main()
{
  int c, blk, nblk;
  blk = 0;
  nblk = 0;
  while ((c = getchar()) != EOF){
    if (c == ' '){
      if (blk == 0){
        putchar(c);
        ++blk;
        nblk = 0;
      }
      else{
        ++blk;
        nblk = 0;
      }
    }
    else {
      putchar(c);
      ++nblk;
      blk = 0;
    }
  }
}
