#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int d;

	int l;

	for (l = 1; l < 11; l++)
	{
		for (d = 97; d < 123; d++)
		{
			_putchar(d);
		}
	}
}
