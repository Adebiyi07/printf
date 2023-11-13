#include "main.h"

/**
* print_HEXA - function which prints hexgecimal number.
* @val: the arguments.
* Return: counter.
*/

int print_HEXA(va_list val)
{
	int *arr;
	int g;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int asb = num;
	int cntr = 0;

	while (num / 16 != 0)
	{
	num /= 16;
	cntr++;
	}
	cntr++;
	arr = malloc(cntr * sizeof(int));

	for (g = 0; g < cntr; g++)
	{
	arr[g] = asb % 16;
	asb /= 16;
	}
	for (g = counter - 1; g >= 0; g--)
	{
	if (arr[g] > 9)
	arr[g] = arr[g] + 7;
	_putchar(arr[g] + '0');
	}
	free(arr);
	return (cntr);
}
