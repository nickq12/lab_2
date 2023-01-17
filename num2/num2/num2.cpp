#include <iostream>
#include <time.h>

#define MATRIX_SIDE_SIZE 10
#define matrix(name) name[MATRIX_SIDE_SIZE][MATRIX_SIDE_SIZE]
#define O_COMPLEXITY MATRIX_SIDE_SIZE * MATRIX_SIDE_SIZE * MATRIX_SIDE_SIZE

int main() {
    system("chcp 1251 > nul");

    clock_t start, end, diff; // объявляем переменные для определения времени выполнения

    int i = 0, j = 0, r;
    char matrix(a), matrix(b), matrix(c), elem_c;

    srand(time(NULL)); // инициализируем параметры генератора случайных чисел
    while (i < MATRIX_SIDE_SIZE) {
        while (j < MATRIX_SIDE_SIZE) {
            a[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
            j++;
        }
        i++;
    }
    srand(time(NULL)); // инициализируем параметры генератора случайных чисел
    i = 0;
    
    while (i < MATRIX_SIDE_SIZE) {
        j = 0;
        while (j < MATRIX_SIDE_SIZE) {
            b[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
            printf("%d ", b[i][j]);
            j++;
        }
        printf("\n");
        i++;
        
    }

    start = clock();
    for (i = 0; i < MATRIX_SIDE_SIZE; i++) {
        for (j = 0; j < MATRIX_SIDE_SIZE; j++) {
            elem_c = 0;
            for (r = 0; r < MATRIX_SIDE_SIZE; r++) {
                elem_c = elem_c + a[i][r] * b[r][j];
                c[i][j] = elem_c;
            }
        }
    }
    end = clock();
    diff = end - start;
    printf("Время выполнения: %lu тиков\n", (unsigned long)diff);
    printf("Сложность выполнения: O(n^3), где n - это длина стороны матрицы, O(n = %ld) = %ld\n", MATRIX_SIDE_SIZE, O_COMPLEXITY);
    printf("k = кол-во тиков / n^3 = %.10lf\n", ((double)diff) / ((double)O_COMPLEXITY));

    return 0;
}
