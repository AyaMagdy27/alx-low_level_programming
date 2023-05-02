#include "main.h"
/**
 * puts_half- function that prints half of a string, followed by a new line.
 * if the number of characters is odd, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, len;

	len = 0;
	for (x = 0; str[x] != '\0'; x++)
		len++;
	y = (len / 2);
	if ((len % 2) == 1)
		y = ((len + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
