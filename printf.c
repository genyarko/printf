#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
* _printf - function that produces output according to a format
* @format: character string
*
* Return: the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
va_list args;
int i, count = 0;
va_start(args, format);
if (!format || !*format)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%' && format[i + 1] == 'c')
{
printf("%c", va_arg(args, int));
count++;
i++;
}
else if (format[i] == '%' && format[i + 1] == 's')
{
printf("%s", va_arg(args, char *));
count += strlen(va_arg(args, char *));
i++;
}
else if (format[i] == '%' && format[i + 1] == '%')
{
printf("%%");
count++;
i++;
}
else
{
printf("%c", format[i]);
count++;
}
}
va_end(args);
return (count);
}
