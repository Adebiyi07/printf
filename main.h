#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#define UNUSED(x) (void)(x)

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/**
 * struct format - converter for printf
 * @id: type char pointer of the specifier
 * @f: function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int char_printer(va_list val);
int str_printer(va_list val);
int prints_percentage(va_list types);
int int_printer(va_list args);
int _strlen(char *s);
int print_deci(va_list args);

int print_str_exclude(va_list val);
int print_str_rev(va_list args);

int *strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_bnr(va_list val);
int print_unsigned(va_list arg);
int print_octa(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_rot13(va_list args);

#endif
