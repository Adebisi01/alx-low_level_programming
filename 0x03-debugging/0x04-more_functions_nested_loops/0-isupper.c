#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, isupper(c));
	c = 'a';
	prinf("%c: %d\n", c, isupper(c));
	return (0);
}
