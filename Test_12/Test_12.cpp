#include <iostream>
using namespace std;

//Оператор множественного выбора switch

void main()
{
    setlocale(LC_ALL, "rus");

    int a;
    cout << "Введите число: " << endl;
    cin >> a;
    switch (a)
    {
    case 1: //если а==1, то выполняется дейтвие этого case
        cout << "Введено 1" << endl;
        break; //выход из switch после выполнения программы
    case 2:
        cout << "Введено 2" << endl;
        //отсутствие break продолжит выполнение программы до следующего break
    case 'a':
        cout << "Ты видишь этот текст, т.к. забыл поставить break в case 2" << endl; 
        break;
    default: //выполняется, если НЕ выполняются условия из других case
             //необязательный код, default можно опустить в некоторых случаях
        cout << "Я не знаю этого числа" << endl;
        break;
    }

}