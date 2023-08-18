#include <stdio.h>
#include "main.h"

/**
 * main - Entry pint
 * Description: Prints numbers and words from 1 to 100,
 * Fizz for multiples of 3 and Buzz for multiples of 5
 * FizzBuzz for both 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", i);
        }

        if (i < 100)
        {
            printf(" ");
        }
    }

    printf("\n");

    return (0);
}
