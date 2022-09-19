#include <stdio.h>
#include <limits.h>

/**
 * main : program entry point.
 * Description : print the maximum and minimum value for signed integers and max value of unsigned integers.
 * Return: 0/nothing.
 * */

int main(void)
{
  int var1 = INT_MAX;
  int var2 = INT_MIN;
  unsigned var01 = UINT_MAX;

  printf("max value for signed interger is: %d while min value is: %d\n", var1, var2);
  printf("max value for unsigned interger is: %u\n", var01);

  return 0;
}