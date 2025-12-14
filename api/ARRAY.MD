# Array

Header file

``` C
typedef struct array array_t;

array_t *create_array(size_t capacity, const char *type);

int fatal(char *msg);
int add(array_t *array, void *element);
int contains(array_t *array, void *element);

void *get_at(array_t *array, unsigned int index);
void *get_first(array_t *array);
void *get_last(array_t *array);
```

All the functions and ther description

``` C
// Create an array
array_t *create_array(size_t capacity, const char *type);

// Add a element
int add(array_t *array, void *element);

// Checks if the element exists in the array
int contains(array_t *array, void *element);

// Retrieves an element given an index.
void *get_at(array_t *array, unsigned int index);

// Get the first element
void *get_first(array_t *array);

// Get the last element
void *get_last(array_t *array);
```