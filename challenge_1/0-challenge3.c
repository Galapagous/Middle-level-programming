#include <stdio.h>

/**
 * main : program entry point.
 * Description: program to calculate simple interest.
 * Return- 0/nothing.
 * */

int main(void)
{
  int P,R,T,SI;

  printf("Enter the principal, rate and time respectively");
  scanf("%d, %d, %d", P, R, T);
  SI = ((P * R * T) / 100);
  printf("%d", SI);

  return 0;
}