#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    int A[10] = { 15,5,-10,7,8,-99,78,78,-99,-99 };
    int max = A[0], min = A[0];
    int indmax = 0, indmin = 0;
    int summax = 0, summin = 0;
    for (int i = 0;i < 10;i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            indmax = i;
            summax = 1;

        }
        else if (A[i] == max) summax++;
        if (A[i] < min)
        {
            min = A[i];
            indmin = i;
            summin = 1;
        }
        else if (A[i] == min) summin++;


    }
    cout << "max: " << max << " min: " << min << endl;
    cout << "index max: " << indmax << " index min: " << indmin << endl;
    cout << "summax: " << summax << " symmin: " << summin << endl;
    return 0;
}