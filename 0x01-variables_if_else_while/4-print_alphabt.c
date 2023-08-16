#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
for (ch='a' ;ch='z' ;ch++)
	if (ch !='e' && ch!='q')
		puchar(ch);
puchar('\n');
return (0);
}
