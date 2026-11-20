#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a * b;
}

template <typename... T>
int sum(int a, int b, T... rest)
{
	return a * b + sum(b, rest...);
}

int main()
{
	cout << sum(1, 2, 3, 4, 5) << endl;
	cout << sum(2, 3, 4) << endl;
	cout << sum(7, 8) << endl;
	return 0;
}