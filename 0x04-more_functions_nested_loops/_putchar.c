#include "main.h"
#include <unistd.h>  // Include the necessary header for the write() function

// Definition of the custom _putchar function
int _putchar(char c) 
{
    return write(1, &c, 1); // Write the character 'c' to the file descriptor 1 (stdout)
}

