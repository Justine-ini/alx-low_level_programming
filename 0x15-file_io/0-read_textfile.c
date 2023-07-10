#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFile, bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	openFile = open(filename, O_RDONLY);
	bytesRead = read(openFile, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (openFile == -1 || bytesRead == -1 || bytesWritten == -1 ||
	bytesWritten != bytesRead)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(openFile);

	return (bytesWritten);
}
