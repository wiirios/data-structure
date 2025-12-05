# Queue

Header file

``` C
#define MAX 6 //here you can define the size of queue

typedef struct queue queue_t;

queue_t *init();
void push(queue_t *queue, int value);
void pop(queue_t *queue);
void getAll(queue_t *queue);
void free_queue(queue_t *queue);
```

All the functions and ther description

```C
// Init the Queue
queue_t *init();

// Adds a value to the stack passed as a parameter in the function
void push(queue_t *queue, int value);

// Remove the first value
void pop(queue_t *queue);

// Print all values
void getAll(queue_t *queue);

// Free the Queue
void free_queue(queue_t *queue);
```