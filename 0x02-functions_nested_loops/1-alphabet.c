# include "main.h"
/*
 * main - function print alphabet in lowercase
 * followed by newline
 * Return:0(success)
 */
void print_alphabet(void)
{
	char ch;
	for ( ch='a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	
}
