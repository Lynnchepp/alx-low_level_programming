#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative -printing numbers
 * @i : integer
 * Return: always 0 (success)
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("0 is zero\n");
}


