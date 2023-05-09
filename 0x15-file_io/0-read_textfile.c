#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it to STDOUT.
 * @filename: The name of the file that is being read.
 * @letters: The number of letters that will be read
 * Return: wr- the number of letters read and printed
 *        0 when it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr, rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);
	return (wr);
}

