#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - write a file
 * @filename: the file to write.
 * @text_content: the content to write
 * Return: 1 in success -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _write, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;

		_write = write(fd, text_content, i);
		if (_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
