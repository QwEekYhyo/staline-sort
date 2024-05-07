#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int* staline_sort_copy(int* arr, size_t* length) {
    int* temp = malloc(*length * sizeof(int));
    temp[0] = *arr;

    int current = 0;
    for (int i = 1; i < *length; i++) {
        if (arr[i] >= temp[current]) {
            temp[++current] = arr[i];
        }
    }

    *length = current + 1;
    return temp;
}

int main() {
    srand(time(NULL));

    size_t array_length = 7;
    int* array = random_array(array_length);
    print_array(array, array_length);

    int* sorted_array = staline_sort_copy(array, &array_length);
    print_array(sorted_array, array_length);

    free(array);
    free(sorted_array);

    return 0;
}
