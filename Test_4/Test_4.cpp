#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int var; //объявляем переменную
	cout << "Введите челое число: ";
	cin >> var;/*инициализируем переменную - 
			   присваиваем значение, введёное с консоли
			   cin - командля для ввода данных с консоли, 
			   принадлежащая пространству имен std и библиотеке iostream*/
	cout << "Вы ввели число: " << var << endl;

	int var1, var2;
	cout << "Введите первое челое число: ";
	cin >> var1;
	cout << "Введите второе челое число: ";
	cin >> var2;
	cout << "Число 1:  " << var1 << "\nЧисло 2:  " << var2 << endl;

	int var3, var4;
	cout << "Введите два числа: ";
	cin >> var3 >> var4;
	cout << "Число 1:  " << var3 << "\nЧисло 2:  " << var4 << endl;
}