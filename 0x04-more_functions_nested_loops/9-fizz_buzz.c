#include <stdio.h>

/**
 * main - main entry point 
 * 
 * Description: Prints the Fizz-Buzz sequence from 1 to 100
 * Fizz for multiples of 3 and buzz for multiples of 5,
 * And FizzBuzz for multiples of both
 * Return: Always 0 (Success)
 */

int main(void)
{
        int g;

    for (g = 1; g <= 100; g++)
    {
            if (g % 15 == 0)
             printf("FizzBuzz");
        else if (g % 3 == 0)
            printf("Fizz");
        else if (g % 5 == 0)
            printf("Buzz");
        else
            printf("%d", g);

        if (g < 100)
            printf(" ");
    }

    printf("\n");

    return (0);
}
