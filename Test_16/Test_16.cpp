#include <iostream>
using namespace std;

//Написать программу, которая находит сумму всех целых нечётных чисел в диапазоне, указанном пользователем
//do while

int main()
{
    setlocale(LC_ALL, "rus");
    int rangeBegin, rangeEnd, sum = 0;

    cout << "Введите начало и конец диапазона: ";
    cin >> rangeBegin >> rangeEnd;

    if ((rangeBegin == rangeEnd && rangeBegin%2 == 0) || rangeBegin > rangeEnd) //проверка на правильный ввод диапазона
    {
        cout << "Некорректный ввод диапазона";
        return 0;
    }    

    do
    {
        if (rangeBegin % 2 == 1)
            sum += rangeBegin;
        rangeBegin++;
    } while (rangeBegin <= rangeEnd);

    cout << "\nСумма нечётных чисел диапазона: " << sum;
}