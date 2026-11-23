#include <iostream> 
#include <cstdarg>   
using namespace std;

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int resultat = 0;
    int a = va_arg(args, int);
    for (int i = 1;i < count;i++)
    {
        int b = va_arg(args, int);
        resultat += a * b;
        a = b;
    }

    va_end(args);
    return resultat;
}

int main()
{
    cout << sum(5, 1, 2, 3, 4, 5) << endl;
    cout << sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    cout << sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12) << endl;

    return 0;
}
