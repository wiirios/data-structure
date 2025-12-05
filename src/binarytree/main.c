#include <stdio.h>
#include <stdlib.h>

#include "binarytree.h"

/* test only */

int main() {
    tree_t *tree;
    tree = init();

    insert(tree, 10);
    insert(tree, 20);
    insert(tree, 5);
    insert(tree, 3);
    insert(tree, 7);
    insert(tree, 11);

    printf("search for number: %d\n", search(tree, 3));

    print_tree(tree->root);

    free_nodes(tree->root);

    // use free_tree(tree) at the end
    free_tree(tree);

    return 0;
}