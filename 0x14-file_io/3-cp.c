#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "holberton.h"

/**
 * copy_file - a program that copies the content of a file to another file.
 * @NAME_OF_THE_FILE: first argument passed.
 */
void copy_file(
{
	int fd, cnt;
	char *buffer;

	if (file_from == NULL)
	{
		dprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

/* open source file in read mode */
	file_from = open(filename, O_RDONLY);

	if (file_from == -1)
	{
		dprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		close(file_from);
		exit(98);
	}

	for (cnt = 0; text_content[cnt] != '\0' ; cnt++)
		;

/* open dest file with permission to write */

	file_to = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_to == -1)
	{
		dprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE\n");
		close(file_from);
		exit(98);
	}

/* copy from src to dest */

}
