#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,".UTF8");
	int a[100];
	int n;
	cout << "Введите длину массива: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		a[i] = rand() % 101 - 50;
	}
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int k = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i] != 0)
		{
			a[k] = a[i];
			k++;
		}
	}
	n = k;
	k = -1;
	for (int i = 0;i < n && k == -1;i++)
	{
		if (a[i] % 2 == 0) k = i;
	}

	if (k > 0)
	{
		for (int j = n;j > k + 1;j--)
		{
			a[j] = a[j - 1];

		}
		a[k + 1] = a[k - 1] + 2;
		n++;
	}


	cout << "Полученный массив:" << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}