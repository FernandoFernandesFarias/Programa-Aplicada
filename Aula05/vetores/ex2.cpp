#include <iostream>

using namespace std;

int main() {

  int numeros[5];
  int soma = 0;

  for (int i = 0; i < 5; i++) {
    cout << "Digite um numero: " << endl;
    cin >> numeros[i];
  }

  for (int i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  cout << "A soma e: " << soma;
  return 0;
}