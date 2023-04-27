#include "main.h"
/**
 * isupper- checks for uppercase character
 * @c:char to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9'){
		return (1);
	}
	else
	{
		return (0);
	}
}
