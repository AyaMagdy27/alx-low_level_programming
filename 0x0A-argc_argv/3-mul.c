#include <stdio.h>
#include "main.h"
/**
 * _atoi- converts a string to integer
 * @s: string to be converted
 * Return: the int converted from string
 */
int _atoi(char *s)
{
	int i, j, k, len, x, digit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	x = 0;
	(void)digit;
	while (s[len] != '\0')
		len++;
	while (i < len && x == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}
	if (x == 0)
		return (0);
	return (k);
}
/**
 * main- prints the name of the program
 * @argc: number of arguments
 * @argv: arry of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, sum1, sum2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	sum1 = _atoi(argv[1]);
	sum2 = _atoi(argv[2]);
	result = sum1 * sum2;
	printf("%d\n", result);
	return (0);
}
