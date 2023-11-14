<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%' && *(format + 1) != '\0') {
            format++;
            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf( va_arg(args, char *));
                    break;
                case '%':
                    count += putchar('%');
                    break;
                default:
                    count += putchar('%');  
                    count += putchar(*format);
            }
        } else {
            count += putchar(*format);
        }
        format++;
    }

    va_end(args);

    return count;
=======
#include "main.h"
/**
 * print_37 - prints the char %.
 * Return: 1.
 */
int print_37(void)
{
	_putchar(37);
	return (1);
>>>>>>> 322119a6074d5bbe60d468f5fe7d85985ee18d17
}
