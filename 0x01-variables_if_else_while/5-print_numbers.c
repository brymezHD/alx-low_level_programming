#include <stdio.h>

/**
 * main - Prints the digit 0-9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[12] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
