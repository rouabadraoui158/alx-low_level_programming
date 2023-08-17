#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 < 100; num1++)
    {
        for (num2 = num1 + 1; num2 < 100; num2++)
        {
            putchar((num1 / 10) + '0'); // Print tens digit of num1
            putchar((num1 % 10) + '0'); // Print ones digit of num1
            putchar(' ');
            putchar((num2 / 10) + '0'); // Print tens digit of num2
            putchar((num2 % 10) + '0'); // Print ones digit of num2

            // If num1 and num2 are not the last combinations, print comma and space
            if (num1 != 98 || num2 != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
} 
