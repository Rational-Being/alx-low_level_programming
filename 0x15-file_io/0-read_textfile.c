#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t txtr, txtw;
	char *temp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		free(temp);
		return(0);
	}

	txtr = read(fd, temp, letters);
	if (txtr < 0)
		return (0);

	txtw = write(STDOUT_FILENO, temp, txtr);
	if (txtw == -1 || txtr != txtw)
		return (0);

	free(temp);

	close(fd);
	return(txtw);
}
