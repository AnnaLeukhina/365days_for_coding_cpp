﻿#include <iostream>
using namespace std;

//инкремент
//декремент

void main()
{
    setlocale(LC_ALL, "rus");
    int a = 1;
    cout << "a = " << a << endl;

    a = a + 1;
    cout << "a + 1 = " << a << endl;

    a++; //инкремент - увеличение значения на 1
    cout << "a++ = " << a << endl;

    a--; //декремент - уменьшение значения на 1
    cout << "a-- = " << a << endl;

    int b = 1;
    cout << "b = " << b << endl;
    cout <<"постфиксная запись b++ = " << b++ << endl; //постфиксная запись - наименьший приоритет выполнения
                                                       //приоритет операции - выdод переменной
    cout << "b = " << b << endl;
    cout << "префиксная запись ++b = " << ++b << endl;//префиксная запись - наивысший приоритет выполнения
                                                       //приотритет операции - увеличение значения на 1

}
