#include <iostream>

using namespace std;

//Prototipação de função
int fatorial(int numero);

int main() {

  int numero;

  cout << "Digite um numero: ";
  cin >> numero;

  cout << "O fatorial e: " << fatorial(numero);

  return 0;
}

int fatorial(int numero) {
  int fatorial = 1;
  for (int i = 1; i <= numero; i++) {
    fatorial *= i;
  }
  return fatorial;
}