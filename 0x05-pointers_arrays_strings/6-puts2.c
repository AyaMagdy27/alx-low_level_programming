#include "main.h"
/**
 * puts2- prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int leng = 0;
	int i = 0;
	char *a = str;
	int x;

	while (*a !=  '\0')
	{
		a++;
		leng++;
	}
	i = leng - 1;
	for (x = 0; x <= i; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
