#include "main.h"

/** 
 * puts - prints a string with newline
 * @str: the string to print
 * Return: void
*/
int _puts (char *str)
{
	char *a = str;

	while (*str)
		_putchar (*str++);
	return (str - a);
}
/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int putchar (int c)
{
	static int i;
	static char buf[OUTPUT BUF SIZE];

	if (c == BUF FLUSH I| i >= OUTPUT BUF SIZE)
	{
		write (l, buf, i);
		1 = 0;
	}
	if (c != BUF FLUSH)
		buf[i++] = c;
	return (1);
}
