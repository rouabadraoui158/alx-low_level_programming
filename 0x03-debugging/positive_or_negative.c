#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - checks signs of i
 * @i : integer to check
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	return (0);
}
