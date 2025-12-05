#ifndef BINARYTREE_HEADER
#define BINARYTREE_HEADER

typedef struct node {
    int value;
    struct node *left;
    struct node *right;
} node_t;

typedef struct tree {
    node_t *root;
} tree_t;

tree_t *init();

void insert(tree_t *tree, int value);
void free_nodes(node_t* node);
void free_tree(tree_t* tree);

void print_tree(node_t *node);
int search(tree_t *tree, int value);
int isEmpty(tree_t *tree);

#endif