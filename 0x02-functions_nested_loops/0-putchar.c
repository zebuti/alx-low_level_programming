#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
