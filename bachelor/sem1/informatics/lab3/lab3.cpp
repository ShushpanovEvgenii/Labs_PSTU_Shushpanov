#include <iostream>
#include <cmath>
#include <clocale>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8");
	double a = 0.1, b = 1, e = 0.0001, h;
	int k = 10, n;
	cout << "Введите n: ";
	cin >> n;
	h = (b - a) / k;

	cout << setw(10) << "x" << setw(12) << "ряд(n)" << setw(12) << "ряд(e)" << setw(12) << "sin(x)" << endl;

	for (int i = 0; i <= k; i++)
	{
		double x = a + i * h;

		double s1 = 0;
		for (int j = 0; j <= n; j++)
		{
			s1 += + pow(-1, j) * pow(x, 2 * j + 1) / tgamma(2 * j + 2);
		}

		double s2 = 0;
		int j = 0;
		double t = x;
		while (fabs(t) > e)
		{
			s2 += t;
			j++;
			t = pow(-1, j) * pow(x, 2 * j + 1) / tgamma(2 * j + 2);
		}

		cout << setw(10) << x << setw(12) << s1 << setw(12) << s2 << setw(12) << sin(x) << endl;
	}
	return 0;
}