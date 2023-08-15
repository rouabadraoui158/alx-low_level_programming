#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char *last_digit = "Last digit of";
if (n > 5)
{
  printf("%s %d is %d and is greater than 5\n", last_digit, n);
}
else if (n == 0)
{
  printf("%s %d is %d and is 0\n", last_digit, n);
}
else
{
  printf("%s %d is %d and is less than 6 and not 0\n", last_digit, n);
}

return (0);
}
