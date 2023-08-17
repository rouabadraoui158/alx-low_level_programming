# include "main.h"
# include <stdio.h>
/*
 * main -  write a  function that prints the alphabet, in lowercase
 * followed by newline
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
_putchar('\n');
}
