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
void delete(array_t *array, unsigned int index);
void free_array(array_t *array);
void set(array_t *array, unsigned int index, void *element);
void print_array(array_t *array, unsigned int type)

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

// Delete an element given an index
void delete(array_t *array, unsigned int index);

// Free array->data and array
void free_array(array_t *array);

// Replaces the element at the specified position in this list with the specified element.
void set(array_t *array, unsigned int index, void *element);

// Print all values in array
void print_array(array_t *array, unsigned int type)

// Returns the array size
size_t size(array_t *array);

```