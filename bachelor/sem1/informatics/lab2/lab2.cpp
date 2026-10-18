#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, ".UTF8");
	int sum = 0;
	for (int i = 1;i < 200;i += 2) {
		sum += i;

	}
	cout << "Сумма целых положительных нечетных чисел, меньших 200: " << sum << endl;
	return 0;
}