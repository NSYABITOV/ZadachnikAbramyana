#include <iostream>
#include <cmath>
using namespace std;
/*
 Даны два неотрицательных числа a и b. Найти их среднее геометрическое, то есть квадратный корень из их произведения: √a·b.
*/
int main(){
unsigned int a, b,S;
cout << "Введите два неотрицательных числа: ";
cin >> a >> b;
  S = a * b;
  cout << "Среднее геометрическое: "  << sqrt(S) << endl;
}

