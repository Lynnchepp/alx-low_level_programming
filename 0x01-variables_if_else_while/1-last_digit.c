#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Print a last digit of a random number
 * Return: always 0 (success)
*/
int main(void)
{
int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("last digit of %d is %d and is greater that 5\n", n, ld);
}
else if (ld < 6)
{
printf("lastdigit of %d is %d and is less that 6\n", n, ld);
}
else
{
printf("last digit of %d is %d and is 0\n", n, ld);
}
return (0);
}
