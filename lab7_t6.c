#include <stdio.h>

#define ROWS 4
#define COLS 4

int main() {
lab7_t6();
}
void lab7_t6() {
    int matrix[ROWS][COLS];
    int count = 0; 
    
    printf("Введите элементы матрицы 4x4 (по строкам):\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Строка %d: ", i + 1);
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > 0) {
                count++;
            }
        }
    }
    
    printf("\nМатрица:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n");  
    }
    
    printf("\nКоличество элементов, больших нуля: %d\n", count);
    
    return 0;
}



