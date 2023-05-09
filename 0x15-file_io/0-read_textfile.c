#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 * or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ptr;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	ptr = malloc(sizeof(char) * (letters + 1));
	if (ptr == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bytes_read = read(fd, ptr, letters);
	bytes_written = write(STDOUT_FILENO, ptr, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		return (0);
	}
	free(ptr);
	close(fd);
	return (bytes_read);
}




