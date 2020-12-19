#include <iostream>
using namespace std;

//const тип_данных ИМЯ_КОНСТАТНТЫ = значение_константы;
//const тип_данных ИМЯ_КОНСТАТНТЫ_1 = значение_константы_1, ИМЯ_КОНСТАТНТЫ_2 = значение_константы_2, ИМЯ_КОНСТАТНТЫ_...;

void main()
{
    setlocale(LC_ALL, "rus");

    const int DAYS_IN_WEEK = 7;
    cout << DAYS_IN_WEEK << endl;
    
    const char NEW_LINE = '\n';
    const char TAB = '\t';
    cout << TAB << DAYS_IN_WEEK << NEW_LINE;


}