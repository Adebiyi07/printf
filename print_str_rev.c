#include "main.h"

/**
* print_str_rev - function which prints a string in reverse
* @args: the argument parameters
* Return: a reversed string
*/

int print_str_rev(va_list args)
{

	char *f = va_arg(args, char*);
	int b = 0;
	int a;

	if (f == NULL)
		f = "(null)";
	while (f[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(f[a]);
	return (b);
}

