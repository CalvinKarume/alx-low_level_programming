#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print it to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * 
 * Return: If function fails or filename NULL - 0,
 * w - actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
}
