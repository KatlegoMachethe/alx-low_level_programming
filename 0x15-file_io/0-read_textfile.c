#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: file to read
 * @letters: number of letters in the file
 *
 * Return: ssize_t argument
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *size;
	ssize_t	file, reading, writing;

	size = malloc(sizeof(char) * letters);
	if (size == NULL || filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	reading = read(file, size, letters);
	if (reading == -1)
		return (0);

	writing = write(STDOUT_FILENO, size, reading);
	if (writing == -1)
		return (0);

	close(file);
	free(size);
	return (writing);
}
