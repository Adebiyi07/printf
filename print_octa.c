#include "main.h"

/**
* print_octa - function which prints an octal number.
* @val: the arguments.
* Return: a counter.
*/

int print_octa(va_list val)
{
	int z;
	int *arr;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int asb = num;

	while (num / 8 != 0)
	{
	num /= 8;
	counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (z = 0; z < counter; z++)
	{
	arr[z] = asb % 8;
	asb /= 8;
	}
	for (z = counter - 1; z >= 0; z--)
	{
	_putchar(arr[z] + '0');
	}
	free(arr);
	return (counter);
}
