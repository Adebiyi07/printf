#include "main.h"

/**
* print_rot13 - function which converts to rot13
* @args: the arguments to be printed
* Return: a counter
*/

int print_rot13(va_list args)
{
	int g, d, cntr = 0;
	int v = 0;
	char *c = va_arg(args, char*);
	char ym[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char fm[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (c == NULL)
	c = "(null)";
	for (g = 0; s[g]; g++)
	{
	v = 0;
	for (d = 0; ym[d] && !v; d++)
	{
	if (s[g] == ym[d])
	{
	_putchar(fm[d]);
	cntr++;
	v = 1;
	}
	}
	if (!v)
	{
	_putchar(c[g]);
	cntr++;
	}
	}
	return (cntr);
}
