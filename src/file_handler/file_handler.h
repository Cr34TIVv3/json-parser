#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#define CHUNK_SIZE 64

int open_file(const char* path, FILE** file);

long get_file_size(FILE *file);

void* get_file_as_buffer(FILE *file);

#endif