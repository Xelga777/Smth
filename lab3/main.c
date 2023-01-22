#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main() {
    int size = 0, sub_size = 0, r = 0;
    float *array = NULL, *sub_array = NULL;

    int command, index;
    float element;

    printf("инициализация массива\n");
    r = input_array(&array, &size);

    while (1) {
        printf("Команды:\n");
        printf("1 - инициализация массива\n");
        printf("2 - вставка нового элемента по индексу\n");
        printf("3 - удаление элемента по индексу\n");
        printf("4 - обработка данных\n");
        printf("5 - вывод текущего состояния массива\n");
        printf("6 - завершить исполнение программы\n\n");
        printf("Выберите команду: ");
        while ((scanf("%d", &command) == 0) || (command <= 0) || (command > 6)) {
            printf("Неверное значение.\nВыберите команду: ");
            scanf("%*c");
        }

        printf("\n");

        if (command == 1) {
            free(array);
            free(sub_array);
            r = input_array(&array, &size);
        } else if (command == 2) {
            printf("Введите индекс, по которому будет вставлен элемент: ");
            while ((scanf("%d", &index) == 0) || (index <= 0)) {
                printf("Неверное значение.\nВведите индекс, по которому будет вставставлен элемент: ");
                scanf("%*c");
            }
            printf("\nВведите значение %d-го элемента: ", index);
            while (scanf("%f", &element) == 0) {
                printf("Неверное значение.\nВведите значение %d-го элемента: ", index);
                scanf("%*c");
            }
            r = add_element(&array, &size, index, element);
        } else if (command == 3) {
            printf("Введите индекс, по которому будет удален элемент: ");
            while ((scanf("%d", &index) == 0) || (index <= 0) || (index > size)) {
                printf("Неверное значение.\nВведите индекс, по которому будет удален элемент: ");
                scanf("%*c");
            }
            r = delete_element(&array, &size, index);
        } else if (command == 4) {
            r = processing_data(&array, &sub_array, &size, &sub_size);
            printf("задача выполнена");
        } else if (command == 5) {
            printf("   исходный масив: ");
            r = current_array(array, size);
            printf("\nвыделенный массив: ");
            r = current_array(sub_array, sub_size);
        } else {
            if (array) free(array);
            if (sub_array) free(sub_array);
            break;
        }

        if (r == 2) {
            printf("внутренняя ошибка. попробуйте снова позже.\n");
        }

        printf("\n\n");
    }
}
