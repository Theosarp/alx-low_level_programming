#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: The name of the file to be created.
 * @text_content: Content to be written to the file.
 *
 * Return: If successful 1.
 *         If not -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, nchar = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (nchar = 0; text_content[nchar];)
			nchar++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, nchar);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}

