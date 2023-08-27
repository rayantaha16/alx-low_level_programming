#include "main.h"
/**
 * main - Program prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	void print_alphabet(void)
	{
		for (d = 97; d < 122; d++)
		{
			_putchar(d);
		}
		_putchar(10);
	}
	return (0);
}
