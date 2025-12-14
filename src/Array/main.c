#include <stdio.h>

#include "array.h"

/* test only */

int main(int argc, char *argv[]) {

    //#define DEBUG argv[1]

    array_t *array;
    array = create_array(5, "INT_TYP");

    int first_value = 10;
    add(array, &first_value);

    int second_value = 100;
    add(array, &second_value);

    int third_value = 100;
    add(array, &third_value);

    int fourth_value = 100;
    add(array, &fourth_value);
    
    int fifth_value = 200;
    add(array, &fifth_value);

    array_t *array_char;
    array_char = create_array(5, "CHR_TYP");

    char *first_string = "hello";
    add(array_char, &first_string);

    char *second_string = "world";
    add(array_char, &second_string);
    
    printf("%s\n", *(char**)get_last(array_char));

    free(array);
    free(array_char);

    return 0;
}
