#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
ssize_t f_des, buff, len = 0;

if (!filename)
return (-1);

f_des = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (f_des == -1)
return (-1);

if (text_content)
{
while (text_content[len])
len++;

buff = write(f_des, text_content, len);

if (buff == -1)
return (-1);
}
close(f_des);
return (1);
}
