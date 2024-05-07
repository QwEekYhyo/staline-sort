#include "staline.h"
#include "utils.h"
#include <time.h>

int main() {
    srand(time(NULL));

    size_t array_length = 7;
    int* array = random_array(array_length);
    print_array(array, array_length);

    int* sorted_array = biggest_staline_sort(array, &array_length);
    print_array(sorted_array, array_length);

    free(array);
    free(sorted_array);

    return 0;
}
