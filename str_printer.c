#include "main.h"

/**
* str_printer - function which prints a string.
* @val: the argument parameter
* Return: a string
*/

int str_printer(va_list val)
{
	char *v;
	int j, str;

	v = va_arg(val, char *);
	if (v == NULL)
	{
		v = "(null)";
		str = _strlen(v);
		for (j = 0; j < str; j++)
		_putchar(v[j]);
		return (str);
	}
	else
	{
		str = _strlen(v);
		for (j = 0; j < str; j++)
		_putchar(v[j]);
		return (str);
	}
}
