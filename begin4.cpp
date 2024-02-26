#include <iostream>
/*Дан диаметр окружности d. Найти ее длину L = π·d. В качестве
значения π использовать 3.14.
*/
using namespace std;
  int main(){
  double d;
  double L;
  double pi = 3.14;
  cout << "Введите размер окружности d: ";
  cin >> d;
  L = pi * d;
  cout << "Длина окружности: " << L << endl;
  
}
