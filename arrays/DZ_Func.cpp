#include"stdafx.h"
#include"Fillrand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	const int D_SIZE = 8;
	double d_arr[D_SIZE];

	const int F_SIZE = 8;
	float f_arr[F_SIZE];

	int i_arr_2[ROWS][COLS];

	int minRand = 100, maxRand = 200;

	/*cout << "Введите минимальное случ.число: "; cin >> minRand;
	cout << "Введите максимальное случ.число: "; cin >> maxRand;*/

	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арефметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr, n) << endl;

	/*int nuber_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> nuber_of_shifts;
	shiftLeft(arr, n, nuber_of_shifts);
	Print(arr, n);

	cout << "Введите количество сдвигов: "; cin >> nuber_of_shifts;
	shiftRight(arr, n, nuber_of_shifts);
	Print(arr, n);*/

	//-----------------------------------------------------------------
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов double массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Средне-арефметическое элементов double массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение double массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение double массива: " << maxValueIn(d_arr, D_SIZE) << endl;

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Float" << endl;
	FillRand(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);
	Sort(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);
	cout << "Сумма элементов float массива: " << Sum(f_arr, F_SIZE) << endl;
	cout << "Средне-арефметическое элементов float массива: " << Avg(f_arr, F_SIZE) << endl;
	cout << "Минимальное значение float массива: " << minValueIn(f_arr, F_SIZE) << endl;
	cout << "Максимальное значение float массива: " << maxValueIn(f_arr, F_SIZE) << endl;

}