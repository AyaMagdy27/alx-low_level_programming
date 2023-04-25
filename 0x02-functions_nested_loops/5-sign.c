#include "main.h"
/**
 * print_sign - print + if the number greater than 0 ,
 * print 0 if is 0 ,print - if the number less than 0 .
 * @n: the int to check
 * Return: 1 and prints + if n is the greater than zero,
 * 0 and print 0 if n is zero,
 *  -1 and print -if n is less than zero .
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
