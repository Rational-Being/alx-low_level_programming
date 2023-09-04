#include "main.h"

/**
 * append_text_to_file - funtion that appends text ot file
 * @filename:name of file
 * @text_content: the appended text conten
 * Return:
 * 1 if it exits, -1 if it doesnt or fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, n;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	for (len = 0; text_content[len]; len++)
		;

	n = write(fd, text_content, len);
	close(fd);

	if (n == -1)
		return (-1);

	return (1);
}
