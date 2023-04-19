#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - check the code
 * @filename: name of file
 * @letters: letters is the number of letters it should read and print
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_fd, bytes_read, bytes_written;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	file_fd = open(filename, O_RDONLY);
	bytes_read = read(file_fd, buff, letters);
	if (file_fd < 0 || bytes_read < 0)
	{
		bytes_written = write(STDERR_FILENO, buff, bytes_read);
		free(buff);
		return (0);
	}
	else
	{
		bytes_written = write(STDOUT_FILENO, buff, bytes_read);
		close(file_fd);
	}
	return (bytes_written);
}
