#ifndef _MAIN_H_
#define _MAIN_H_

int input_array(float **array, int *size);
int add_element(float **array, int *size, int index, float element);
int delete_element(float **array, int *size, int index);
int check(float x);
int processing_data(float **array, float **sub_array, int *size, int *sub_size);
int current_array(float *array, int size);

#endif