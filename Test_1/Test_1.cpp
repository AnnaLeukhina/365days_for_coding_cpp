﻿#include <iostream> //директива препроцессора для подключения библиотеки iostream
using namespace std; //использование пространства имен std

void main() //точка входа в программу
{
	cout << "Hello World" << endl; //вывод Hello World на консоль
								   //+ переход на следующую строчку

	cout << "Привет" << endl; //НЕправильный вывод кирилицы

	setlocale(LC_ALL, "rus"); //подключение функции для выводы кирилицы
	cout << "Привет" << endl; //правильный вывод кирилицы

	//ESCAPE-поледовательности
	cout << "Привет + переход на следующую трочку\n"; //переход на следующую строчку
	cout << "Привет + табуляция в конце\t\n"; //табуляция в конце
	cout << "\tПривет + табуляция в начале\n"; //табуляция в начале
	cout << "\"Привет с кавычками\"\n"; //кавычки в выводе
	cout << "\'Привет с кавычками\'\n"; //кавычки в выводе
	cout << "\\Привет с бэк-слэшем\\\n"; //бэк-слэш в выводе
}