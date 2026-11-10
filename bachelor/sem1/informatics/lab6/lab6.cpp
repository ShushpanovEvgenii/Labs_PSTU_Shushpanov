#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);      
    SetConsoleOutputCP(1251);    
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "C");

    string s;
    string glas = "àå¸èîóûışÿÀÅ¨ÈÎÓÛİŞßaeiouAEIOU";
    string slovo;
    getline(cin, s);
    bool f = 0;
    if (s[s.size() - 1] != '.')
    {
        s += '.';
    }
    for (int i = 0;i < s.size();i++)
    {
        if (s[i] == ' ' || s[i] == '.')
        {
            if (slovo.size() > 0 && f == 0)
            {
                cout << slovo << endl;
            }
            slovo = "";
            f = 0;
        }
        else
        {
            slovo += s[i];
            if (glas.find(s[i]) != string::npos)
            {
                f = 1;
            }
        }
    }
    return 0;
}