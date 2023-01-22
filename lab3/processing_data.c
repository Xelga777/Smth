#include <stdlib.h>
#include "main.h"

int processing_data(float **array, float **sub_array, int *size, int *sub_size) {
    int i = 0, r = 0;
    while (i < *size) {
        if (check((*array)[i]) == 1) {
            (*sub_size)++;
            *sub_array = (float *)realloc(*sub_array, (*sub_size)*sizeof(float));

            if (*sub_array == NULL) {
                return 2;
            }

            (*sub_array)[*sub_size - 1] = (*array)[i];
            r = delete_element(array, size, i+1);
        }

        else {
            i++;
        }
    }
    return 0;
}
