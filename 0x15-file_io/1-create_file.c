#include "main.h"

                        /*What to do*/
/*1) filename is the file to be created and text_content is a NULL terminated string
to write to the file*/
/*2) File cannot be created file cannot be written, write fails.
if fail return -1 if pass return 1*/
/*3) created file must have read and write permissions if the file exisits don't change
the permissions*/
/*4) if file exists truncate it*/
/*5) if text content is NULL create an empty file*/

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, content_written;
	/*Checking if filename exists*/
	if (filename == NULL)
	{
		return (-1);
    }

	/*create a file with read and write perminsions and if the file exists cancle the
	creation and dont change permissions of the file*/
	fd = open(filename, O_RDWR | O_CREAT | O_EXCL | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_written = write(fd, text_content, strlen(text_content));

		if (content_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/*close the file*/
	close(fd);
	/*success*/
	return (1);
}
