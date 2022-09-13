#include <unistd.h>

/**
 * _putchar- writes a character to standard output
 * @c: The character to print
 * Return: Always 1 (Sucess)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
