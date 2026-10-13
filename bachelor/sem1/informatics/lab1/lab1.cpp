
#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");
    cout.precision(15);

    // Вычисления с float
    float a, b;
    cout << "Введите a и b для float: ";
    cin >> a >> b;

    float c1 = pow(a + b, 3);
    float c2 = pow(a, 3) + 3 * pow(a, 2) * b;
    float c3 = c1 - c2; // Числитель
    float c4 = 3 * a * pow(b, 2) + pow(b, 3); // Знаменатель
    float c5 = c3 / c4; // Результат

    cout << endl << "Вычисления с float:" << endl;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "Числитель: " << c3 << endl;
    cout << "Знаменатель: " << c4 << endl;
    cout << "Результат: " << c5 << endl;

    // Вычисления с double
    double A, B;
    cout << endl << "Введите A и B для double: ";
    cin >> A >> B;

    double C1 = pow(A + B, 3);
    double C2 = pow(A, 3) + 3 * pow(A, 2) * B;
    double C3 = C1 - C2; // Числитель
    double C4 = 3 * A * pow(B, 2) + pow(B, 3); // Знаменатель
    double C5 = C3 / C4; // Результат

    cout << endl << "Вычисления с double:" << endl;
    cout << "C1: " << C1 << endl;
    cout << "C2: " << C2 << endl;
    cout << "Числитель: " << C3 << endl;
    cout << "Знаменатель: " << C4 << endl;
    cout << "Результат: " << C5 << endl;

    return 0;
}
