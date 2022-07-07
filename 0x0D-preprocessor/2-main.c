#include <stdio.h>

/**
 * main - prints source file name
 *
 * Return: Always 0.
 */
int main(void)
{

	const char *c = __FILE__;

	fprintf(stdout, "%s\n", c);
	return (0);
}

