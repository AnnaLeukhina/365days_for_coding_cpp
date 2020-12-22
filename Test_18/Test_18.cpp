#include <iostream>
using namespace std;

/*ключевое слова break*/

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Начало цикла 1" << endl;

    for (int i = 0; i < 10 ; i++)
    {
        cout << "Перемнная i = " << i << endl;
    }

    cout << "Конец цикла 1" << endl << endl;

    cout << "Начало цикла 2" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Перемнная i = " << i << endl;
        if (i == 5) break;
    }

    cout << "Конец цикла 2" << endl << endl;

    cout << "Начало цикла 3" << endl;

    for (int i = 0; ; i++) //бесконечный цикл (без использования break)
    {
        cout << "Перемнная i = " << i << endl;
        if (i == 5) break;
    }

    cout << "Конец цикла 3" << endl << endl;
}