#include <iostream>
using namespace std;

/*
Контрукция логического выбора if
Лесенка if - else if
*/

void main()
{
    setlocale(LC_ALL, "rus");

    bool isRain = true; //объявим и инциализируем булевую переменную isRain co значением true
    if (isRain) //если isRain == true, то выполняются действия в {}
    {
        cout << "Идёт дождь." << endl;
    }

    bool isSunny = false; //объявим и инциализируем булевую переменную isSunny co значением false
    if (isSunny)
    {
        cout << "Нужен крем от солнца" << endl;
    }
    else //выполняется в том случае, если НЕ выполняется условие в if
    {
        cout << "Проверь, не идёт ли дождь." << endl;
    }

    int a;
    cout << "Введите число: ";
    cin >> a;
    if (a > 5)
    {
        cout << "Ваше число больше 5" << endl;
    }
    else if (a==5) //выполняется в том случае, если НЕ выполняется условие в if
                   //и условие (a==5) истинно
    {
        cout << "Ваше число равно 5" << endl;
    }
    else
    {
        cout << "Ваше число меньше 5" << endl;
    }

}
