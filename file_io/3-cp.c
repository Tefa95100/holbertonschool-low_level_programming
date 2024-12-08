#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * close_file - close a file and check if success
 *@file_descriptor: the file descriptor
 */
void close_file(int file_descriptor)
{
	if (close(file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - Entry point
 *@argc: number of argument
 *@argv: array of argument
 *Return: return 0 if success
 */
int main(int argc, char *argv[])
{
	char *file_from = NULL, *file_to = NULL;
	int file_from_descriptor = 0, file_to_descriptor = 0;
	char buffer_copy[1024];
	ssize_t bytes_read = 0, bytes_write = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	file_from_descriptor = open(file_from, O_RDONLY);
	if (file_from_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_to_descriptor = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_descriptor == -1)
	{
		close(file_from_descriptor);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	bytes_read = read(file_from_descriptor, buffer_copy, sizeof(buffer_copy));
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(100);
	}
	bytes_write = write(file_to_descriptor, buffer_copy, bytes_read);
	if (bytes_write != bytes_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	close_file(file_from_descriptor);
	close_file(file_to_descriptor);
	return (0);
}
