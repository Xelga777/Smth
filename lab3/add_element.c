#include <stdio.h>
#include <stdlib.h>

extern float *array;
extern int size;

int add_element(int index, float element) {
    size++;

    array = (float *)realloc(array, (size)*sizeof(float));

    if (array == NULL) {
    	return 2;
    }

    if (index < size) {
        for (int k = (size-1); k >= index; k--) {
                array[k] = array[k-1];
        }
    	array[index] = element;

    }
    else {
	array[size - 1] = element;
    }
    return 0;
}

