#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return:  actual number of letters it could read and print
 * or 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	int reader = 0;
	int output = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	reader = read(fd, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, reader);
	if (output == -1 || output != reader)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (output);
}
