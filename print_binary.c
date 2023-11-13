#include "main.h"

/**
* print_bnr - function that prints binary number
* @val: the parameter
* Return: an integer
*/

int print_bnr(va_list val)
{
	int cont = 0;
	unsigned int num = va_arg(val, unsigned int);
	int flag = 0;
	unsigned int e;
	int q, f = 1, w;

	for (q = 0; q < 32; q++)
	{
	e = ((f << (31 - q)) & num);
	if (e >> (31 - q))
	flag = 1;
	if (flag)
	{
	w = e >> (31 - q);
	_putchar(w + 48);
	cont++;
	}
	}
	if (cont == 0)
	{
	cont++;
	_putchar('0');
	}
	return (cont);
}
