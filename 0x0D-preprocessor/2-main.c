#include <stdio.h>

/**
 * main - prints source file name
 *
 * Return: Always 0.
 */
int main(void)
{

	const char *c = __FILE__;

	while (*c)
	{

		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}

