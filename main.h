#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
int _printf(const char *format, ...);
int putchar();
int _putchar();
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);
#endif
