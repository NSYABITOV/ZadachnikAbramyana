#include <cmath>
#include <iostream> 
#include <valarray>
using namespace std;
//Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.

int main(){
  int a, b;
  cout << "Введите два числа: ";
  cin >> a >> b;
  cout << "Сумма: " << a + b << endl;
  cout << "Разность: " << a - b << endl;
  cout << "Произведение: " << a * b << endl;
  cout << "Частное их модулей: " << abs(a)/abs(b) << endl;
}
