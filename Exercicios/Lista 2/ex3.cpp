#include <iostream>

using namespace std;

//Prototipação de função

bool numeroOrdenado(int num1, int num2, int num3);

int main() {

  int num1, num2, num3, resultado;

  cout << "Digite o numero 1: ";
  cin >> num1;
  cout << "Digite o numero 2: ";
  cin >> num2;
  cout << "Digite o numero 3: ";
  cin >> num3;

  resultado = numeroOrdenado(num1, num2, num3);

  cout << resultado;
  
  return 0;
}

bool numeroOrdenado(int num1, int num2, int num3) {
  if (num3 > num2 && num2 > num1) {
    return true;
  } else {
    return false;
  }
}
