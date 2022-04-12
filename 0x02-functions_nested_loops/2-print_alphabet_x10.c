#include "main.h"

/**
 * main - Prints alphabets in lowercase 10 times.
 *
 * Return: Always 0 (Success)
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
