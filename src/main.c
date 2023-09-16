#include <stdio.h>
#include <string.h>

#include "file_handler/file_handler.h"
#include "logging.h"

int main()
{
    FILE* file;
    long file_size;
    char* buffer;

    if (0 == open_file("/home/jom/Proj/json_parser/sample.json", &file))
    {
        buffer = get_file_as_buffer(file);
        
    }
}