#include <iostream>
using namespace std;

//сокращенные формы записи +=, -=, *=, /=, %=

void main()
{
    setlocale(LC_ALL, "rus");

    int a = 0;
    cout << "a = " << a << endl << endl;
    a = a + 10;
    cout << "a + 10\na = " << a << endl << endl;
    a += 10;
    cout << "a += 10\na = " << a << endl << endl;
    a -= 10;
    cout << "a -= 10\na = " << a << endl << endl;

    int b = 5;
    cout << "b = " << b << endl << endl;
    b *= 5;
    cout << "b *= 5\nb = " << b << endl << endl;
    b /= 5;
    cout << "b /= 5\nb = " << b << endl << endl;
    b %= 2;
    cout << "b %= 2\nb = " << b << endl << endl;
}