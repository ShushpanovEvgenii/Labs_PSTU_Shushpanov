#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;
struct complex
{
	int real;
	int mnim;
};
int mult(int a, int b)
{
	return a * b;
}
complex mult(complex a, complex b)
{
	complex result;
	result.real = a.real * b.real - a.mnim * b.mnim;
	result.mnim = a.real * b.mnim + a.mnim * b.real;
	return result;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "C");
	cout << "Введите числа для обычного умножения" << endl;
	int a, b;
	cin >> a >> b;
	cout << "Произведение чисел = ";
	cout << mult(a, b);
	cout << endl;
	complex x,y;
	cout << "Введите целую и мнимую часть первого числа: " << endl;
	cin >> x.real >> x.mnim;
	cout << "Введите целую и мнимую часть второго числа: " << endl;
	cin >> y.real >> y.mnim;
	complex result = mult(x, y);
	cout << "результат произведения комплексных чисел = ";
	cout << result.real;
	if (result.mnim >= 0)
	{
		cout << "+" << result.mnim << "i";
	}
	else
	{
		cout << "-" << -result.mnim << "i";
	}
	cout << endl;
	
	return 0;
}