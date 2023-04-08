#include "main.h"
/**
 * create_file - creates file
 * filename: is the name of the file to create
 * @text_content: a pointer to a string to write the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
