#include <stdlib.h>

extern float *array, *sub_array;
extern int size, sub_size;
extern int check(float x);
extern int add_element(int index, float element);
extern int delete_element(int index, float element);

int processing_data() {
	int i = 0, r;
	while (i < size) {
		if (check(array[i]) == 1) {
            r = add_element(i, array[i]);

            if (r == 2) {
                return 2;
            }

            r = delete_element(i, array[i]);
        }

    	else {
        	i++;
        }
	}
	return 0;
}

