#ifndef JSON_PARSER_H
#define JSON_PARSER_H

enum DataType
{
    NUMBER = 0,
    STRING,
    JSON_OBJECT,
    JSON_ARRAY
};

typedef struct {
    int number;
} NumberObject;

typedef struct {
    char* string;
} StringObject;

typedef struct {
    char* identifier;
    JSON object;
} Property;

typedef struct {
    Property* properties;
    int number_of_properties;
} JsonObject;

typedef struct {
    JSON* objects;
    int objects_count;
} JsonArray;

typedef struct {
    DataType type;
    void* object;
    // this has one of those values:
    // NumberObject, StringObject, JsonObject, JsonArray
} JSON;

JSON parse_json(const char* buffer);

#endif