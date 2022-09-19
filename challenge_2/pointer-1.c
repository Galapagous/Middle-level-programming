#include <stdio.h>
#include <stdlib.h>

/**
 * minMax : function that returns the both min and max value of an array using pointer method.
 * @i -> counter for looping through element in the array.
 * main : program entry point.
 * Return: 0/nothing on main.
 * */


void minMax(int *min, int *max, int num[], int len)
{
    *min, *max = num[0];
    int i;
    for (i=1; i <= len; i++)
    {
        if (*max < num[i])
            *max = num[i];
        if (*min > num[i])
            *min = num[i];
    }
}

int main()
{
    int birth[] = {0, 1, 5, 24, 2, 19, 43, 12, 3, 34, 20, 46, 42, 4};
    int leng = sizeof(birth) / sizeof(birth[0]);
    int min, max;
    minMax(&min, &max, birth, leng);
    printf("The length of array is: %d\n", leng);
    printf("The min value is: %d\n", min);
    printf("The max value is: %d\n", max);
    return 0;
}
