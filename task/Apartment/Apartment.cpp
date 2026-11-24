#include <iostream>
using namespace std;

struct Apartment
{
	int price;
	int floor;
	double size;
	string street;
};

int main()
{
    int price;
	Apartment a[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Цена за квартиру:";
        cin >> a[i].price;

        cout << "Этаж: ";
        cin >> a[i].floor;

        cout << "Площадь квартиры: ";
        cin >> a[i].size;

        cout << "Улица: ";
        cin >> a[i].street;

        cout << endl;
    }
    cout << "За какую цену вы ищите квартиру: ";
    cin >> price;
    for (int i = 0;i < 3;i++)
    {
        if (price == a[i].price)
        {
            cout << "Цена за квартиру: " << a[i].price << endl;
            cout << "Этаж: " << a[i].floor << endl;
            cout << "Площадь квартиры: " << a[i].size << endl;
            cout << "Улица и номер дома: " << a[i].street << endl;
        }
    }

    return 0;
}