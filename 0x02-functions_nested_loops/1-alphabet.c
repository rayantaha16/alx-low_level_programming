#include "main.h"
/**
 * main - Program prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
	void print_alphabet(void)
	{
		int d;

		for (d = 97; d < 123; d++)
		{
			_putchar(d);
		}
		_putchar(10);
	}
