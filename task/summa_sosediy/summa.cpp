#include <iostream>
using namespace std;

int main()
{
    int n;
    bool f = 0;

    cin >> n;

    int* a = new (nothrow) int[n];

    if (a == nullptr)
        return 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && !f)
        {
            if (i == 0 || i == n - 1)
            {
                a[i] = 0;
            }
            else
            {
                a[i] = a[i - 1] + a[i + 1];
            }

            f = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}