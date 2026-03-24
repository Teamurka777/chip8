#include <stdio.h>

int main() {
 lab7_t4();
}
void lab7_t4() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Размер массива должен быть положительным числом.\n");
        return 1;
    }

    int arr[n];

    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_index = 0, min_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;

    printf("Изменённый массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


