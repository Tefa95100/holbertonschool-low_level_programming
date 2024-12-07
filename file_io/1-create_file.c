#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

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
 * create_file - create a new file
 *@filename: name of the file
 *@text_content: text for file
 *Return: return 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	int check_write = 0;
	int lenght_str = 0;

	/*Check if filename is NULL*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*Calculate lenght of string*/
	lenght_str = str_len(text_content);
	/*open file and check if is fail 0600 give read and write permission user*/
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	/*write in the file, close and check if is fail*/
	check_write = write(file_descriptor, text_content, lenght_str);
	close(file_descriptor);
	if (check_write == -1)
	{
		return (-1);
	}
	return (1);
}
