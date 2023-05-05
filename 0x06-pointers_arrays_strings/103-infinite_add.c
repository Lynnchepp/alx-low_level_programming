#include <stdio.h>
/*
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;
	/* Get length of n1 and n2*/
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	/* Check if result can be stored in r*/
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);
	/* Start adding digits from right to left*/
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry > 0){
		sum = carry;
		if (i >= 0){
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0){
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		sum %= 10;
		r[len1 + len2 - 1 - (i + j)] = sum + '0;
	}
	r[len1 + len2] = '\0';
	/* Reverse the result*/
	for (i = 0, j = len1 + len2 - 1; i < j; i++, j--){
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return r;
}
