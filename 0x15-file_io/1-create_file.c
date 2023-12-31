#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int output = 1, count = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename,  O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[count])
			count++;
		output = write(fd, text_content, count);
	}
	if (output == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
