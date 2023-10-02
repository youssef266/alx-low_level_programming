#include "main.h"

/**
 * read_textfile- a function that reads a text file
 * and then prints it to the posix standerd output.
 * @filename: var contan the file name that coten the text
 * @letters: the ny=umber of letters writen
 * Return: if file name is null R 0, if the write fails or
 *         does not write the expacted amount of bytes R 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t fd, e, f;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	e = read(fd, bufer, letters);
	f = write(STDOUT_FILENO, buf, e);

	free(bufer);
	close(fd);
	return (f);
}
