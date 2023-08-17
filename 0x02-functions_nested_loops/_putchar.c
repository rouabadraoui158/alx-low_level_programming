# include <unistd.h>

/*
 * puchar write the character c to stdout
 * Return :on success 1
 * on error -1 is returned , and errors are set apperciately
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
