#include <iostream>
using namespace std;
/*
  Дана длина ребра куба a. Найти объем куба V = a^3 и площадь его поверхности S = 6·a^2.
*/
int main(){
int a, V, S;
cout << "Введите размер длины ребра куба а: ";
  cin >> a;
  V = a * a * a;
  S = 6 * a * a;
  cout << "Объем куба: " << V << endl;
  cout << "Площадь его поверхности: " << S << endl;
}

