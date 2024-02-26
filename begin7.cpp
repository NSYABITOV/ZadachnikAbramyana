#include <iostream> 
using namespace std;
/*
 Найти длину окружности L и площадь круга S заданного радиуса R:
L = 2·π·R, S = π·R
2.
*/
int main(){
double R, L, S, pi;
pi = 3.14;
  cout << "Введите размер радиуса: ";
  cin >> R;
  L = pi * R;
  S = pi * (R * R);
  cout << "Длина окружности:" << L << endl;
  cout << "Площадь круга: " << S << endl;

}
