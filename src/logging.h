#ifndef LOGGING_H
#define LOGGING_H

#define debug_print_info(format, ...) \
        do { fprintf(stderr, "INFO:%s:%d:%s(): " format "\n", __FILE__, \
                                __LINE__, __func__, __VA_ARGS__); } while (0)

#define debug_print_warning(format, ...) \
        do { fprintf(stderr, "WARNING:%s:%d:%s(): " format "\n", __FILE__, \
                                __LINE__, __func__, __VA_ARGS__); } while (0)

#define debug_print_error(format, ...) \
        do { fprintf(stderr, "ERROR:%s:%d:%s(): " format "\n", __FILE__, \
                                __LINE__, __func__, __VA_ARGS__); } while (0)

#endif