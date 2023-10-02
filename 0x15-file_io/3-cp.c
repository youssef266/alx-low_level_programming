#include "main.h"
/**
 * create_buff - a function that alocates buffer
 * @file: var for the name of the file
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
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
 * close_opened_file - a function that closed an open
 * file
 * @fd: the var to close.
 */
void close_opened_file(int fd)
{
	int closes;

	closes = close(fd);

	if (closes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entery point of function that copies
 * from file to another
 * @argc: var for number of arguments
 * @argv: an arry of pointers to collect arg
 *
 * Return: if success R 0.
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
	buff = create_buffer(argv[2]);
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
