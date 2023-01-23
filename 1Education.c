#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    int count = 0;

    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '%')
            {
                putchar('%');
                count++;
                i += 2;
            }
