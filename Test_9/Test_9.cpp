﻿#include <iostream>
using namespace std;

int main()
{
    cout << "0 - false, 1 - true\n\n";
    cout << " 4 < 5\t" << (4 < 5) << endl; // < - меньше
    cout << " 4 > 5\t" << (4 > 5) << endl; // > - больше
    cout << " 4 <= 5\t" << (4 <= 5) << endl; // <= - меньше и равно
    cout << " 4 >= 5\t" << (4 >= 5) << endl; // >= - больше и равно
    cout << " 4 == 5\t" << (4 == 5) << endl; // == - равно
    cout << " 4 != 5\t" << (4 != 5) << endl; // != - не равно
    cout << endl;
    cout << "(4 < 5) && (4 > 5)\t" << ((4 < 5) && (4 > 5)) << endl; //&& - И
    cout << "(4 < 5) && (4 != 5)\t" << ((4 < 5) && (4 != 5)) << endl; //&& - И
    cout << "(4 < 5) || (4 > 5)\t" << ((4 < 5) || (4 > 5)) << endl; //|| - ИЛИ
    cout << "(4 == 5) || (4 > 5)\t" << ((4 == 5) || (4 > 5)) << endl; //|| - ИЛИ
    cout << "!(4 == 5)\t" << !(4 == 5) << endl; //! - инверсия
}
