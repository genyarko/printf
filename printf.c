#include <stdarg.h>
#include <limits.h>
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
            else if (format[i + 1] == 'c')
            {
                putchar(va_arg(args, int));
                count++;
                i += 2;
            }
            else if (format[i + 1] == 's')
            {
                char *s = va_arg(args, char *);
                int j = 0;

                while (s[j] != '\0')
                {
                    putchar(s[j]);
                    j++;
                    count++;
                }
                i += 2;
            }
        }
        else
        {
            putchar(format[i]);
            count++;
            i++;
        }
    }
    va_end(args);

    return (count);
}
