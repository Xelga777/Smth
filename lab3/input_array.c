#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int input_array(float **array, int *size) {
    printf("Введиде количество членов массива: ");
    while ((scanf("%d", size) == 0) || (*size <= 0)){
        printf("Неверное значение.\nВведиде количество членов массива: ");
        scanf("%*c");
    }

    *array = (float*)malloc(*size * sizeof(float));
    if (*array == NULL) {
        return 2;
    }
    
    for (int i = 0; i < *size; i++) {
        printf("Введите значение %d-го элемента: ", i+1);
        while (scanf("%f", &((*array)[i])) == 0){
            printf("Неверное значение.\nВведите значение %d-го элемента: ", i+1);
            scanf("%*c");
        }
    }
    return 0;
}
