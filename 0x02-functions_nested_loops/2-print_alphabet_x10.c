# include "main.h"
/*
 * main -  a function that prints 10 times the alphabet, in lowercase, 
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
	for ( i = 0; i < 11; i++)
	{
		for ( ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			_putchar('\n');
                }
	}
	
}
