#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "holberton.h"

/**
 * append_text_to_file - a function that appends a text at the end of a file
 * @filename: pointer to the file to be created.
 * @text_content: a null terminated string to write it to the file.
 * Return:  1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, cnt;

	if (filename == NULL)
		return (-1);

/* to write in a file you need to open it*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

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
