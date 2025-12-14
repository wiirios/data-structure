#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "binarytree.h"

tree_t *init() {
    tree_t *tree;
    tree = (tree_t*) malloc(sizeof(tree_t));

    if (tree == NULL) exit(EXIT_FAILURE);
    
    tree->root = NULL;
    return tree;
}

void insert(tree_t *tree, int value) {
    node_t *node;
    node = (node_t*) malloc(sizeof(node_t));

    if (node == NULL) exit(EXIT_FAILURE);
    
    node->value = value;
    node->left = NULL;
    node->right = NULL;    

    if (isEmpty(tree) == 1) tree->root = node;
    else {
        node_t *current = tree->root;
        node_t *previous;

        while (1) {
            previous = current;
            if (value <= current->value) {
                current = current->left;
                if (current == NULL) {
                    previous->left = node;
                    break;
                }
            } else {
                current = current->right;
                if (current == NULL) {
                    previous->right = node;
                    break;
                }
            }
        }
    }
}

void free_nodes(node_t *node) {
    if (node != NULL) {
        free_nodes(node->left);
        free_nodes(node->right);
        free(node);
    }

}

void free_tree(tree_t* tree) {free(tree);}

void print_tree(node_t *node) {
    if (node != NULL) {
        printf("%d\n", node->value);
        print_tree(node->left);
        print_tree(node->right);   
    }
    
}

int search(tree_t *tree, int value) {
    if (isEmpty(tree) == 1) return -1;

    node_t *current = tree->root;

    while (current != NULL && current->value != value) {
        if (value <= current->value) current = current->left;
        else current = current->right;
    }

    return current->value;
}

int isEmpty(tree_t *tree) {
    if (tree->root == NULL) return 1;
    
    return 0;
}
