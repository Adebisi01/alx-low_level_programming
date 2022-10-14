#include "variadic_functions.h"
/**
 * print_numbers - prints out each number
 * @seperator: seprates numbers
 * @n: number of integers
 * @...: integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(list, n);
	printf("%d",va_arg(list, int));
	for (i = 0; i < n; i++)
	{
		printf("%s%d", separator, va_arg(list, int));
	}
	printf("\n");
}
