/*
 * File: 3-cp.c
 * Auth: Augustine Rita
 */

#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if a file can be opened.
 * @file_from: The file_from.
 * @file_to: The file_to.
 * @argv: Arguments vector.
 * Return: Nothing to return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to the file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - The entry point of the program
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t ichars, bywr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2],O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	ichars = 1024;
	while (ichars == 1024)
	{
		ichars = read(file_from, buf, 1024);
		if (ichars == -1)
			error_file(-1, 0, argv);
		bywr = write(file_to, buf, ichars);
		if (bywr == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file-descriptor %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file-descriptor %d\n", file_from);
		exit(100);
	}
	return (0);
}
