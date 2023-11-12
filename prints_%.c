#include "main.h"

/**
 * prints_percentage - prints the char %
 * which has an ASCII value of 37
 * @types: list of arguments
 * Return: 1.
 */
int prints_percentage(va_lists types)
{
	UNUSED(types);
	return (write(1, "%%", 1));
}
