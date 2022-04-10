#include <stdio.h>
#include <unistd.h>

/**
 * main - Mainf function carrying code
 * Return: 1
 */
int main(void)
{
	char quote1[] = "and that piece of art is useful\" ";
	char quote2[] = "- Dora Korpar, 2015-10-19\n";

	write(1, quote1, sizeof(quote1));
	write(1, quote2, sizeof(quote2));
	return (1);
}
