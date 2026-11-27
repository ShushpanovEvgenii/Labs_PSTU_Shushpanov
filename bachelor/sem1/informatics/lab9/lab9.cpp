#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8");
	ofstream fout("F1.txt");
	cout << "Введите 10 строк:" << endl;
	string s;
	for (int i = 0;i < 10;i++)
	{
		getline(cin, s);
		fout << s << endl;
	}
	fout.close();
	ifstream fin("F1.txt");
	ofstream fout2("F2.txt");
	int count = 0;

	while (getline(fin, s))
	{
		char first = towlower(s[0]);
		char last = towlower(s[s.length() - 1]);
		if (first == last)
		{
			fout2 << s << endl;
		}
	}
	fin.close();
	fout2.close();
	ifstream fin2("F2.txt");
	char c;
	while (fin2.get(c))
	{
		count++;
	}
	fin2.close();
	cout << "Количество символов в F2: " << count << endl;
	return 0;
}