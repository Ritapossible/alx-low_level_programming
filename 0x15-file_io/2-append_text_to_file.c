/*
 * File: 2-append_text_to_file.c
 * Auth: Augustine Rita
 */

#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	int iletters;
	int bywr;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed == -1)
		return (-1);

	if (text_content)
	{
		for (iletters = 0; text_content[iletters]; iletters++)
			;

		bywr = write(filed, text_content, iletters);

		if (bywr == -1)
			return (-1);
	}

	close(filed);

	return (1);
}
