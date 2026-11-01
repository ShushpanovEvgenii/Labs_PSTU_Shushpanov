#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");

    const int n = 2;
    const int m = 4;

    int a[n][m];
    int sum;

    cout << "Введите элементы матрицы (2 строки, 4 столбца):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Исходная матрица:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(2) << a[i][j];
        }
        cout << endl;
    }

    cout << "Суммы элементов строк:\n";

    for (int i = 0; i < n; i++) {
        sum = 0;

        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }

        cout << "Сумма " << i + 1 << "-й строки: " << sum << endl;
    }

    return 0;
}