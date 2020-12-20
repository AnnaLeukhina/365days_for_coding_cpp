#include <iostream>
using namespace std;

//Оператор множественного выбора switch

void main()
{
    setlocale(LC_ALL, "rus");

    int a, b;
    int menu_button;
    cout << "Введите два числа: " << endl;
    cin >> a >> b;
    cout << "Какую арифметическую операцию провести: \n1 - сложение (a + b)\n2 - вычитание (a - b)\n3 - умножение (a * b)\n4 - деление (a / b)" << endl;
    cin >> menu_button;
    switch (menu_button)
    {
    case 1:
        cout << "Ответ: " << a + b << endl;
        break;
    case 2:
        cout << "Ответ: " << a - b << endl;
        break;
    case 3:
        cout << "Ответ: " << a * b << endl;
        break;
    case 4:
        cout << "Ответ: " << (float)a / b<< endl;
        break;
    default: 
        cout << "Я не знаю этого числа" << endl;
        break;
    }

}