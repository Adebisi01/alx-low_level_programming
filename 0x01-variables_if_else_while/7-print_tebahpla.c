#include <stdio.h>
/**
 * main - prints alphabets reverse
 * Return: 0 by default
 */
int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
