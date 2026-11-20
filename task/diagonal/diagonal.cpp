#include <iostream>
#include <clocale>
using namespace std;

int** creat(int n)
{
	int** a = new int* [n];
	for (int i = 0;i < n;i++)
	{
		a[i] = new int[n];
	}
	return a;
}

void matrix(int** a, int n)
{
	int k = 1;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			a[i][j] = k++;
		}
	}
}

void coutt(int** a, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void zero(int** a, int n)
{
	for (int i = 0;i < n;i++)
	{
		a[i][i] = 0;
		a[i][n - i - 1] = 0;
	}
}

void Delete(int** a, int n)
{
	for (int i = 0;i < n;i++)
	{
		delete[] a[i];
	}
	delete[] a;
}

int main()
{
	int n;
	cin >> n;
	int** a = creat(n);
	matrix(a, n);
	cout << "Do: " << endl;
	coutt(a, n);

	zero(a, n);
	cout << "Posle: " << endl;
	coutt(a, n);
	Delete(a, n);
	return 0;
}