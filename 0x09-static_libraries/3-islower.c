#include "main.h"
int _putchar(char c);
/**
 * int_islower - show 1 for the input is a lowercace character
 * show 0 in any other case.
 * @c : the character in ACII code
 * Return: 1 for  lowercase character. 0 for otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
