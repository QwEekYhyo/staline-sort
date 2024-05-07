#include "staline.h"

int* staline_sort_copy(int* arr, size_t* length) {
    return i_staline_sort_copy(arr, length, 0);
}

int* i_staline_sort_copy(int* arr, size_t* length, int starting_index) {
    int* temp = malloc(*length * sizeof(int));
    temp[0] = arr[starting_index];

    size_t current = 0;
    for (size_t i = starting_index + 1; i < *length; i++) {
        if (arr[i] >= temp[current]) {
            temp[++current] = arr[i];
        }
    }

    *length = current + 1;
    return temp;
}

void staline_sort_in_place(int* arr, size_t* length) {
    size_t current = 0;
    for (size_t i = 1; i < *length; i++) {
        if (arr[i] >= arr[current] && ++current != i) {
            // arithmetic swap
            arr[current] = arr[current] + arr[i];
            arr[i] = arr[current] - arr[i];
            arr[current] = arr[current] - arr[i];
        }
    }
    *length = current + 1;
}

int* biggest_staline_sort(int* array, size_t* length) {
    int* result = NULL;
    size_t result_length = 0;

    for (size_t i = 0; i < *length - 1; i++) {
        size_t current_length = *length;
        int* current_array = i_staline_sort_copy(array, &current_length, i);
        if (current_length > result_length) {
            int* old_result = result;
            result = current_array;

            result_length = current_length;
            if (old_result)
                free(old_result);
        } else {
            free(current_array);
        }
    }

    *length = result_length;
    return result;
}
