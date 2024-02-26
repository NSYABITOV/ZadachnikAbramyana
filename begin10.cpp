#include <iostream>
#include <cmath>
using namespace std;
/*
Даны два ненулевых числа. Найти сумму, разность, произведение и
частное их квадратов.
*/

void Math(int a, int b){
  int sum = a + b;
  int raz = a - b;
  int proizv = a * b;
  int chastn = pow(a,2)/pow(b,2);

  cout << "сумма а и b: " << sum << endl;;
  cout << "разность а и b: " << raz << endl;
  cout << "Произведение а и b: " << proizv << endl;
  cout << "Частное квадратов а и b: " << chastn << endl;
  
}

int main(){
int a, b;
  cout << "Введите два ненулевых числа: ";
  cin >> a >> b;
int sum = a + b;

Math(a,b);
}


