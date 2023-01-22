#include <stdio.h>
#include <stdlib.h>

int delete_element(float **array, int *size, int index) {
        (*size)--;
        for (int k = (index-1); k < *size; k++) {
                (*array)[k] = (*array)[k+1];
        }

        *array = (float *)realloc(*array, (*size)*sizeof(float));

        if (*array == NULL) {
                return 2;
        }

        return 0;
}
