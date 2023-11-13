#include "main.h"

/**
* print_pointer - function which prints hexadecimal number
* @val: the arguments
* Return: counter
*/

int print_pointer(va_list val)
{
	void *mt;
	char *lt = "(nil)";
	long int a;
	int n;
	int u;

	mt = va_arg(val, void*);
	if (mt == NULL)
	{
	for (u = 0; lt[u] != '\0'; u++)
	{
	_putchar(lt[u]);
	}
	return (u);
	}
	a = (unsigned long int)mt;
	_putchar('0');
	_putchar('a');
	n = print_hex_extra(a);
	return (n + 2);
}
