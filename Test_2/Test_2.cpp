#include <iostream>
using namespace std;

//тип_данных имя_переменной;
//тип_данных имя_переменной = значение_переменной;
//тип_данных имя_переменной_1, имя_переменной_2, имя_переменной_...;

void main()
{
    setlocale(LC_ALL, "rus");
    int a; //объявить переменную с именем а
    a = 5; //присвоить значение 5 переменной а
    cout << a << endl;

    int b = 10; //объявить переменную с именем b и присвоить ей значение 10 
    cout << b << endl;

    a = 15; //присвоить значение 15 переменной а
    cout << a << endl;

    int c = 1, d = 2, e = 3;
    cout << c << " " << d << e;

    double n = 1.555;
    cout << n << endl;

    char s = 'f';
    cout << s << endl;

    bool t = true;
    bool f = false;
    cout << t << f;
}