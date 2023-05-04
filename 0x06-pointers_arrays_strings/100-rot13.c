#include "main.h"
/**
 * char *rot13- encodes a string using rot13
 * @str: pointer to string params
 * Return: *s
 */
char *rot13(char *str)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
