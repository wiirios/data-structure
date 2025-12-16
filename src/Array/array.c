#include "array.h"

int fatal(char *msg) {
    printf("Error: %s", msg);
    exit(EXIT_FAILURE);
}

array_t *create_array(size_t capacity) {
    if (capacity == 0) fatal("capacity cannot be == 0");

    array_t *array;
    array = (array_t*) malloc(sizeof(array_t));

    if (array == NULL) {
        free(array);
        fatal("allocating memory");
    }

    array->size = 0;
    array->capacity = capacity;
    array->data = malloc(capacity * sizeof(void*));

    return array;
}

int add(array_t *array, void *element) {
    if (array->capacity == array->size) fatal("array is full");

    if (array == NULL) fatal("array is null");

    array->data[array->size] = (void*) element;
    array->size++;
    
    return 0;
}

void *get_at(array_t *array, unsigned int index) {
    if (index < 0 || index >= array->size) fatal("out of bouds");

    if (array == NULL || array->size == 0) fatal("array is NULL");

    void *ptr;
    ptr = array->data[index];

    return ptr;
}

void *get_first(array_t *array) {
    if (array == NULL || array->size == 0) fatal("array is NULL");

    void *ptr;
    ptr = array->data[0];

    return ptr;
}

int contains(array_t *array, void *element) {
    if (array == NULL || array->size == 0) fatal("array is NULL");

    for (int i = 0; i < array->size; i++) {
        if (array->data[i] == element) return 1;
    }

    return 0;
}

void *get_last(array_t *array) {
    if (array == NULL || array->size == 0) fatal("array is NULL");
    
    void *ptr;
    ptr = array->data[array->size - 1];

    return ptr;
}

size_t size(array_t *array) {
    return array->size;
}

void clear(array_t *array) {
    if (array == NULL || array->size == 0) fatal("array is NULL ");
    
    int i = 0;

    while (i < array->size) {
        array->data[i] = NULL;
        i++;
    }

    array->size = 0;
}

void delete(array_t *array, unsigned int index) {
    if (array == NULL || array->size == 0) fatal("array is null");

    if (index >= array->size) fatal("out of bounds");

    array->data[index] = NULL;

    memmove(&array->data[index], &array->data[index + 1], (array->size - index - 1) * sizeof(void*));

    array->size--;
    array->data[array->size] = NULL;
    
}

void free_array(array_t *array) {
    free(array->data);
    free(array);
}

void set(array_t *array, unsigned int index, void *element) {
    if (array == NULL || array->size == 0) fatal("array is null");

    if (index >= array->size) fatal("out of bounds");

    array->data[index] = NULL;
    array->data[index] = element;
}
