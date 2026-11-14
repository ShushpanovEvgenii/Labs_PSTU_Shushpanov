#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;

const int MAX = 100;

void transposeMatrix(int n, int a[][MAX],int t[][MAX])
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            t[j][i] = a[i][j];
        }
    }
}

void sumMatrices(int n, int a[][MAX], int t[][MAX], int result[][MAX])
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            result[i][j] = a[i][j] + t[i][j];
        }
    }
}

void coutMatrix(int n, int a[][MAX])
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, ".UTF8");
    int n;
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;
    int a[MAX][MAX],transposed[MAX][MAX],result[MAX][MAX];
    cout << "Введите элементы матрицы: " << endl;

    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            cin >> a[i][j];
        }
    }
    transposeMatrix(n, a, transposed);
    sumMatrices(n, a, transposed, result);

    cout << "Исходная матрица: " << endl;
    coutMatrix(n, a);

    cout << "Транспонированная матрица: " << endl;
    coutMatrix(n, transposed);

    cout << "Результат  матрица: " << endl;
    coutMatrix(n, result);

    return 0;


}