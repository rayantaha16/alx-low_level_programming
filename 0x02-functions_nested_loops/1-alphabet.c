#include "main.h"
/**
 * main - Program prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int a;

	int n = 10;

	for (a = 97; a < 122; a++)
	{
		_putchar(a);
		_putchar(n);
	}
	return (0);
}
