#include "main.h"

/**
 * append_text_to_file - A function that appends the text at the
 * end of the file
 * @filename: A pointer that refars to the file name
 * @text_content: The string that have the text content.
 *
 * Return: If the file name is null R 0,if the text_content is null
 * don't add thing to the file and R 1, if it fails or the file
 * isn't exest, if ther is no permtion R -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_in_f, l = 0;

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	if (filename == NULL || filename == 0)
		return (-1);
	/* a flage that write onley and a flage to append*/
	fd = open(filename, O_WRONLY | O_APPEND);
	w_in_f = write(fd, text_content, l);
	if (fd == -1 || w_in_f == -1)
		return (-1);
	close(fd);
	return (1);
}
