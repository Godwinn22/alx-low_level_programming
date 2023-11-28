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
	ssize_t bytesWritten;

	if (filename == NULL || strlen(filename) < 3)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(-1);
	}

	bytesWritten = write(fd, text_content, strlen(text_content));
	if (bytesWritten == -1)
	{
		perror("Error writing to file");
		close(fd);
		exit(-1);
	}

	close(fd);
	printf("%s created successfully!\n", filename);
	return (0);
}
