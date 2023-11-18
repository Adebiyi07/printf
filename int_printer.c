#include "main.h"

/**
* int_printer - function that prints an integer
* @args: the argument parameter
* Return: integers
*/

int int_printer(va_list args)
{
	int d = 1;
	int g = va_arg(args, int);
	int num, final = g % 10, index, exp = 1;

	g = g / 10;
	num = g;
	if (final < 0)
	{
		_putchar('-');
		num = -num;
		g = -g;
		final = -final;
		d++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = g;
		while (exp > 0)
		{
			index = num / exp;
			_putchar(index + '0');
			num = num - (index * exp);
			exp = exp / 10;
			d++;
		}
	}
	_putchar(final + '0');
	return (d);
}
