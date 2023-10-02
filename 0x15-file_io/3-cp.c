#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buff_file - a function that Allocates
 * 1024 bytes for a buffer.
 * @file: var that stored the file name
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff_file(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL || buff == 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - a function that closes an opened file
 * @fdescripton: a pram of the file description
 */
void close_file(int fdescripton)
{
	int close_f;

	close_f = close(fdescripton);

	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdescripton);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
		int from_file, to_file, read_in, write_in;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff_file(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	read_in = read(from_file, buff, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || read_in == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		write_in = write(to_file, buff, read_in);
		if (to_file == -1 || write_in == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		read_in = read(from_file, buff, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_in > 0);
	free(buff);
	close_file(from_file);
	close_file(to_file);
	return (0);
}

