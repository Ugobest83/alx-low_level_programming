#include <stdio.h>

/**
 * main - Print all base 16 numbers in lowercases.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char a = '0';
	char l = 'a';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
