#include <stdio.h>
#include "main.h"

int current_array(float *array, int size) {
    if (size == 0) {
        printf("[]");
    }
    else if (size == 1) {
        printf("[%g]", array[0]);
    }
    else {
        printf("[%g, ", array[0]);
        for (int j = 1; j <= (size-2); j++) {
                printf("%g, ", array[j]);
        }
        printf("%g]", array[size - 1]);
    }
    return 0;
}
