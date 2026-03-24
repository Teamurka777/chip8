#include <stdio.h>

int main() {
    lab7_t5();
}
void lab7_t5() {
    int array[15];
    int i;

    int positive = 0;
    int negative = 0;
    int zero = 0;

    
    printf("Введите 15 элементов массива:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", & array[i]);
    }


    for (int i = 0; i < 15; i++) {
        if (array[i] > 0) {
            positive++;
        }
        else if (array[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }


    printf("\nРезультаты подсчёта:\n");
    printf("Количество положительных элементов: %d\n", positive);
    printf("Количество отрицательных элементов: %d\n", negative);
    printf("Количество нулевых элементов: %d\n", zero);

    return 0;
}