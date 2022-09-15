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

	/*cout << "������� ����������� ����.�����: "; cin >> minRand;
	cout << "������� ������������ ����.�����: "; cin >> maxRand;*/

	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� �������: " << maxValueIn(arr, n) << endl;

	/*int nuber_of_shifts;
	cout << "������� ���������� �������: "; cin >> nuber_of_shifts;
	shiftLeft(arr, n, nuber_of_shifts);
	Print(arr, n);

	cout << "������� ���������� �������: "; cin >> nuber_of_shifts;
	shiftRight(arr, n, nuber_of_shifts);
	Print(arr, n);*/

	//-----------------------------------------------------------------
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� double �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "������-�������������� ��������� double �������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� double �������: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "������������ �������� double �������: " << maxValueIn(d_arr, D_SIZE) << endl;

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Float" << endl;
	FillRand(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);
	Sort(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);
	cout << "����� ��������� float �������: " << Sum(f_arr, F_SIZE) << endl;
	cout << "������-�������������� ��������� float �������: " << Avg(f_arr, F_SIZE) << endl;
	cout << "����������� �������� float �������: " << minValueIn(f_arr, F_SIZE) << endl;
	cout << "������������ �������� float �������: " << maxValueIn(f_arr, F_SIZE) << endl;

}