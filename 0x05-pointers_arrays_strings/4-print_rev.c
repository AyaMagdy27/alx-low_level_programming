#include "main.h"
/**
 * print_rev- prints a string, in reverse, followed by a new line
 *@s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int leng = 0;
	int rev;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;

	for (rev = leng; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
