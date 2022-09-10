#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Write a program that prints all possible
 * different combinations of three digits
 * numbers must be separated by ,. followed by a space
 * The three digits must be different
 * 012, 120, 102, 021,201,210 are considered the same   
 * combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 *
 */

int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{

					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	e++;
}
putchar('\n');
return (0);
}


