#include <iostream>
using namespace std;
//Найти расстояние между двумя точками с заданными координатами x1 и x2 на числовой оси: |x2 − x1|.
int main(){
int x1,x2,d;
  cout << "Введите 2 координаты: ";
  cin >> x1 >> x2;
  d = abs(x1-x2);
  cout << "Расстояние между координатами: " << d << endl;
}
