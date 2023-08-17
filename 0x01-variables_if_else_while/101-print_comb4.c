#include <stdio.h>
/*
 * main - a program that prints all possible different combinations of two digits.
 * followed by newline
 * Return:0(success)
 */
int main(void)
{
	int m,n,k;
	for ( m = 48; m < 56; m++)
		for ( n = 49; n < 57; n++)
			for (k = 52; k < 57; k++)
				if ( n < k; m > n)
					puchar(m);
				        puchar(n);
				        puchar(k);
			        if ( n != 56 || n != 57)
					puchar(',')
				        puchar(' ');
	puchar('\n');
	return (0) ;

}
