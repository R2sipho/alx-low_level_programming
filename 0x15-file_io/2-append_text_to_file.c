#include "main.h"

/** 
* Appends text at the end of a file.
* @filename: the name of the file.
* @text_content: the text to append to the file.
* Returns: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    size_t len = 0;
    ssize_t w;

    
    if (filename == NULL)
        return (-1);

    
    fd = open(filename, O_WRONLY | O_APPEND);
    
    if (fd == -1)
        return (-1);

    
    if (text_content != NULL)
    {
        
        while (text_content[len])
            len++;
       
        w = write(fd, text_content, len);
        
        if (w == -1 || w != (ssize_t)len)
            return (-1);
    }

   
    close(fd);

    
    return (1);
}
