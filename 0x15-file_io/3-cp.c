#include "main.h"

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments passed
 * @argv: pointer to pointer of arguements passed
 * Return:  number of leters coppied anf printed
 */

int main(int argc, char **argv)
{
	int arg1, arg2, i;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	arg1 = open(argv[1], O_RDONLY);
	if (arg1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	arg2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((i = read(arg1, buf, 1024)) > 0)
	{
		if (write(arg2, buf, i) != i || arg2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arg1);
		exit(98);
	}
	if (close(arg2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arg2);
		exit(100);
	}
	return (0);
}
