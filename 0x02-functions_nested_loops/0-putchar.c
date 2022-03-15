#include "main.h"

/**
 * main - Entry block
 * Description: prints holberton on new line
 * Return: 0
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c[9] = "_putchar";

	char text[9] = "_putchar";
	int i = 0;

	while (i < 9)
	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
		i++;
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
