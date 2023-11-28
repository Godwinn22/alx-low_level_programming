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
	int output = 1;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	if (text_content)
	{
		output = write(fd, text_content, strlen(text_content));
		if (output == -1)
		{
			perror("Error writing to file");
			close(fd);
			return (-1);
		}
	}

	close(fd);
	printf("%s created successfully!\n", filename);
	return (1);
}
