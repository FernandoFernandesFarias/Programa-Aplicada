#include <iostream>

using namespace std;

//Prototipação de função

int soma(int num1, int num2, int num3);

int main() {

  int num1, num2, num3, resultado;

  cout << "Digite o numero 1: ";
  cin >> num1;
  cout << "Digite o numero 2: ";
  cin >> num2;
  cout << "Digite o numero 3: ";
  cin >> num3;

  resultado = soma(num1, num2, num3);
  cout << "A soma deu: " << resultado;

  return 0;
}

int soma(int num1, int num2, int num3) {
  return num1 + num2 + num3;
}
