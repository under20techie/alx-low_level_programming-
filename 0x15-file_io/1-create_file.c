#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd,  bytes_written, len_text = 0;
	len_text = my_strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		bytes_written = write(fd, text_content, len_text);
		if (bytes_written != len_text)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
