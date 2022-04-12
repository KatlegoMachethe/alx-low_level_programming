#include <unistd.h>

/**
 * main - Program initialization
 * Description: Program prints _putchar and new line
 * Return: 0 for success
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
