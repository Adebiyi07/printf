#include "main.h"

/**
 * _printf - outputs content like printf
 * @format: format specifier
 * Return: output
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
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				length += m[j].f(args);
				i = i + 2;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
