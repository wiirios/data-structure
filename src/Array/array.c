#include "array.h"

int fatal(char *msg) {
    printf("Error: %s", msg);
    exit(EXIT_FAILURE);
}

array_t *create_array(size_t capacity, const char *type) {
    if (strcmp(type, "INT_TYP") != 0 && strcmp(type, "CHR_TYP") != 0) fatal("Invalid type");
    
    if (capacity == 0) fatal("capacity cannot be == 0");

    array_t *array;
    array = (array_t*) malloc(sizeof(array_t));

    if (array == NULL) {
        free(array);
        fatal("allocating memory");
    }

    array->size = 0;
    array->capacity = capacity;
    memcpy(array->type, type, strlen(type) + 1);
    array->data = malloc(capacity * (strcmp(type, "INT_TYP") == 0 ? sizeof(int*) : sizeof(char*)));

    return array;
}

int add(array_t *array, void *element) {
    if (array->capacity == array->size) fatal("array is full");

    if (array == NULL) fatal("array is null");

    if (strcmp(array->type, "INT_TYP") == 0 && strcmp(check(element), "Int") == 0) {
        ((int**) array->data)[array->size] = (int*) element;
    }
    else {
        ((char**) array->data)[array->size] = (char*) element;
    }

    array->size++;
    
    return 0;
}

void *get_at(array_t *array, unsigned int index) {
    if (index < 0 || index >= array->size) fatal("out of bouds");

    if (array == NULL || array->size == 0) fatal("array is NULL");

    void *ptr;

    if (strcmp(array->type, "INT_TYP") == 0) {
        ptr = *&((int**)array->data)[index];
    }
    else {
        ptr = *&((char**)array->data)[index];
    }

    return ptr;
}

void *get_first(array_t *array) {
    if (array == NULL || array->size == 0) fatal("array is NULL");

    void *ptr;

    if (strcmp(array->type, "INT_TYP") == 0) {
        ptr = *&((int**)array->data)[0];
    }
    else {
        ptr = *&((char**)array->data)[0];
    }

    return ptr;
}

int contains(array_t *array, void *element) {
    if (array == NULL || array->size == 0) fatal("array is NULL");

    if (strcmp(array->type, "INT_TYP") == 0) {
        for (int i = 0; i < array->size; i++) {
            if (*((int**) array->data)[i] == *(int*) element) return 1;
        }
    } else {
        for (int i = 0; i < array->size; i++) {
            if (*((char**) array->data)[i] == *(char*) element) return 1;
        }    
    }

    return 0;
}

void *get_last(array_t *array) {
    if (array == NULL || array->size == 0) fatal("array is NULL");
    
    void *ptr;

    if (strcmp(array->type, "INT_TYP") == 0) {
        // I have no idea if there s a better way to do this.
        ptr = *&((int**)array->data)[array->size - 1];
    }
    else {
        ptr = *&((char**)array->data)[array->size - 1];
    }

    return ptr;
}
