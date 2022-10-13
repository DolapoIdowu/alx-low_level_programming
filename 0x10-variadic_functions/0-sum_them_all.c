#include "variadic_function.h"

/**
 * sum_them_all- sum all or arguments.
 * @n: the number of argument to be added.
 * @...: ellipise.
 * Return: sum, If n == 0
 *	0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;
	int i, u_arg, sum = 0;

	va_start(args, n);
	while (i < n)
	{
		u_arg = va_arg(args, int);
		sum += u_arg;
		i++;
	}
	return (sum);

	va_end(args);
}
