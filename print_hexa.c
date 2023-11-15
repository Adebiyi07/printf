#include "main.h"

/**
* print_hexa - funtion that prints hexgecimal number.
* @val: the arguments.
* Return: counter.
*/

int print_hexa(va_list val)
{
	int counter = 0;
	int *arr;
	int b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int asb = num;

	while (num / 16 != 0)
	{
	num /= 16;
	counter++;
	}
	counter++;
	arr = malloc(cntr * sizeof(int));

	for (b = 0; b < counter; b++)
	{
	arr[b] = asb % 16;
	asb /= 16;
	}
	for (b = counter - 1; b >= 0; b--)
	{
	if (arr[b] > 9)
	arr[b] = arr[b] + 39;
	_putchar(arr[b] + '0');
	}
	free(arr);
	return (counter);
}
