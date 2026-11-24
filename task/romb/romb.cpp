#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    int n, c;
    cin >> n;
    int c = n / 2;
    char a[100][100];

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            a[i][j] = ' ';
        }
    }

    for (int i = 0;i < n;i++)
    {
        a[i][c - i] = '1';
        a[i][c + i] = '1';
        for (int j = c - i + 1;j < c + i;j++)
        {
            a[i][j] = '0';
        }
    }

    for (int i = c + 1;i < n;i++)
    {
        a[i][i - c] = '1';
        a[i][n - 1 - (i - c)] = '1';
        for (int j = i - c + 1;j < n - 1 - (i - c);j++)
        {
            a[i][j] = '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}