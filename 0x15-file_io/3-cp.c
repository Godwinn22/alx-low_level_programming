#include "main.h"

#define BUF_SIZE 1024

/**
 * copyFile - Copies content from one file to another.
 * @fromFileName: Source file name.
 * @toFileName: Destination file name.
 */
void copyFile(const char *fromFileName, const char *toFileName)
{
	int sourceFile, destFile;
	char buffer[BUF_SIZE];
	ssize_t bytesRead, bytesWritten;

	sourceFile = open(fromFileName, O_RDONLY);
	if (sourceFile == -1)
	{
		perror("Error opening source file");
		exit(98);
	}

	destFile = open(toFileName, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (destFile == -1)
	{
		perror("Error opening or creating destination file");
		close(sourceFile);
		exit(99);
	}

	do {
		bytesRead = read(sourceFile, buffer, BUF_SIZE);
		if (bytesRead == -1)
		{
			perror("Error reading from source file");
			closeFilesAndExit(sourceFile, destFile);
		}

		bytesWritten = write(destFile, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			perror("Error writing to destination file");
			closeFilesAndExit(sourceFile, destFile);
		}
	} while (bytesRead == BUF_SIZE);

	closeFilesAndExit(sourceFile, destFile);
}

/**
 * closeFilesAndExit - Closes files and exits the program.
 * @sourceFile: Source file descriptor.
 * @destFile: Destination file descriptor.
 */
void closeFilesAndExit(int sourceFile, int destFile)
{
	if (close(destFile) == -1)
	{
		perror("Error closing destination file");
	}

	if (close(sourceFile) == -1)
	{
		perror("Error closing source file");
	}

	exit(100);
}

/**
 * main - Entry point
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copyFile(argv[1], argv[2]);

	return (0);
}
