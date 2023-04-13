#include "main.h"

/**
 * append_text_to_file: appends text to the endo f a file
 * @filename: name of file
 * @text_contnet: The NULL terminated string to add
 * Return: 1 on success, -1 on error
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdr, let_num = 0;

	if (filename == NULL)
	       return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	
	if (text_content == NULL)
	{
		close(fd);
			return (1);
	}
	
	while (*(text_content + let_num))
		let_num++;
	fdr = write(fd, text_content, let_num);
	
	if (fdr < 0)
		return (-1);
	
	close(fd);
	return (1);
}
