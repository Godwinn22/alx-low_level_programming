#ifndef _MAIN_H_
#define _MAIN_H_

#define BUF_SIZE 1024
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 * void error_98(int file0, char *buffer, char *argv);
 * void error_99(int file0, char *buffer, char *argv);
 * void error_100(int file0, char *buffer);
*/
void copyFile(const char *fromFileName, const char *toFileName);
void closeFilesAndExit(int sourceFile, int destFile);


#endif
