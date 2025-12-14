#include "linkedlist.h"

typedef struct node
{
    int value;
    node_t *next;
} node_t;

typedef struct list
{
    node_t *head;
    size_t size;
} list_t;

list_t *init() {
    list_t *list;
    list = (list_t*) malloc(sizeof(list_t));

    if (list == NULL) exit(EXIT_FAILURE);

    list->head = NULL;
    list->size = 0;
    return list; 
}
 
static node_t *create_node(int value) {
    node_t *new_node;
    new_node = malloc(sizeof(node_t));

    if (new_node == NULL) exit(EXIT_FAILURE); 

    new_node->value = value;
    new_node->next = NULL;

    return new_node;
}

void add(list_t *list, int value) {
    node_t *current;
    if (list->head == NULL) {
        list->head = create_node(value);
    } else {
        current = list->head;
        while(current->next != NULL) {
            current = current->next;
        }

        current->next = create_node(value);
    }

    list->size++;
}

void delete(list_t *list, int index) {
    if (list->head == NULL) exit(EXIT_FAILURE);

    node_t *current = list->head;
    node_t *previous = NULL;
    
    if (index == 0) {
        list->head = current->next;
        list->size--;
        free(current);
        return;
    }

    for (int i = 0 ; i < index; i++) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    list->size--;

}

void print_all(list_t *list) {
    node_t *current = list->head;

    while(current->next != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
    printf("%d\n", current->value);
}

void array_list(list_t *list, int array[], size_t size) {
    node_t *current = list->head;

    for (int i = 0; i < size; i++) {
        array[i] = current->value;
        current = current->next;
    }
}

void free_linkedlist(list_t *list) {
    if (list == NULL) exit(EXIT_FAILURE);

    node_t *current = list->head;
    node_t *temp;

    while (current != NULL) {
        temp = current->next;
        free(current);
        current = temp;
    }

    free(list);

}

int search(list_t *list, int value) {
    node_t *current = list->head;
    int count = 0;

    while (current != NULL) {
        if (current->value == value) return 1;
        current = current->next;
    }

    return 0;
}

size_t size(list_t *list) {
    return list->size;
}

int get(list_t *list, int index) {
    if (index > list->size) exit(EXIT_FAILURE);

    node_t *current = list->head;

    for (int i = 0; i < index; i++) current = current->next;

    return current->value;
}

int get_first(list_t *list) {
    if (list == NULL || list->size == 0) exit(EXIT_FAILURE);

    return get(list, 0);
}

int get_last(list_t *list) {
    if (list == NULL || list->size == 0) exit(EXIT_FAILURE);

    return get(list, list->size - 1);
}

list_t *copy(list_t *list) {
    list_t *newList;
    newList = init();

    for (int i = 0; i < list->size; i++) add(newList, get(list, i));

    return newList;
}

void delete_first(list_t *list) {
    if (list == NULL || list->size == 0) exit(EXIT_FAILURE);

    delete(list, 0);
}

void delete_last(list_t *list) {
    if (list == NULL || list->size == 0) exit(EXIT_FAILURE);
    
    delete(list, list->size - 1);
}

void add_first(list_t *list, int value) {
    if (list == NULL) exit(EXIT_FAILURE);
    
    node_t *oldHead = list->head;
    node_t *newHead = create_node(value);

    list->head = newHead;
    list->head->next = oldHead;

    list->size++;
}

void add_last(list_t *list, int value) {
    if (list == NULL) exit(EXIT_FAILURE);

    node_t *newLastValue = create_node(value);
    node_t *lastNode = list->head;

    for (int i = 0; i < list->size; i++) lastNode = lastNode->next;

    lastNode->next = newLastValue;
    list->size++;
}

void clear(list_t *list) {
    node_t *current = list->head->next;
    node_t *temp;

    while (current != NULL) {
        temp = current->next;
        free(current);
        current = temp;
    }
    
    list->head = NULL;
    list->size = 0;
}
