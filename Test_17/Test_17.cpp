#include <iostream>
using namespace std;

//Цикл for

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "for (int i = 0; i < 5; i++)" << endl;
    //for (инициализация итератора; условие выполнения цикла; изменение итератора)
    for (int i = 0; i < 5; i++) 
    {
        cout << "Переменная i = " << i << endl;
    }
    cout << endl << endl;

    cout << "for (a = 0; a < 5; a++)" << endl;
    int a; //объявление оператора до цикла
    for (a = 0; a < 5; a++)
    {
        cout << "Переменная a = " << a << endl;
    }
    cout << endl << endl;

    cout << "for (; b < 5; b++)" << endl;
    int b = 0; //инициализация оператора до цикла
    for (; b < 5; b++)
    {
        cout << "Переменная b = " << b << endl;
    }
    cout << endl << endl;

    cout << "for (; b < 10; b++)" << endl;
    //цикл использует значение итератора после выполнения цикла выше
    for (; b < 10; b++) 
    {
        cout << "Переменная b = " << b << endl;
    }
    cout << endl << endl;

    cout << "for (int c = 0; c < 5; )" << endl; 
    //изменение итератора внутри цикла
    for (int c = 0; c < 5; )
    {
        cout << "Переменная c = " << c << endl;
        c++;
    }
    cout << endl << endl;

    cout << "for (int с = 0; с < 5; )" << endl;
    //изменение итератора внутри цикла
    for (int с = 0; с < 5; )
    {
        с++;
        cout << "Переменная с = " << с << endl;
    }
    cout << endl << endl;

    //cout << "for (; ;)" << endl;
    ////бесконечный цикл
    //for (; ;)
    //{
    //    cout << "Бесконечный цикл" << endl;
    //}
}