#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
setlocale(0,""); //кирилица
float t; //t Стьюдента из вероятностного калькулятора Statistica
float P; // относительная частота признака
float n; // количеств объектов в выборке 
cout << "Введите t из вероятностного калькулятора:" << endl;
cin >> t;
cout << "Введите относительную частоту признака P:" << endl;
cin >> P;
cout << "Введите количество объектов в выборке n:" << endl;
cin >> n;
float x = t * (sqrt(P * (1 - P) / n) + (1 / (2 * n))); // формула из книжки Ребровой
float di_niz = P - x; // нижняя и верхняя границы доверительного интервала для Р
float di_verh = P + x;
cout << "P= " << P << " (95% ДИ " << di_niz << "-" << di_verh <<")"<< endl; // вывод на экран
system("pause");
return 0;
}