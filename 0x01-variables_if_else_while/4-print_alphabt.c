#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 || c != 113)
			putchar(c);
	}
	return (0);
}
