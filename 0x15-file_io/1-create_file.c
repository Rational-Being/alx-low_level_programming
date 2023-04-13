#include "main.h"

/**
 * create_file: function crates a file
 * @filename: name of file
 * @text_content: content to be written in the file
 *
 * Return: 1 on success, -1 on error
*/

int create_file(const char *filename, char *text_content)
{
	int fd, fdr, let_num = 0;
	
	if (filename == 0)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + let_num))
		let_num++;

	fdr = write(fd, text_content, let_num);
	close(fd);
	if (fdr < 0)
		return (-1);
	return (1);
}
