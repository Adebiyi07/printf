#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#define UNUSED(x) (void)(x);

int _putchar.c
int _printf(const char *format, ...);
int char_printer(va_list val);
int str_printer(va_list val);
int prints_percentage(va_list types );

int _strlen(char *s);
int print_deci(va_list args);
int print_bnr(va_list val);
int print_unsigned(va_list arg);
int print_octa(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_rot13(va_list args);

#endif
