#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    int A[10] = { 9,15,-1,0,18,71,-51,14,8,11 };
    int A1[10] = { -10,-9,0,1,5,7,8,15,19,20 };
    bool f = false;
    for (int i = 0;i < 9;i++)
    {
        if (A[i] > A[i + 1])
        {
            f = true;
        }

    }
    if (f == false)
    {
        cout << "Данный массив упорядочен по возрастанию";
    }
    else cout << "Данный массив НЕ упорядочен по возрастанию";
    return 0;
}