#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to  stdout POSIX file created.
 * @filename: The  pointer to the name of the file created
 * @letters: The number of letters the function should read and print out.
 *
 * Return: If the function fails or filename is NULL return- 0.
 *         i/o  - the actual number of bytes the function can read and print out.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}

