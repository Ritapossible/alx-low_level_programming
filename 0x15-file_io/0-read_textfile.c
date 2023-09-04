/*
 * File: 0-read_textfile.c
 * Auth: Augustine Rita
 */

#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stad. output.
 * @filename: The file name to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t byrd, bywr;
	char *buffer;

	if (!filename)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	byrd = read(file_descriptor, buffer, letters);
	bywr = write(STDOUT_FILENO, buffer, byrd);

	close(file_descriptor);

	free(buffer);

	return (bywr);
}
