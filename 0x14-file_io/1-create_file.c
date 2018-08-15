#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "holberton.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to the file to be created.
 * @text_content: a null terminated string to write it to the file.
 * Return:  1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, cnt;

	if (filename == NULL)
		return (-1);

/* open with permission rw------- */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (cnt = 0; text_content[cnt] != '\0' ; cnt++)
		;

/* write */
	wr = write(fd, text_content, cnt);

	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
