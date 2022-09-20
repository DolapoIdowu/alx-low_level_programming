/**
 * print_rev- a function that prints a string, in reverse,
 *	followed by a new line
 * @s: string to be revwrsed.
 *
 * Returns: nothing.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	int new_len;

	new_len = len - 1;

	while (new_len >= 0)
	{
		_putchar(s[new_len]);
		new_len--;
	}
	_putchar('\n');
}
