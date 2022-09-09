#include <stdio.h>
/**
 * main - prints alphabets
 * Return: 0 by default
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
