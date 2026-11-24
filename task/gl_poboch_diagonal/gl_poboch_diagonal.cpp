#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100][100];
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			a[i][j] = 1;
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (i < j && i + j < n - 1)
			{
				a[i][j] = 0;
			}
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}