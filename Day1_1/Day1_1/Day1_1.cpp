//18.12.20

#include <iostream>
#include <string>
using namespace std;

//что такое класс
//что такое объект класса

class human //human - имя класса
{//тело класса
public: //модификатор
	string name; //age и name - свойства класса human 
	int age; //свойства класса еть поля класса
};

class point
{
	int x;
	int y;
};

int main()
{
	human person1; //person1 - объект класса human

	person1.name = "Anna"; //вызов поля name класса human для объекта person1
	person1.age = 20;

	point a;

	a.x = 0;
	a.y = 1;

}