#include <stdio.h>

#include "array.h"

/* test only */

int main(int argc, char *argv[]) {
    array_t *array;
    array = create_array(5);

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

    printf("%u", size(array));
    clear(array);
    printf("%u", size(array));
    add(array, &second_value);
    printf("%d", get_first(array));
    printf("%u", size(array));

    array_t *array_char;
    array_char = create_array(5, "CHR_TYP");

    char *first_string = "hello";
    add(array_char, &first_string);

    char *second_string = "world";
    add(array_char, &second_string);
    
    printf("%s\n", get_last(array_char));

    free_array(array);
    free_array(array_char)

    return 0;
}
