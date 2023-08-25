#include "main.h"

/**
 *puts2 - prints evrey other character
 *@str : character to print
 *followed by new line 
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i,lenght ;
	i = -1;
	lenght = _strlen(str) - 1;
	while (lenght > 0)
	{
		_putchar(str[i + 1]);

		i--;
	}
	_putchar('\n');
}
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
