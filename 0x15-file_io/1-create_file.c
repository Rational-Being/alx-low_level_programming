#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, len, txtw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	for(len = 0; text_content[len] != '\0'; len++)
		;

	txtw = write(fd, text_content, len);
	if (txtw == -1)
		return (-1);

	close(fd);
	return (1);
}
