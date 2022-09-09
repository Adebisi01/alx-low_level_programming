#include <stdio.h>
/**
 * main - prints alphabets
 * Return: 0 by default
 */
int main(void)
{
	char i;
	char space = "\n";
	for (i = 'a'; i != 'z'; i++)
	{
		putchar(i);
	}
	putchar(space);
	return (0);
}
