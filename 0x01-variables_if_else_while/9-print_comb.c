#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c < 9)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
