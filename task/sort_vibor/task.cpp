#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    int A[10] = { -5,1,7,5,9,10,3,-8,0,11 };
    for (int i = 0;i < 10;i++)
    {
        int min = i;
        for (int j = i + 1;j < 10;j++)
        {
            if (A[j] < A[min]) min = j;
        }
        if (min != i)
        {
            int y = A[i];
            A[i] = A[min];
            A[min] = y;
        }
    }


    cout << "Отсортированный массив: ";
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    return 0;
}