#include <stdlib.h>
#include <stdint.h>

#ifndef _BASE_VECTOR
#define _BASE_VECTOR

typedef struct
{
    size_t len;
    size_t size;
    size_t capacity;
    char *data;
} vector;

vector *vector_new(size_t object_size);

void *vector_get(vector *v, size_t index);

#endif
