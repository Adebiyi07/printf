#include "main.h"

/**
* _printf - function which outputs content like printf
* @format: the format specifier
* Return: the output
*/

int _printf(const char * const format, ...)
{
	match m[] = {
		{"%s", str_printer}, {"%c", char_printer},
		{"%%", prints_percentage},
		{"%i", int_printer}, {"%d", print_deci}, {"%r", print_str_rev},
		{"%R", print_rot13}, {"%b", print_bnr},
		{"%u", print_unsigned},
		{"%o", print_octa}, {"%x", print_hexa}, {"%X", print_HEXA},
		{"%S", print_str_exclude}, {"%p", print_pointer}
	};

	va_list args;
	int q = 0, k, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[q] != '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (m[k].id[0] == format[q] && m[k].id[1] == format[q + 1])
			{
				len += m[k].f(args);
				q = q + 2;
			}
			k--;
		}
		_putchar(format[q]);
		len++;
		q++;
	}
	va_end(args);
	return (len);
}
