#include <stdlib.h>

extern float *array, *sub_array;
extern int size, sub_size;
extern int check(float x);
extern int delete_element(int index);

int processing_data() {
    int i = 0, r = 0;
    while (i < size) {
        if (check(array[i]) == 1) {
            sub_size++;
            sub_array = (float *)realloc(sub_array, (sub_size)*sizeof(float));

            if (sub_array == NULL) {
                return 2;
            }

            sub_array[sub_size - 1] = array[i];
            r = delete_element(i+1);
        }

        else {
            i++;
        }
    }
    return 0;
}
