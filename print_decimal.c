#include "main.h"

/**
 * print_deci - prints decimal int
 * @args: argument parameter
 * Return: returns int
 */

int print_deci(va_list args)
{
	int n = va_arg(args, int);
	int endigit  = n % 10, num, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (endigit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		endigit = -endigit;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(endigit + '0');

	return (i);
}
