#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * str_len - calculate lenght of string
 *@string: the strinf for search lenght
 *Return: return lenght
 */
int str_len(char *string)
{
	int lenght = 0;

	while (string[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
/**
 * append_text_to_file - append a text in the end of a file
 *@filename: path of file
 *@text_content: text to append
 *Return: return 1 on success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	int check_write = 0;

	/*Check filename*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*open filename and check if success*/
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	/*Check if text content is NULL*/
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	/*Write and close file before check and return*/
	check_write = write(file_descriptor, text_content, str_len(text_content));
	close(file_descriptor);
	if (check_write == -1)
	{
		return (-1);
	}
	return (1);
}
