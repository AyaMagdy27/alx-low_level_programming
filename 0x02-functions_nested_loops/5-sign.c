#include "main.h"
/**
 * print_sign - print + if the number greater than 0 , print 0 if is 0 ,print - if the number less than 0 .
 * Return : 1 is the greater than zero . 6 is zero . -1 is less than zero .
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
