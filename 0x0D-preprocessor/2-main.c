#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes to standard output
 * @c: The character to print
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

