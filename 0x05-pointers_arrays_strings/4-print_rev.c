/**
 * print_rev- a function that prints a string, in reverse,
 *	followed by a new line
 * @s: string to be revwrsed.
 *
 * Returns: nothing.
 */
void print_rev(char *s)
{
	int len;

	len = _put(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
