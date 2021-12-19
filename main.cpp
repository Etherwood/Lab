#include "Header.h"
#include "Math_func/header_func.h"

#include <boost/program_options.hpp>

using namespace boost::program_options;

void on_array_size(int number)
{
	std::cout << "On array_size: " << number << '\n';
}
void on_matrix_size(int number)
{
	std::cout << "On matrix_size: " << number << '\n';
}

int main(int argc, const char* argv[]) {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int default_size = 17;//стандартные значения размеров
	int array_size = default_size;
	int matrix_size = 7;

	try//работа через командную строку
	{
		options_description desc{ "Options" };
		desc.add_options()
			("help,h", "Help screen")
			("matrix_size", value<int>()->notifier(on_matrix_size), "Matrix_size");//размер матриц

		variables_map vm;

		store(parse_command_line(argc, argv, desc), vm);
		notify(vm);
		if (vm.count("help"))
			std::cout << desc << '\n';
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("matrix_size")) {
			std::cout << "Matrix_size: " << vm["matrix_size"].as<int>() << '\n';
			matrix_size = vm["matrix_size"].as<int>();//записываем в наш размер значение из командной строки
		}

	}
	catch (const error& ex)
	{
		std::cerr << ex.what() << '\n';
	}

	//сама работа с матрицами

	double** matrix_int_time = new double* [matrix_size];
	double** matrix_int_data = new double* [matrix_size];
	for (int i = 0; i < matrix_size; i++) {
		matrix_int_time[i] = new double[matrix_size];
		matrix_int_data[i] = new double[matrix_size];
	}

	initialization(matrix_int_time, matrix_int_data, matrix_size);
	

	printf("матрица data: \n");
	output_matrix(matrix_int_data, matrix_size);
	printf("матрица time: \n");
	output_matrix(matrix_int_time, matrix_size);
	printf("Сложение: \n");
	sum_matrix(matrix_int_data, matrix_int_time, matrix_size);
	output_matrix(matrix_int_data, matrix_size);
	printf("Вычитание: \n");
	difference_matrix(matrix_int_data, matrix_int_time, matrix_size);
	output_matrix(matrix_int_data, matrix_size);
	printf("Умножение: \n");
	mult_matrix(matrix_int_data, matrix_int_time, matrix_size);
	output_matrix(matrix_int_data, matrix_size);
	printf("Деление: \n");
	div_matrix(matrix_int_data, matrix_int_time, matrix_size);
	output_matrix(matrix_int_data, matrix_size);

	system("pause");
	return 0;
}


