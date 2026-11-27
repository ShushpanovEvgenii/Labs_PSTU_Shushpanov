#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8");
	int n, number, k,key;
	cout << "Введите длину массива: ";
	cin >> n;
	int* a = new (nothrow) int[n];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}

	cout << "Введите номер, с которого начать удаление: ";
	cin >> number;

	cout << "Введите количество удаляемых элементов: ";
	cin >> k;

	if (number < 1 || k < 0 || number > n)
	{
		cout << "Неверные данные!" << endl;
		delete[] a;
		return 0;
	}

	int newSize = n - k;
	int* b = new (nothrow) int[newSize];
	for (int i = 0;i < number - 1;i++)
	{
		b[i] = a[i];
	}
	for (int i = number - 1;i<newSize;i++)
	{
		b[i] = a[i + k];
	}
	delete[] a;
	a = b;
	n = newSize;

	cout << "Введите добавляемый элемент: ";
	cin >> key;
	int* c = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		c[i] = a[i];
	}
	c[n] = key;
	delete[] a;
	a = c;
	n++;
	
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;

}