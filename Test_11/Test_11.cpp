#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL,"rus");

    int a;
    cout << "Введите число для проверки на чётность: \n";
    cin >> a;
    if (a % 2) //если а - нечётное, то а%2==1 - true
    {
        cout << "Нечётное число\n";
    }
    else
    {
        cout << "Чётное число\n";
    }
}