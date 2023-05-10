#include "main.h"
int checker(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome- chack if the string is palindrome
 * @s: string to reverse
 * Return: 1 if it is palindrome, 0 if it's not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion- return the length of a string
 * @s: string to calculate the length of
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * checker- ckecks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if it's not
 */
int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}
