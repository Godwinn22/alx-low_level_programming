#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytesWritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bytesWritten = write(fd, text_content, strlen(text_content));
	if (text_content != NULL)
	{
		if (bytesWritten == -1 || bytesWritten != (int)strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
