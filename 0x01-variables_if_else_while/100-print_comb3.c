#include <stdio.h>
/**
 * main -program that prints all possible different combinations of three digits.
 * followzd by newline
 * Return:0 (succeess)
 */
int main(void)
{
    int  n,m ;
    for(n = 48; n <= 56 ; n++)
    {
	    for(m = 49; m <= 58 ; m++)
	    {
		     if( m < n )
                   {
                           puchar(',');
                           puchar(' ');

                   }
		   if(n != 56 || m !=57)
		   {
			   puchar(',');
			   puchar(' ');	   
		   
		   }
	    
	    
	    }
    
    
    }
puchar('\n');
return (0);
}
