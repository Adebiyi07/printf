#include "main.h"

/**
 * print_str_rev - prints a string in reverse
 * @args: argument parameters
 * Return: reversed string
 */

int print_str_rev(va_list args)
{

	char *s = va_arg(args, char*);
	int n = 0;
	int m;

	if (s == NULL)
		s = "(null)";
	while (s[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m--)
		_putchar(s[m]);
	return (n);
}

