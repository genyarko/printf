#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
int result = 0;
va_list args;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
result += printf("%c", va_arg(args, int));
break;
case 's':
result += printf("%s", va_arg(args, char *));
break;
case 'd':
case 'i':
result += printf("%d", va_arg(args, int));
break;
case '%':
result += printf("%%");
break;
}
}
else
{
result += printf("%c", *format);
}
format++;
}
va_end(args);
return result;
}
