#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and eror is set appropriate.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

