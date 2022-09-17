#include <stdio.h>

/**
 * main - program entry point.
 * Description: program to perform a simple arithmetic operation.
 * Return: 0/Nothing is return.
 * */

int main(void)
{
  int two = 2, three = 3, six = 6;
  int result = (two + three) * six / three;

  printf("I am new to c language but i can write the following program: (%d+%d)x%d/%d = %d\n", two,three,six,three,result);
  printf("Thank you for your time.");
}