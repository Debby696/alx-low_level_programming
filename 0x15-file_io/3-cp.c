#include <stdlib.h>
#include <stdio.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create buffer - this allocates 1024 bytes for a buffer
 * @file: file buffer is storing char for
 * Return: pointer to the new buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n" file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file -this closes file descriptors
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
	int cl = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of afile to another
 * @argc: no of arguments present in the program
 * @argv: array of pointer to the arguments
 * Return: 0 if successful
 * Description: if no of argument is not the correct one, exit with code 97
 *	if file_from does not exist, or can't be read exit with 98
 *	if write to file_to fails or can't be created exit with code 99
 *	unable to close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (fd_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
