#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 59; a++)
		for (b = 48; b < 59; b++)
			if (a != b && b < a)
			{
				putchar(a);
				putchar(b);
				putchar(44);
				putchar(32);
			}
	putchar(10);
	return (0);
}
