#include "main.h"

/**
 * char_printer - prints a character.
 * @val: argument parameter
 * Return: returns character
 */
int char_printer(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
