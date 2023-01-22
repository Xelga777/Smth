#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern  int input_array();
extern int add_element(int index, float element);
extern int delete_element(int index);
extern int check(float x);
extern int processing_data();
extern int current_array(float *array, int size);

int size = 0, sub_size = 0, r = 0;
float *array, *sub_array;

int main() {
    int command, index;
    float element;

    printf("инициализация массива\n");
    r = input_array();

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
            r = input_array();
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
            r = add_element(index, element);
        } else if (command == 3) {
            printf("Введите индекс, по которому будет удален элемент: ");
            while ((scanf("%d", &index) == 0) || (index <= 0) || (index > size)) {
                printf("Неверное значение.\nВведите индекс, по которому будет удален элемент: ");
                scanf("%*c");
            }
            r = delete_element(index);
        } else if (command == 4) {
            r = processing_data();
            printf("задача выполнена");
        } else if (command == 5) {
            printf("   исходный масив: ");
            r = current_array(array, size);
            printf("\nвыделенный массив: ");
            r = current_array(sub_array, sub_size);
        } else {
            free(array);
            free(sub_array);
            break;
        }

        if (r == 2) {
            printf("внутренняя ошибка. попробуйте снова позже.\n");
        }

        printf("\n\n");
    }
}
