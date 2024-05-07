#include "staline.h"

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

void staline_sort_in_place(int* arr, size_t* length) {
    int current = 0;
    for (int i = 1; i < *length; i++) {
        if (arr[i] >= arr[current] && ++current != i) {
            // arithmetic swap
            arr[current] = arr[current] + arr[i];
            arr[i] = arr[current] - arr[i];
            arr[current] = arr[current] - arr[i];
        }
    }
    *length = current + 1;
}
