#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: name to print
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
