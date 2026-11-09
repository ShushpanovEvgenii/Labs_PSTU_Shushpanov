#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    int A[10] = { -5, 1, 7, 5, 9, 10, 3, -8, 0, 11 };
    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 8;j++)
        {
            if (A[j] > A[j + 1])
            {
                int y = A[j];
                A[j] = A[j + 1];
                A[j + 1] = y;
            }
        }
    }
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}