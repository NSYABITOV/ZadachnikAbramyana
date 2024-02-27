#include <cmath>
#include <iostream>
using namespace std;

int main(){
int A,B,C,AC,BC;
  cout << "Введите размер 3 точек: ";
  cin >> A >> B >> C;
  AC = abs(A-C);
  BC = abs(B-C);
  cout << "Отрезок АС: " << AC << endl;
  cout << "Отрезок ВС: " << BC << endl;
  cout <<" Произведение отрезков: " << AC * BC << endl;
 }
