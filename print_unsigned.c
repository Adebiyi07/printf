include "main.h"

/**
* print_unsigned - function which prints integer
* @args: the argument to print
* Return: an integer
*/

int print_unsigned(va_list args)
{
	int v = 1;
	int final = j % 10, index, num, asb = 1;
	unsigned int j = va_arg(args, unsigned int);

	j = j / 10;
	num = n;

	if (final < 0)
	{
	_putchar('-');
	num = -num;
	j = -j;
	final = -final;
	v++;
	}
	if (num > 0)
	{
	while (num / 10 != 0)
	{
	asb = asb * 10;
	num = num / 10;
	}
	num = j;
	while (asb > 0)
	{
	index = num / asb;
	_putchar(index + '0');
	num = num - (index * asb);
	asb = asb / 10;
	v++;
	}
	}
	_putchar(final + '0');

	return (v);
}
