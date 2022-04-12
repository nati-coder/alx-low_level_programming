#include "main.h"

/**
 * _isalpha - Shows 1 if the input is alphabetic character. Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for alphabetic character. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
