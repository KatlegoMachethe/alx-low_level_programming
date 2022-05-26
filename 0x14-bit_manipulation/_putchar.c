#include <unistd.h>

/**
 * _putchar - puts character
 * @c: character to print
 *
 * Return: On success 1
 * ON error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
