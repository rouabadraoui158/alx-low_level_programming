#include "main.h"
#include <stdio.h>

/**
 * int _isdigit - check for a digit (0 through 9)
 * @c: digit to check
 *
 * Return: 0 if c is a digit ,0 otherwise.
 */
int _isdigit(int c)
{
	return (!(c <= 'Z' && c >= 'A' || c <= 'z' && c >= 'a'));
}
