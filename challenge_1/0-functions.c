#include <stdio.h>

/** main : program entry point.
 * musa : return a character 'c'.
 * Description: main program call function musa for its return value.
 * Return: returns a character "c".
 * */

char musa();
 char main ()
 {
  char c = musa();
  printf("The character is %c", c);
 }

 char musa ()
 {
   return 'c';
 }