#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to be added.
 *
 * Return: If successful 1.
 *         If it fails or if the file does not exist -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, nchar = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (nchar = 0; text_content[nchar];)
			nchar++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, nchar);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}

