/*
 * File: 1-create_file.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int filed;
	int iletters;
	int byrwr;

	if (!filename)
		return (-1);

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filed == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (iletters = 0; text_content[iletters]; iletters++)
		;

	byrwr = write(filed, text_content, iletters);

	if (byrwr == -1)
		return (-1);

	close(filed);

	return (1);
}
