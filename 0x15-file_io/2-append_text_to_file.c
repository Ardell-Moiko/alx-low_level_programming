#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content:  the NULL terminated string to add at the end of the file
 * Return: 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
ssize_t f_des, ln, wrt = 0;

if (!filename)
return (-1);

f_des = open(filename, O_WRONLY | O_APPEND);
if (f_des < 0)
return (-1);

if (text_content != NULL)
{
for (ln = 0; text_content[ln] != '\0'; ln++)
;

wrt = write(f_des, text_content, ln);

if (wrt < 0)
return (-1);
}
close(f_des);
return (1);
}
