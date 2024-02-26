#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
/*
  Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P:
*/
int main(){
int a, b, C, P;
cout << "Введите размеры катетов прямоугольного треугольника a и b: ";
cin >> a >> b;
  cout << endl;
  C = sqrt(pow(a,2)+pow(b,2));
  P = a + b + C;
  cout << "Гипотенуза: "  << C << endl;
  cout << "Периметр: " << P << endl;
}
