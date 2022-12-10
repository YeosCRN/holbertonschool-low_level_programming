#include "main.h"

/**
 * create_file - code
 * @filename: pointer
 * @text_content: pointer
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}
	else
		length = strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
