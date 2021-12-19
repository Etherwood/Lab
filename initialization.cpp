#include "Header.h"
using namespace std;

void initialization(double** matrix_int_time, double** matrix_int_data, int matrix_size) {
	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++) {
			matrix_int_time[i][j] = rand() % 255;
			matrix_int_data[i][j] = rand() % 255;
		}
}
