#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Read a text file an print in the standard output
 *@filename: Path for access to file
 *@letters: The number of letters it should read and print
 *Return: return the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int number_read = 0;
	int number_write = 0;
	int file_descriptor = 0;
	char *buffer = NULL;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);	/*Open file*/
	if (file_descriptor == -1)	/*Check if fail*/
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char)); /*Allocate memory for buffer*/
	if (buffer == NULL)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	/*Read file, check if fail and stock number of letters read*/
	number_read = read(file_descriptor, buffer, letters);
	if (number_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	/*Write the bufffer and stock number of letter write*/
	number_write = write(1, buffer, letters);
	close(file_descriptor);	/*Close the file*/
	free(buffer);	/*free the buffer*/
	if (number_read != number_write)	/*Check if no fail for write*/
	{
		return (0);
	}
	return (number_read);	/*Return the number of letter*/
}
