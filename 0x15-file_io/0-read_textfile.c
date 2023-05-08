#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- print
 * @title: text read
 * @letter: letters number
 * Return: number of byte
 */
ssize_t read_textfile(const char *title, size_t letter)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(title, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letter);
	t = read(fd, buf, letter);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

