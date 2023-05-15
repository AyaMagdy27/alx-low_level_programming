#include "main.h"
#include <stdlib.h>
/**
 * counter- function to count the number of words in a string
 * @c: string to evaluate
 * Return: number of words
 */
int counter(char *c)
{
	int i = 0, j, k = 0;

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}
/**
 * **strtow- splits a string into words
 * @str: string to split
 * Return: a pointer to an array of strings(Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, word, ch = 0, beg, end;

	while (*(str + len))
		len++;
	word = counter(str);
	if (word == 0)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (ch)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (ch + 1));
				if (tmp == NULL)
					return (NULL);
				while (beg < end)
					*tmp++ = str[beg++];
				*tmp = '\0';
				matrix[j] = tmp - ch;
				j++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			beg = i;
	}
	matrix[j] = NULL;
	return (matrix);
}
