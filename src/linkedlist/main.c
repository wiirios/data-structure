#include "linkedlist.h"

/* test only */

int main(int argc, char *argv[]) {
    list_t *list;
    list = init();
    int array[2];

    add(list, 10);
    add(list, 20);
    add(list, 30);
    
    print_all(list);
    
    clear(list);
    
    add(list, 22);
    add(list, 33);
    add(list, 44);

    print_all(list);
   
    return 0;
}
