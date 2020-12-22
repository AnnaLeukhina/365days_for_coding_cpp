#include <iostream>
using namespace std;

/*ключевое слова continue*/

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Начало цикла 1" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Перемнная i = " << i << endl;
    }

    cout << "Конец цикла 1" << endl << endl;

    cout << "Начало цикла 2" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i == 2) continue;
        cout << "Перемнная i = " << i << endl;
    }

    cout << "Конец цикла 2" << endl << endl;
}