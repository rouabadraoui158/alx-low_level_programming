#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
	int i, count;
	char revers;

	for (count = len - 1; s[count] >= 0;  count--)
	{
		revers = _putchar(s[count]);
	}
	_putchar('\n');

}
