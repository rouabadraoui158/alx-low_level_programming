# include "main.h"

/*
 *_isupper - Checks for uppercase character
 *@c :character to check
 *Return: 1 if c is uppercase , 0 if not
 */
int _isupper(int c)
{
	if ('A' <= c <= 'Z')
	{
		return (1);
	}
	return (0);
}
