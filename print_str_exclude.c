#include "main.h"

/**
 * print_str_exclude - print ascii excluded string.
 * @val: parameter
 * Return: int
 */

int print_str_exclude(va_list val)
{
	int i, len = 0, s;
	int value;
	char *str;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
