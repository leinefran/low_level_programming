#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "holberton.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @letters: the number of letters it should read and print
 * @filename: pointer to the file.
 * Return:  the actual number of letters it could read and print
 * or, 0 if filename is NULL or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
/* open */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

/*read */
	rd = read(fd, buf, letters);

	close(fd);

	if (rd == -1)
	{
		free(buf);
		return (0);
	}

/* write */
	wr = write(STDOUT_FILENO, buf, rd);

	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wr);
}
