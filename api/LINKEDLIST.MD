# Linked List

Header file

``` C
typedef struct node node_t;
typedef struct list list_t;

list_t *init();
list_t *copy(list_t *list);

static node_t *create_node(int value);

void add(list_t *list, int value);
void delete(list_t *list, int index);
void print_all(list_t *list);
void array_list(list_t *list, int array[], size_t size);
void free_linkedlist(list_t *list);
void delete_first(list_t *list);
void delete_last(list_t *list);
void add_first(list_t *list, int value);
void add_last(list_t *list, int value);
void clear(list_t *list);

int search(list_t *list, int value);
int get(list_t *list, int index);
int get_first(list_t *list);
int get_last(list_t *list);

size_t size(list_t *list);
```

All the functions and ther description

``` C
// Create a linked list 
list_t *init();

// Copy and return the linked list that you copied.
list_t *copy(list_t *list);

// Create a node
static node_t *create_node(int value);

// Add a value in linked list
void add(list_t *list, int value);

// Deletes a value at the passed index.
void delete(list_t *list, int index);

// Prints all values in linked list
void print_all(list_t *list);

// Converts the linked list to a array
void array_list(list_t *list, int array[], size_t size);

// Free linked list
void free_linkedlist(list_t *list);

// Delete first node
void delete_first(list_t *list);

// Delete last node
void delete_last(list_t *list);

// Add at first node
void add_first(list_t *list, int value);

// Add at last node
void add_last(list_t *list, int value);

// Clear the linked list
void clear(list_t *list);

// Search for a value
int search(list_t *list, int value);

// Get a value at the passed index
int get(list_t *list, int index);

// Get first value
int get_first(list_t *list);

// Get last value
int get_last(list_t *list);

// Get the linked list size
size_t size(list_t *list);
```
