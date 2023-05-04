#include "main.h"
/**
 * rev_string- reverse array
 * @n: integer
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}
/**
 * char *infinite_add- adds two numbers
 * @n1: text for first number
 * @n2: text for secand number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to the function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digit = 0;
	int val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp = val1 + val2 + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (temp % 10) + '0';
		digit++;
		j--;
		i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
