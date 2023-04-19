#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bytes_written;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
