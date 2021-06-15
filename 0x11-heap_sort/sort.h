#ifndef _HEAP_
#define _HEAP_

#include <stdio.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void swap(int *a, int *b);
void siftDown(int *arr, int n, int i, size_t size);
void heap_sort(int *array, size_t size);

#endif