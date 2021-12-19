#include "header_func.h"
//поэлементное умножение матрицы
void mult_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] *= matrix_sum2[i][j];
}
//поэлементное деление матрицы
void div_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] /= matrix_sum2[i][j];
}
///Вывод матрицы в консоль
void output_matrix(double** matrix_int_data, int matrix_size) {
	for (int i = 0; i < matrix_size; i++) {
		for (int j = 0; j < matrix_size; j++) {
			printf(" %g ", matrix_int_data[i][j]);
		}
		cout << endl;
	}
}
