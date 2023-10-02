#include "main.h"

/**
* Creates a file and writes text to it.
* @filename: the name of the file to create.
* @text_content: the text to write to the file.
* Returns: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
    int fd;
    size_t len = 0;
    ssize_t w;

    
    if (filename == NULL)
        return (-1);

   
    fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
    
    if (fd == -1)
        return (-1);

    
    if (text_content != NULL)
    {
        
        while (text_content[len])
            len++;
        
        w = write(fd, text_content, len);
        
        if (w == -1 || w != (ssize_t)len)
        {
            close(fd);
            return (-1);
        }
    }

    
    close(fd);

    
    return (1);
}
