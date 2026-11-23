#include <iostream>
using namespace std;

void coutt(int* a, int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void resize(int*& a, int n, int newSize)
{
	int* b = new (nothrow) int[newSize] {};
	int count = n;
	if (newSize < n) count = newSize;
	for (int i = 0;i < count;i++)
	{
		b[i] = a[i];
	}
	delete[] a;
	a = b;
}

int main()
{
	int n = 8,k,m;
	int* a = new int[n] {1, 5, 0, -1, 15, 9, 77, 13};
	cout << "Ishodnii: ";
	coutt(a, n);
	cout << endl;
	cin >> k;
	resize(a, n, k);
	n = k;
	cout << "Posle yvelicheniy: ";
	coutt(a, n);
	cout << endl;
	cin >> m;
	resize(a, n, m);
	n = m;
	cout << "Posle ymenisheniy: ";
	coutt(a, n);

	delete[] a;
	return 0;
}