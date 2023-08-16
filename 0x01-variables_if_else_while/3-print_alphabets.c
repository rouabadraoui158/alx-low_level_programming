#include <stdio.h>
/**
 * main - prints alphabet in lowercase and then in uppercase
 * followed by newline
 * Return: always 0 (success)
 */
int main(void)
{
for( ch='a' ; ch<='z' ;ch ++)

 putchar(ch);

for( ch='A'; ch<='Z' ;ch ++)

 putchar(ch);
putchar('\n');
return (0);
}
