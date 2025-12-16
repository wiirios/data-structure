#ifndef ARRAY_H
#define ARRAY_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct array
{
    size_t size;
    size_t capacity;
    void **data;
} array_t;

array_t *create_array(size_t capacity);

int fatal(char *msg);
int add(array_t *array, void *element);
int contains(array_t *array, void *element);

void *get_at(array_t *array, unsigned int index);
void *get_first(array_t *array);
void *get_last(array_t *array);

void clear(array_t *array);
void delete(array_t *array, unsigned int index);
void free_array(array_t *array);
void set(array_t *array, unsigned int index, void *element);

size_t size(array_t *array);

#endif