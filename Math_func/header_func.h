/**
	\file
	Заголовочный файл для функции перемножения матриц.
*/

#include <iostream>
using namespace std;
/**
	\brief Функция, считающая сумму матриц.
	\details Функция возвращает матрицу, равную произведению матриц.
	\param[out] matrix_int_B матрица к которой прибавляется значение второй матрицы matrix_sum2
	\param[in] matrix_int_A вторая матрица
	\param[in] matrix_size размер матрицы

*/
void sum_matrix(double** matrix_int_B, double** matrix_int_A, int matrix_size);//сумма матриц
void output_matrix(double** matrix_int_A, int matrix_size);//вывод матриц
/**
	\brief Функция, считающая разность матриц.
	\details Функция возвращает матрицу, равную произведению матриц.
	\param[out] matrix_sum1 матрица к которой прибавляется значение второй матрицы matrix_sum2
	\param[in] matrix_sum2 вторая матрица
	\param[in] matrix_size размер матрицы

*/
void difference_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
void mult_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
void div_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
void slpow_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);