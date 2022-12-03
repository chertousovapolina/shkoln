// ConsoleApplication18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct shkola{
    string name;
    int klass;
    int bukva;
    float oz;

};
int main()
{
    shkola shkoln;
    shkoln.name = "Levan";
    shkoln.klass = 3;
    shkoln.bukva = 'A';
    

    shkola shkoln2;
    shkoln2.name = "Zalup";
    shkoln2.klass = 5;
    shkoln2.bukva = 'B';
    

    shkola shkoln3;
    shkoln3.name = "Chlen";
    shkoln3.klass = 4;
    shkoln3.bukva = 'A';
    cin >> shkoln.oz >> shkoln2.oz >> shkoln3.oz;

    if (shkoln3.oz > shkoln.oz && shkoln3.oz > shkoln2.oz)
        cout << shkoln3.name;

    if (shkoln2.oz > shkoln.oz && shkoln2.oz > shkoln3.oz)
        cout << shkoln2.name;

    if (shkoln.oz > shkoln2.oz && shkoln.oz > shkoln3.oz)
        cout << shkoln.name;

    
}


