#include "main.h"

/**
 * main - Entry point
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: Always 0 (success)
 */
int main(int argc, int **argv)
{
	int file0, file1, output0, output1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	buffer = malloc(BUF_SIZE);
	if (buffer == NULL)
		return (0);
	file1 = open(argv[1], O_RDONLY);
	error_98(file1, buffer, argv[1]);
	file0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | 0664);
	error_99(file0, buffer, argv[2]);

	do {
		output0 = read(file1, buffer, BUF_SIZE);
		if (output0 == 0)
			break;
		error_98(output0, buffer, argv[1]);
		output1 = write(file0, buffer, output0);
		error_99(output1, buffer, argv[2]);
	} while (output1 >= BUF_SIZE);
	output0 = close(file0);
	error_100(output0, buffer);
	output0 = close(file1);
	error_100(output0, buffer);
	free(buffer);
	return (0);
}

/**
 * error_98 - returns error 98
 * @file0: the file
 * @buffer: the buffer
 * @argv: argument vector
*/
void error_98(int file0, char *buffer, char *argv)
{
	if (file0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - returns error 99
 * @file0: the file
 * @buffer: the buffer
 * @argv: argument vector
*/
void error_99(int file0, char *buffer, char *argv)
{
	if (file0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - returns error 100
 * @file0: the file
 * @buffer: the buffer
 * @argv: argument vector
*/
void error_100(int file0, char *buffer, char *argv)
{
	if (file0 < 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %i\n", file0);
		free(buffer);
		exit(100);
	}
}
