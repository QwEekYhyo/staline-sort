#ifndef STALINE_H
#define STALINE_H

#include <stdlib.h>

int* staline_sort_copy(int* arr, size_t* len);
int* i_staline_sort_copy(int* arr, size_t* len, int i);

void staline_sort_in_place(int* arr, size_t* len);

int* biggest_staline_sort(int* arr, size_t* len);

#endif
