#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    int A[2][3] = { -15,5,1,98,4,-1 };
    int strok = 2, stolb = 3;
    int max = 0, maxstolb = 0;
    for (int str = 0;str < strok;str++)
    {
        for (int stl = 0;stl < stolb;stl++)
        {
            if (A[str][stl] > A[max][maxstolb])
            {
                max = str;
                maxstolb = stl;
            }
        }
    }
    cout << "Максимальное значение: " << A[max][maxstolb] << endl;
    cout << "Индекс макс значения: " <<"["<< max << "]" <<"[" << maxstolb<<"]" << endl;
    return 0;
}