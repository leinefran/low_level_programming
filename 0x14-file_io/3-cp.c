#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "holberton.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: pointer to the arguments stored in a multidimentional array.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, rd, wr, cl;
	char buff[1024];

/* check if the number of arguments is correct */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to")
			;
		exit(97);
	}

/* open source file in read mode */
	fd1 = open(argv[1], O_RDONLY);

	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file",
			argv[1]);
		exit(98);
	}

/* open dest file with permission to write. Set file to rw-rw-r-- */
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to",
			argv[2]);
		exit(99);
	}

/* use loop to iterate through the string and copy from src to dest */
	do {
		rd = read(fd1, buff, 1024);
		if (rd < 0)
		{
			dprintf(STDERR_FILENO, "%s %s\n",
				"Error: Can't read from file", argv[1]);
			exit(98);
		}
		wr = write(fd2, buff, rd);
		if (wr < 0)
		{
			dprintf(STDERR_FILENO, "%s %s\n",
				"Error: Can't write to", argv[2]);
			exit(99);
		}
	} while (rd);

	cl = close(fd1);
	if (cl < 0)
	{
		dprintf(STDERR_FILENO, "%s %d\n",
			"Error: Can't close fd", fd1);
		exit(100);
	}

	cl = close(fd2);
	if (cl < 0)
	{
		dprintf(STDERR_FILENO, "%s %d\n",
			"Error: Can't close fd", fd2);
		exit(100);
	}
	return (0);
}
