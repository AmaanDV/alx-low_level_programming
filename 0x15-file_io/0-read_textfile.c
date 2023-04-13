#include "main.h"
#include <stdlib.h>
/**
 * read_textfile: Puts and checks the  text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- real  number of bytes to be read and printed out 
 *        0 when function fails or filename is NULL or returns no value.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
