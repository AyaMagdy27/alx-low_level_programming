#include "main.h"
/**
 * _atoi- convert a string to an integer
 * @s: string to converted
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, x, y, len, z, dig;

	i = 0;
	x = 0;
	y = 0;
	len = 0;
	z = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && z == 0)
	{
		if (s[i] == '-')
			++x;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
		if (x % 2)
			dig = -dig;
		y = y * 10 + dig;
		z = 1;
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
		z = 0;
		}
		i++;
	}
	if (z == 0)
		return (0);
	return (y);
}
