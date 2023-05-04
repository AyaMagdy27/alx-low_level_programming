#include "main.h"
/**
 * strhar *strap_string- strapitalizes all words of a string
 * @str: string to strapitalized
 * Return: A pointer to the strhanged string
 */
char *cap_string(char *str)
{
	int i = 1;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
