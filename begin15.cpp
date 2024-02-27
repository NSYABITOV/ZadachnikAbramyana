#include <cmath>
#include <iostream>
using namespace std;
//Дана площадь S круга. Найти его диаметр D и длину L окружности, ограничивающей этот круг, учитывая, что L = 2·π·R, S = π·R2. В качестве значения π использовать 3.14.

int main(){
double S, D, L, R, pi =3.14;
  cout << "Введите размер площади круга: ";
  cin >> S;
  R = sqrt(S/pi);
  D = R * 2;
  L = pi * D;
  cout << "Диаметр: " << D << endl;
  cout << "Длина: " << L << endl;
  
}
