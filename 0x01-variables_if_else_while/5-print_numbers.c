#include <stdio.h>
/**
 * main -Print single digits of base 10 including 0
 * Return: 0 (success)
 */
int main(void)
{
int x;

for (x = 0; x <= 9; x++)
{
printf("%d", x);
}
putchar('\n');
return (0);
}
