#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
		putchar(c);
	for (c = 97; c < 103; c++)
		putchar(c);
	putchar(10);
	return (0);
}
