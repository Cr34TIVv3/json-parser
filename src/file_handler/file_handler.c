#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../logging.h"

#include "file_handler.h"

int open_file(const char* path, FILE** file)
{
    int status = 0;

    *file = fopen(path, "r");

    if (NULL == *file)
    {
        debug_print_error("%s%s", "Cannot open file: ", path);
        status = 1;
    }

    return status;
}

long get_file_size(FILE *file)
{
    long current_position = 0;
    long size = 0;

    if (NULL == file)
    {
        debug_print_warning("%s", "Null pointer exception");
    }
    else
    {
        current_position = ftell(file);

        fseek(file, 0, SEEK_END);
        size = ftell(file);

        // reset cursor to current position
        fseek(file, current_position, SEEK_SET);
    }

    return size;
}

void* get_file_as_buffer(FILE *file)
{
    char chunk[CHUNK_SIZE] = {0};
    long file_size = 0;
    char* buffer = NULL;
    int offset = 0;

    file_size = get_file_size(file);
    buffer = (char*)malloc(file_size * sizeof(char));

    while (NULL != fgets(chunk, sizeof(chunk), file))
    {
        snprintf(buffer + offset, CHUNK_SIZE, "%s", chunk);
        offset += strlen(chunk);
    }

    return (void*)buffer;
}