#include "main.h"

/**
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, content_written;
	/*Checking if file name exists*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*Opening the file*/
	fd = open(filename, O_RDWR | O_APPEND);

	/*write content int the file*/
	if (text_content != NULL)
	{
		content_written = write(fd, text_content, strlen(text_content));

		if (content_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
