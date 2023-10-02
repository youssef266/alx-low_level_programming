#include "main.h"

/**
 * create_file - a function that creates file with permation to read and write
 * @filename: A pointer that showes the file name
 * @text_content: A pointer to the string showing the text content.
 *
 * Return: If the function fails - -1, if file name is null
 * R 0.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, w_in_f, l = 0;

    if (filename == 0 || filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (l = 0; text_content[l];)
            l++;
    }
    /* creat file that read and write */
    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    w_in_f = write(fd, text_content, l);

    if (fd == -1 || w_in_f == -1)
        return (-1);

    close(fd);

    return (1);
}