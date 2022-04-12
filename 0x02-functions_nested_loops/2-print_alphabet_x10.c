#include "main.h"

/**
 * main - Prints alphabets in lowercase 10 times.
 *
 * Return: Always 0 (Success)
 * print_alphabet_x10 - Print alphabet, in lowercases 10 x, end with new line
 */
void print_alphabet_x10(void)
{
	int i = 0, j = 0;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alph[i]);
		}
		_putchar('\n');
	}
}
