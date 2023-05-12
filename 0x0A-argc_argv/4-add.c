#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * checker- check - string there are digit
 * @s: array
 * Return: Always 0 (Success)
 */
int checker(char *s)
{
	unsigned int i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main- prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j = 1;
	int trans;
	int sum = 0;

	while (j < argc)
	{
		if (checker(argv[j]))
		{
			trans = atoi(argv[j]);
			sum += trans;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
