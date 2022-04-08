#include <stdio.h>

/**
 * main - Prints the alphabet except e and q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
		{
		}
		else
			putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
