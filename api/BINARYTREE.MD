# Binary Tree

Header file

``` C
typedef struct node node_t;

typedef struct tree tree_t;

tree_t *init();

void insert(tree_t *tree, int value);
void free_nodes(node_t* node);
void free_tree(tree_t* tree);

void print_tree(node_t *node);
int search(tree_t *tree, int value);
int isEmpty(tree_t *tree);
```

All the functions and ther description

``` C
// Create a Tree
tree_t *init();

// Insert a value in tree
void insert(tree_t *tree, int value);

// Free the nodes
void free_nodes(node_t* node);

// Free the tree
void free_tree(tree_t* tree);

// Print all elements in tree
void print_tree(node_t *node);

// Search a value in tree
int search(tree_t *tree, int value);

// Check if tree is empty
int isEmpty(tree_t *tree);
```