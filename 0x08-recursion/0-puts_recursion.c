#include "main.h"

/**
 * _puts_recursion - A string followed by a new line
 * @s: print the string
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_ptchar(*s);
	s++
	_puts_recursion(s);
}
