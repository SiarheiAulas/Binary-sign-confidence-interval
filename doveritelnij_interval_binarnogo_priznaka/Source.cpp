#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
setlocale(0,""); //��������
float t; //t ��������� �� �������������� ������������ Statistica
float P; // ������������� ������� ��������
float n; // ��������� �������� � ������� 
cout << "������� t �� �������������� ������������:" << endl;
cin >> t;
cout << "������� ������������� ������� �������� P:" << endl;
cin >> P;
cout << "������� ���������� �������� � ������� n:" << endl;
cin >> n;
float x = t * (sqrt(P * (1 - P) / n) + (1 / (2 * n))); // ������� �� ������ ��������
float di_niz = P - x; // ������ � ������� ������� �������������� ��������� ��� �
float di_verh = P + x;
cout << "P= " << P << " (95% �� " << di_niz << "-" << di_verh <<")"<< endl; // ����� �� �����
system("pause");
return 0;
}