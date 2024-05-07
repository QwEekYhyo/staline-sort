#include "staline.h"
#include "utils.h"
#include <time.h>

int main() {
    srand(time(NULL));

    size_t array_length = 7;
    int* array = random_array(array_length);
    print_array(array, array_length);

    staline_sort_in_place(array, &array_length);
    print_array(array, array_length);

    free(array);

    return 0;
}
