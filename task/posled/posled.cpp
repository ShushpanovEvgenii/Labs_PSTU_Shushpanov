#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");

    int a, b;
    int f = 1;

    cin >> a;
    if (a == 0)
    {
        cout << "Нету последовательности";
    }
    else
    {
        cin >> b;
        if (b == 0)
        {
            cout << "Нету последовательности";
        }
        else
        {
            while (f == 1 && b != 0)
            {
                if (a >= b)
                {
                    f = 0;
                }
                else
                {
                    a = b;
                    cin >> b;
                }
            }

            if (f == 1)
            {
                cout << "Последовательность возрастающая";
            }
            else
            {
                cout << "Последовательность не возрастающая";
            }
        }
    }

    return 0;
}