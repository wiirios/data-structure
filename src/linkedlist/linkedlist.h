#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER

#include <stdio.h>
#include <stdlib.h>

#define MAX 4

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

#endif