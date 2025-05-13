#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int m[20];
	for (int i = 0; i < 20; ++i) {
		m[i] = rand() % 20;
	}
	printf("Массив случайных чисел:\n");
	for (int i = 0; i < 20; ++i) {
		printf("%d", m[i]);
	}
	int min = m[0];
	for (int i = 1; i < 20; ++i) {
		if (m[i] % 2 == 0) {
			if (m[i] < min) {
				min = m[i];
			}
		}
	}
	printf("\n");
	printf("Минимальное значение:%d\n", min);
	int rows, cols;

	printf("Введите количество строк и столбцов: ");
	scanf_s("%d %d", &rows, &cols);

	int arr[100][100], count = 0;
	srand(time(NULL));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 20;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols - 1; j++) {
			if (arr[i][j] == arr[i][j + 1]) {
				count++;
			}
		}
	}
	printf("Число пар одинаковых соседних элементов: %d\n", count);

	return 0;
}
