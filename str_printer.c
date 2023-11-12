#include "main.h"

/**
 * str_printer - function to print a string.
 * @val: argument parameter
 * Return: returns string
 */

int str_printer(va_list val)
{
	char *s;
	int i, str;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		str = _strlen(s);
		for (i = 0; i < str; i++)
			_putchar(s[i]);
		return (str);
	}
	else
	{
		str = _strlen(s);
		for (i = 0; i < str; i++)
			_putchar(s[i]);
		return (str);
	}
}

