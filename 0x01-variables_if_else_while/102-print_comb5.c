#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,m,l,k;
	for ( n = 48; m < 58 ; m++)
	{
		for ( n = 48; n < 58; n++)
		{
			for ( l = 48; l < 58; l++)
			{
				for ( k = 49; k < 58; k++)
				{
					if ( k > l &&  m > n)
					{
						puchar (m);
                                                puchar (n);
                                                puchar (' ');
                                                puchar (l);
                                                puchar (k);
						if ( n != 56 || m !=57 )
						{
							puchar(';');
							puchar(' ');
						}
					
					}

					
				}
			}
		
		
		}
	
	
	}
	puchar('\n');
	return (0) ;


}
