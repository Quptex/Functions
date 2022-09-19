#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Statistics.h"
#include"Statistics.cpp"
#include"Shift.h"
#include"Shift.cpp"
int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	int minRand = 100, maxRand = 100;

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

	//----------------------------------------------------------------
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арефметическое: " << Avg(d_arr, D_SIZE) << endl;

	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "\n2D:\n";

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}