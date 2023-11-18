#include "main.h"

/**
* print_hex_extra - function that prints hexadecimal number.
* @num: the arguments.
* Return: counter.
*/

int print_hex_extra(unsigned long int num)
{
	long int j;
	long int *arr;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(long int));

	for (j = 0; j < counter; j++)
	{
		arr[j] = temp % 16;
		temp = temp / 16;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		if (arr[j] > 9)
		arr[j] = arr[j] + 39;
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (counter);
}
