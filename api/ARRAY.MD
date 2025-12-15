# Array

Header file

``` C
typedef struct array array_t;

array_t *create_array(size_t capacity);

int add(array_t *array, void *element);
int contains(array_t *array, void *element);

void *get_at(array_t *array, unsigned int index);
void *get_first(array_t *array);
void *get_last(array_t *array);

void clear(array_t *array);
void free_array(array_t *array);

size_t size(array_t *array);
```

All the functions and ther description

``` C
// Create an array
array_t *create_array(size_t capacity);

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

// Clear the array
void clear(array_t *array);

// Free array->data and array
void free_array(array_t *array);

// Returns the array size
size_t size(array_t *array);

```