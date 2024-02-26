#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
/*
Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
Найти площади этих кругов S1 и S2, а также площадь S3 кольца, внешний
радиус которого равен R1, а внутренний радиус равен R2:
*/

int main(){
double R1, R2, S1, S2, S3;
double pi = 3.14;
  cout << "Введите размеры радиуса кругов R1 и R2: ";
  cin >> R1 >> R2;
S1 = pi * pow(R1,2);
S2 = pi * pow(R2,2);
S3 = S1- S2;
  cout << "Площадь S1: " << S1 << "\nПлощадь S2: " << S2 << "\nПлощадь S3: " << S3 << endl;
}
