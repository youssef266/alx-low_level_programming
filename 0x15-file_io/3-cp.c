#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * exitWithError - is a function that dedect the error
 * @code: the code.
 * @message: is the message to be printed
 * @arg1: is the agumet given
 * Return: void.
*/
void exitWithError(int code, const char *message, const char *arg1)
{
	dprintf(STDERR_FILENO, message, arg1);
	exit(code);
}
/**
 * main - the entry point function
 * @argc: is the argument given
 * @argv: a string of the arg
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		exitWithError(97, "Usage: %s file_from file_to\n", argv[0]);
	}
	if ((fd_from = open(file_from, O_RDONLY)) == -1)
	{
		exitWithError(98, "Error: Can't read from file %s\n", file_from);
	}
	if ((fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP)) == -1)
	{
		exitWithError(99, "Error: Can't write to file %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			exitWithError(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (close(fd_from) == -1)
	{
		exitWithError(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		exitWithError(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}

