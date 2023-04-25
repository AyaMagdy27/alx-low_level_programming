#iclude "main.h"
/**
 * _isalpha - 1 if c is a letter, lowercase or uppercase . 0 for otherwise
 * @c : the character in the ASCII code
 * Return: 1 if c is a  letters , 0 for otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
