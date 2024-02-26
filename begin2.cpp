#include <iostream>
//Дана сторона квадрата а. Найдите его площадь S = a^2
int main(){
int a, S;
  std::cout << "Введите размер стороны квадрата а: "<< std::endl;
  std::cin >> a;
  S = a * a;
  std::cout << "Площадь квадрата: " << S << std::endl;
}
