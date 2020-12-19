#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    cout << "ЗАДАНИЕ:\nВведите три числа и выведите на экран значение суммы,\nпроизведение и среднее арифметическое этих чисел.\n\n";
    float a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    cout << "Сумма: " << a + b + c << endl;
    cout << "Произведение: " << a * b * c << endl;
    cout << "Среднее арифметическое: " << (a + b + c)/3 << endl;
}