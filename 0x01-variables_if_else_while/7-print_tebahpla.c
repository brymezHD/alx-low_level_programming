#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev[30] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 30; i++)
	{
		putchar(rev[i]);
	}
	putchar('\n');
	return (0);
}
