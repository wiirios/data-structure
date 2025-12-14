#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

typedef struct queue
{
    int data[MAX];
    int length;
} queue_t;

queue_t *init() {
    queue_t *queue;
    queue = (queue_t*) malloc(sizeof(queue_t));

    queue->length = 0;

    return queue;
}

void push(queue_t *queue, int value) {
    queue->data[queue->length] = value;
    queue->length++;
}

void pop(queue_t *queue) {
    int j = 1;

    for (int i = 0; i < queue->length; i++) {
        queue->data[i] = queue->data[j];
        j++; 
    }
    queue->length--;
}

void getAll(queue_t *queue) {
    for (int i = 0; i < queue->length; i++) {
        printf("%d\n", queue->data[i]);
    }
}

void free_queue(queue_t *queue) {
    free(queue->data);
    free(queue);
}
