#include "utils.h"
#include <stdio.h>

void print_array(int* arr, size_t length) {
    printf("{ ");
    int i;
    for (i = 0; i < length - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d }\n", arr[i]);
}

int* random_array(size_t length) {
    int* array = malloc(length * sizeof(int));
    if (!array) {
        printf("Need more RAM\n");
        exit(1);
    }

    for (int i = 0; i < length; i++) {
        array[i] = rand() % 50;
    }

    return array;
}
