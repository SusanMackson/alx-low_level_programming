#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this function allocates 1024 bytes for a buffer.
 * @file: the pointer of the name of the file buffer is storing chars for.
 *
 * Return: returns a pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *susan;

	susan = malloc(sizeof(char) * 1024);

	if (susan == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (susan);
}

/**
 * close_file - this function closes file descriptors.
 * @fd: the pointer to the file descriptor to be closed.
 */

void close_file(int fd)
{
	int mac;

	mac = close(fd);

	if (mac == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - this function copies the contents of a file to another file.
 * @argc: the pointer of the number of arguments supplied to the program.
 * @argv: the pointer of an array of pointers to the arguments.
 *
 * Return: prints 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97,
 * If file_from does not exist or cannot be read - exit code 98,
 * If file_to cannot be created or written to - exit code 99,
 * If file_to or file_from cannot be closed - exit code 100 .
 */

int main(int argc, char *argv[])
{
	int from, to, rad, wax;
	char *susan;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	susan = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rad = read(from, susan, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rad == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(susan);
			exit(98);
		}

		wax = write(to, susan, rad);
		if (to == -1 || wax == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(susan);
			exit(99);
		}

		rad = read(from, susan, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rad > 0);

	free(susan);
	close_file(from);
	close_file(to);

	return (0);
}
