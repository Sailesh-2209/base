#include <vector.h>

vector *vector_new(size_t object_size)
{
    size_t capacity = 8;
    char *data = malloc(capacity * object_size);
    // if there isn't enough memory, then malloc will return NULL
    // TODO: handle out of memory issue
    if (!data)
    {
    }
    vector v = {.len = 0, .size = 0, .capacity = 8, .data = data};
    return &v;
};

void *vector_get(vector *v, size_t index)
{
    if (index >= v->size)
        return NULL;
    return v->data + ()
}
