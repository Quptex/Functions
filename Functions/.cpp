#include <iostream>
using namespace std;
int Add(int a, int b);
int Sub(int a, int b);
int Mult(int a, int b);
double Div(double a, double b);
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "¬ведите 1 число: ";
	cin >> a;
	cout << "¬ведите 2 число: ";
	cin >> b;
	int c = Add(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mult(a, b) << endl; //ctrl + d
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}
int Add (int a, int b)
{
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mult(int a, int b)
{
	return a * b;
}
double Div(double a, double b)
{
	return (double)a / b;
}