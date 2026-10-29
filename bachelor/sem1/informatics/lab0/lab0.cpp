#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	cout << "Произведение a и b: " << a * b << endl;
	cout << e <<" " << d << " " << c << " " << b << " " << a << endl;

	
	
	return 0;

}